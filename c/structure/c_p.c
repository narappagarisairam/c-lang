// const Pointer (T* const ptr)

#include <stdio.h>

int main() {
    int value1 = 10;
    int value2 = 20;

    int* const ptr = &value1;  // const pointer to int

    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 15;  // Allowed: can modify the data
    printf("Modified value pointed by ptr: %d\n", *ptr);

    // ptr = &value2;  // Error: cannot change the pointer itself

    return 0;
}
/*Explanation:

int* const ptr means the pointer itself is constant and cannot be changed to point to another location.
The data pointed to by ptr can be modified.
*/
