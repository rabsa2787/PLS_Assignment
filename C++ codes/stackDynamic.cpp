#include <iostream>
using namespace std;

void printArray(int size) {
    int* arr = (int*)__builtin_alloca(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        arr[i] = (i + 1) * 2;
    }

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    printArray(5);
    printArray(8);

    return 0;
}
