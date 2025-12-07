#include "mylib.h"
#include <stdio.h>

int x =5;

static operations_t ops_instance;
static operations_t ops_instance2;


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



 void MyClass::percentage(int x, int y) {
    if (y != 0) {
        float percent = (static_cast<float>(x) / y) * 100;
        printf("Percentage: %.2f%%\n", percent);
    } else {
        printf("Error: Division by zero in percentage calculation.\n");
    }
 }



int MyClass::show() {
    printf("Value: %d\n", value);
    helperFunction();
    return value;
}

float MyClass::display(int x) {
    printf("Display: %d\n", x*value);
    return static_cast<float>(x);
}

void MyClass::helperFunction() {
    // Protected helper function implementation
    printf("Helper Function Called\n");
}


void MyClass::getValue( operations_t* ops) {
    // Implementation that uses operations_t structure
    ops_instance2 = *ops; // Copy the passed operations to another static instance
    printf("GetValue called. Flag1: %d\n", ops_instance2.ops_flags.flag1);
    printf("GetValue called. Clk1: %d\n", ops_instance2.ops_clks.clk1);
}