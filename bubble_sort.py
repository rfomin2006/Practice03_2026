def bubble_sort(arr: list[int]) -> tuple[int, int]:
    checks: int = 0; swaps: int = 0
    for i in range(len(arr)):
        for j in range(len(arr) - i - 1):
            checks += 1
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaps += 1
    return checks, swaps

def main() -> None:
    array: list[int] = [5, 1, 4, 2, 8]
    print(array)
    checks, swaps = bubble_sort(array)
    print(f'{array}\nchecks: {checks}\nswaps: {swaps}')

if __name__ == '__main__':
    main()