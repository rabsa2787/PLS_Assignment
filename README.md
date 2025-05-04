# PLS_Assignment
Created for Programming Language Structure Course

# Fixed Stack Dynamic Allocation

🟦 C++:
int myArr[5];
// Size is fixed at compile time.
// Memory is allocated on the stack.
// Cannot change the size once defined.

🟨 Python:
myArray = [0] * 5
# Python doesn't have true fixed-size arrays.
# This creates a list with 5 elements, simulating fixed size.
# Memory is still allocated on the heap internally.

# Stack Dynamic Allocation

🟦 C++:
void myFunc(int size) {
    int myArr[size];
}
// Size is set during runtime.
// Memory is still on the stack.
// Useful for variable-length local arrays (VLA, compiler-dependent).

🟨 Python:
def myFunc(size):
    myArr = [0] * size
# Size is determined at runtime, like C++.
// Memory is always on the heap, as Python doesn't use stack for such data.
// Behaves dynamically even though the syntax looks similar.

# Fixed Heap Dynamic Allocation

🟦 C++:
int* arr = new int[5];
delete[] arr;
// Fixed size, but memory is on the heap.
// You must manually manage memory using new and delete[].

🟨 Python:
myArr = [i * 2 for i in range(10)]
# Fixed number of elements (10).
# Python handles memory allocation automatically.
# Memory is always on the heap.

# Heap Dynamic Allocation

🟦 C++:
#include <vector>
std::vector<int> myArr;
myArr.push_back(5);
myArr.push_back(10);
// Uses vector which grows/shrinks dynamically.
// Memory is managed on the heap.
// No need to manually allocate or deallocate memory.

🟨 Python:
myArr = []
myArr.append(5)
myArr.append(10)
# Python lists are fully dynamic.
# Memory is allocated on the heap.
# Grows and shrinks as needed.
