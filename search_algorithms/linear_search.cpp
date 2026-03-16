#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int linear_search(std::vector<int> arr, int val) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == val) return i; 
    }
    return -1;
}

int main() {
    std::vector<int> array;
    std::string line;
    int num;
    int res;
    std::cout << "Enter array (one line< separated by spaces):" << std::endl;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) array.push_back(num);
    std::cout << "Enter element for search: ";
    std::cin >> num;
    res = linear_search(array, num);
    std::cout << (res != -1 ? "Element index is " + std::to_string(res) : "Element not found!");
    return 0;
}