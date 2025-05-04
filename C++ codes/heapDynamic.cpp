#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    arr.reserve(3);

    for (int val : {5, 10, 15}) {
        arr.push_back(val);
    }

    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    arr.pop_back();

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
