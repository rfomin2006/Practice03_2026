#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> linear_search(std::vector<int> &arr, int val);

int main() {
    std::vector<int> array;
    std::string line;
    int num;
    std::vector<int> res;
    std::cout << "Enter array (one line, separated by spaces):" << std::endl;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) array.push_back(num);
    std::cout << "Enter element for search: ";
    std::cin >> num;
    res = linear_search(array, num);
    if (res.size() >= 1) {
        std::cout << "Element indexes is: ";
        for (const auto& el : res) {
            std::cout << el << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Element not found!";
    }
    return 0;
}

std::vector<int> linear_search(std::vector<int> &arr, int val) {
    std::vector<int> indexes;
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == val) indexes.push_back(i); 
    }
    return indexes;
}