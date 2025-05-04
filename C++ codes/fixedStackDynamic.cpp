#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    for (std::size_t i = 0; i < arr.size(); ++i) {
        arr.at(i) = (i + 1) * 10;
    }

    for (int val : arr) {
        std::cout << val << " ";
    }

    std::cout << std::endl;

    return 0;
}
