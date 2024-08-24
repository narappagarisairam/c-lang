// const Pointer to const Data (const T* const ptr)

#include <stdio.h>

int main() {
    int value1 = 10;
    int value2 = 20;

    const int* const ptr = &value1;  // const pointer to const int

    printf("Value pointed by ptr: %d\n", *ptr);

    // *ptr = 15;  // Error: cannot modify the data
    // ptr = &value2;  // Error: cannot change the pointer itself

    return 0;
}
/*
Explanation:

const int* const ptr means both the pointer and the data it points to are constant.
Neither the data pointed to by ptr nor the pointer itself can be changed.
Summary:
const T* ptr: The data pointed to by ptr cannot be changed; the pointer itself can be.
T* const ptr: The pointer itself cannot be changed; the data it points to can be.
const T* const ptr: Neither the pointer nor the data it points to can be changed.
*/
