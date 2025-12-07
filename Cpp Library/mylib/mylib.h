#ifndef MYLIB_MYLIB_H
#define MYLIB_MYLIB_H

extern int x;



enum operations_enum {
    ADDITION=0,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION
};





typedef void (*addd)(int x, int y);
typedef void (*subb)(int x, int y);
typedef void (*mull)(int x, int y);

typedef struct flags {
    int flag1;
    int flag2;
} flags_t;

typedef struct 
{
    int clk1;
    int clk2;
}clks;



typedef struct operations {
    addd addition;
    subb subtraction;
    mull multiplication;
    int division;
    flags_t ops_flags;
    clks ops_clks;

} operations_t;



class MyClass {

public:
    void percentage(int x, int y);
    float display(int x);
    int show();
    void getValue( operations_t* ops);

private:
    int value=10;

protected:
    void helperFunction();

};









void initialize_operations(operations_t* ops);


void my_function();

#endif // MACRO
