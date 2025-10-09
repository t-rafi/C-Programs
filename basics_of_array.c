#include <stdio.h>  // allows us to use printf and scanf

int main() {  // program starts here

    // This is an array of 5 numbers
    // It can store 5 integers
    // We gave 4 values, so the last one will be 0 automatically
    int array[5] = {5, 10, 15, 20};

    // array[0] = 5
    // array[1] = 10
    // array[2] = 15
    // array[3] = 20
    // array[4] = 0  (since we didn’t set it)

    // Print the 5th number (index 4)
    printf("%d", array[4]);  // it will print 0

    return 0;  // program ends
}
