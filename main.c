#include <stdio.h>
#include "mylib.h"

void add( int x, int y) // Addition function
{
    printf("Addition: %d\n", x + y); // Print sum
}

void sub( int x, int y)
{
    printf("Subtraction: %d\n", x - y);
}

void mul( int x, int y)
{
    printf("Multiplication: %d\n", x * y);
}




void app_main()
{
// Initialize operations structure
operations_t ops = {
    .addition = add, // Assign function pointers
    .subtraction = sub, // Assign function pointers
    .multiplication = mul, // Assign function pointers
    .division = ADDITION, // Set enum value
    .ops_clks = {
        .clk1 = 400000, // Set clk1 value
        .clk2 = 600000 // Set clk2 value
         } ,
    .ops_clks.clk2 = 800000, // Update clk2 value
    .ops_flags.flag1 = 1, // Set flag1 value
    .ops_flags.flag2 = 0 // Set flag2 value

};


    initialize_operations(&ops); // Call initialize_operations with the ops structure




    my_function();

    printf("%d\n",x);
}
