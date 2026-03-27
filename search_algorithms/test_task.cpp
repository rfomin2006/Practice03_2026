#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
std::vector<int> linear_search(std::vector<std::pair<std::string, std::string>> &arr, std::string name);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::vector<std::pair<std::string, std::string>> array = {
        std::pair<std::string, std::string>("Иванов Пётр", "ИС-21"),
        std::pair<std::string, std::string>("Сидоров Алексей", "ИС-22"),
        std::pair<std::string, std::string>("Петров Иван", "ИС-21")
    };
    std::string name;
    std::vector<int> res;
    std::cout << "Введите фамилию студента: ";
    std::cin >> name;
    res = linear_search(array, name);
    if (res.size() >= 1) {
        std::cout << "Найденные студенты: ";
        for (const auto& el : res) {
            std::cout << array[el].first << "\n";
        }
        std::cout << std::endl;
    } else std::cout << "Студенты с такой фамилией не найдены!";
    return 0;
}

std::vector<int> linear_search(std::vector<std::pair<std::string, std::string>> &arr, std::string name) {
    std::vector<int> indexes;
    for (size_t i = 0; i < arr.size(); i++) {
        std::string surname;
        size_t space = arr[i].first.find(" ");
        if (space != std::string::npos) surname = arr[i].first.substr(0, space);
        else surname = arr[i].first;
        if (surname == name) indexes.push_back(i);
    }
    return indexes;
}