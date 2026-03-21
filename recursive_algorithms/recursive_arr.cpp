#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void print_array(std::vector<int> &array, size_t id = 0);

int main() {
    std::vector<int> array;
    std::string line;
    int num;
    std::cout << "Enter array (one line, separated by spaces):" << std::endl;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) array.push_back(num);
    std::cout << "You entered: ";
    print_array(array);
    std::cout << std::endl;
    return 0;
}

void print_array(std::vector<int> &array, size_t id) {
    if (id >= array.size()) return;
    std::cout << array[id] << " ";
    print_array(array, ++id);
}