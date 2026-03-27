def bubble_sort(arr: list[int]) -> tuple[int, int]:
    checks: int = 0; swaps: int = 0
    for i in range(len(arr)):
        swapped: bool = False
        for j in range(len(arr) - i - 1):
            checks += 1
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaps += 1
                swapped = True
        if not swapped: break
    return checks, swaps

def main() -> None:
    array1: list[int] = [5, 1, 4, 2, 8]
    array2: list[int] = [1, 2, 3, 4, 5]
    print(array1)
    checks, swaps = bubble_sort(array1)
    print(f'{array1}\nchecks: {checks}\nswaps: {swaps}')
    print(array2)
    checks, swaps = bubble_sort(array2)
    print(f'{array2}\nchecks: {checks}\nswaps: {swaps}')

if __name__ == '__main__':
    main()