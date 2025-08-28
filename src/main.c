#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif



int main(void)
{
    int result_add = add(5, 3);
    int result_subtract = subtract(5, 3);
    int result_multiply = multiply(3, 3); 
    int result_incorrect_sum = incorrect_sum(77, 7); 
    printf("Addition Result: %d\n", result_add);
    printf("Subtraction Result: %d\n", result_subtract);
    printf("Multiplication Result: %d\n", result_multiply); 
    printf("Incorrect Sum: %d\n", result_incorrect_sum); 
    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    } else {
        printf("Failed to create greeting.\n");
    }
    return 0;
}