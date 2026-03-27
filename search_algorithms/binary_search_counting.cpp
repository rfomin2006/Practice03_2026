#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::pair<int, int> binary_search(std::vector<int> &array, int target);

int main() {
    std::vector<int> array;
    std::string line;
    int num;
    std::pair<int, int> res;
    std::cout << "Enter array (one line, separated by spaces):" << std::endl;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) array.push_back(num);
    std::cout << "Enter element for search: ";
    std::cin >> num;
    res = binary_search(array, num);
    if (res.first != -1)
    {
        std::cout << "Element index is " << res.first << "\nOperations: " << res.second << std::endl;
    } else {
        std::cout << "Element not found!" << std::endl;
    }
    return 0;
}

std::pair<int, int> binary_search(std::vector<int> &array, int target) {
    std::pair<int, int> res = {-1, 0};
    int first = 0;
    int last = array.size() - 1;
    while (first <= last) {
        const int mid = (first + last) / 2;
        res.second++;
        if (array[mid] == target) {
            res.first = mid;
            break;
        } else if (array[mid] < target) first = mid + 1;
        else last = mid - 1;
    }
    return res;
}