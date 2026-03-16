#include <iostream>
#include <vector>

void print_array(std::vector<int> arr) {
    for (const auto& el : arr) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

std::pair<int, int> bubble_sort(std::vector<int> &arr) {
    static std::pair<int, int> stats(0, 0);
    int t = 0;
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            stats.first++;
            if (arr[j] > arr[j + 1]) {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
                stats.second++;
            }
        }
    }
    return stats;
}

int main(void) {
    std::vector<int> array = {5, 1, 4, 2, 8};
    print_array(array);
    std::pair<int, int> stats = bubble_sort(array);
    print_array(array);
    std::cout << "Checks: " << stats.first << std::endl << "Swaps: " << stats.second << std::endl;
    return 0;
}