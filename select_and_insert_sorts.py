#type: ignore
from cytimer import timer # https://github.com/rfomin2006/cytimer
from random import randint

@timer
def select_sort(arr: list[int]) -> None:
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[i]: arr[j], arr[i] = arr[i], arr[j]
            
@timer
def insert_sort(arr: list[int]) -> None:
    for i in range(1, len(arr)):
        item: int = arr[i]
        j: int = i
        while j > 0 and arr[j - 1] > item:
            arr[j] = arr[j - 1]
            j -= 1
        arr[j] = item
            
def main() -> None:
    ARRAY_SIZE: int = 10_000
    array1: list[int] = [randint(0, 1_000_000_000) for _ in range(ARRAY_SIZE)]
    array2: list[int] = array1.copy()
    time1: int = int(select_sort(array1)[1] * 1000)
    time2: int = int(insert_sort(array2)[1] * 1000)
    print(f'Selection sort time: {time1}ms\nInsertion sort time: {time2}ms')
    
if __name__ == '__main__':
    main()