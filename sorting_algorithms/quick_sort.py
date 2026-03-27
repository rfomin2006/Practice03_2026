def qsort(array: list[int]) -> list[int]:
    if len(array) > 1:
        low: list[int] = []; high: list[int] = []
        pivot: int = (len(array) - 1) // 2
        for i in array:
            if i < array[pivot]: low.append(i)
            elif i > array[pivot]: high.append(i)
        return qsort(low) + [array[pivot]] + qsort(high)
    return array

def main() -> None:
    array: list[int] = [10, 7, 8, 9, 1, 5]
    print(array)
    sorted: list[int] = qsort(array)
    print(sorted)

if __name__ == "__main__":
    main()