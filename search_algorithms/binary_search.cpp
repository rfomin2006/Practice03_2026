#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int binary_search(std::vector<int> &array, int target);

int main() {
    std::vector<int> array;
    std::string line;
    int num;
    int res;
    std::cout << "Enter array (one line, separated by spaces):" << std::endl;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) array.push_back(num);
    std::cout << "Enter element for search: ";
    std::cin >> num;
    res = binary_search(array, num);
    std::cout << (res != -1 ? "Element index is " + std::to_string(res) : "Element not found!");
    return 0;
}

int binary_search(std::vector<int> &array, int target) {
    int first = 0;
    int last = array.size() - 1;
    while (first <= last) {
        const int mid = (first + last) / 2;
        if (array[mid] == target) return mid;
        else if (array[mid] < target) first = mid + 1;
        else last = mid - 1;
    }
    return -1;
}