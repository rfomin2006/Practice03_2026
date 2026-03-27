def sort_students(array: list[dict[str, float]]) -> None:
    for i in range(len(array)):
        for j in range(len(array) - i - 1):
            v1: float = list(array[j].values())[0]; v2: float = list(array[j + 1].values())[0]
            if v1 < v2: array[j], array[j + 1] = array[j + 1], array[j]
            if v1 == v2:
                if list(array[j].keys())[0].split()[0] > list(array[j + 1].keys())[0].split()[0]:
                    array[j], array[j + 1] = array[j + 1], array[j]

def main() -> None:
    students: list[dict[str, float]] = [
        {"Иванов Петр": 4.5},
        {"Сидоров Алексей": 4.8},
        {"Петров Иван": 4.8},
        {"Смирнова Анна": 4.2}
    ]
    print(students)
    sort_students(students)
    print(students)

if __name__ == "__main__":
    main()