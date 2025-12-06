#include "mylib.h"
#include <stdio.h>

int x =5;

static operations_t ops_instance;

void initialize_operations(operations_t* ops)
{
 
 ops_instance = *ops; // Copy the passed operations to the static instance

ops_instance.addition(5,5); // Call addition function
ops_instance.subtraction(10,4); // Call subtraction function
ops_instance.multiplication(3,3); // Call multiplication function

printf("Division Enum Value: %d\n", ops_instance.division); // Print division enum value
printf("Clock 1: %d\n", ops_instance.ops_clks.clk1); // Print clk1 value
printf("Clock 2: %d\n", ops_instance.ops_clks.clk2); // Print clk2 value
printf("Flag 1: %d\n", ops_instance.ops_flags.flag1); // Print flag1 value
printf("Flag 2: %d\n", ops_instance.ops_flags.flag2); // Print flag2 value


}





void my_function()
{
    printf("hello world\n");
}