/*In C, a const pointer is a pointer whose value or the data it points to cannot be changed, depending on how the const keyword is used. There are three common scenarios involving const with pointers:

Pointer to const Data (const T* ptr):

The data pointed to by the pointer cannot be modified, but the pointer itself can be changed to point to something else.
const Pointer (T* const ptr):

The pointer itself cannot be changed to point to another location, but the data it points to can be modified.
const Pointer to const Data (const T* const ptr):

Neither the data pointed to by the pointer nor the pointer itself can be changed.
1 Pointer to const Data (const T* ptr)
*/
#include <stdio.h>

int main() {
    int value1 = 10;
    int value2 = 20;

    const int* ptr = &value1;  // Pointer to const int

    printf("Value pointed by ptr: %d\n", *ptr);

    // *ptr = 15;  // Error: cannot modify the data through the pointer

    ptr = &value2;  // Allowed: can change the pointer itself
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
/*Explanation:

const int* ptr means the data pointed to by ptr is constant and cannot be modified.
The pointer ptr can be changed to point to another location.
*/
