#include <stdio.h>
#include "mylib.h"


extern "C" void app_main(); // Entry point for the application problem "_Z8app_mainv"


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
operations_t ops = {};

    // Assign function pointers
    ops.addition = add;
    ops.subtraction = sub;
    ops.multiplication = mul;
    // Set enum
    ops.division = ADDITION;
    // Set clk values
    ops.ops_clks.clk1 = 400000;
    ops.ops_clks.clk2 = 600000;
    // Update clk2 safely
    ops.ops_clks.clk2 = 800000;
    // Set flags
    ops.ops_flags.flag1 = 1;
    ops.ops_flags.flag2 = 0;
    initialize_operations(&ops); // Call initialize_operations with the ops structure
    my_function();


    // Demonstrate MyClass usage
    MyClass myClassInstance; // Create an instance/object of MyClass
    myClassInstance.percentage(25, 200); // Calculate and display percentage
    myClassInstance.display(7); // Display value
    myClassInstance.show(); // Show value and call helper function
    //myClassInstance.helperFunction(); // Call protected helper function (accessible here for demonstration)

    operations_t ops2 = {};
    ops2.ops_flags.flag1 = 42;
    ops2.ops_clks.clk1 = 123456;
    myClassInstance.getValue(&ops);
    //

    operations_t* fp;     // struct pointer
    fp = &ops2; // point to ops2
    fp->division = 73; // set division via pointer
    fp->ops_flags.flag2 = 84; // set flag2 via pointer

    printf("Division via pointer: %d\n",fp->division); // access division via pointer
    printf("Flag2 via pointer: %d\n",fp->ops_flags.flag2); // access flag2 via pointer



    // Access and print the external variable x
    printf("%d\n",x);
}
