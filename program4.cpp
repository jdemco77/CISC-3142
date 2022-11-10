//Write a program to print the size of each of the built-in types.

#include<stdio.h>

int main() {
    int intT;
    float floatT;
    double doubleT;
    char charT;
    long longT;
    long long longlongT;
    double long doublelongT;

    // sizeof evaluates the size of a variable 
    printf("Size of int: %zu bytes\n", sizeof(intT));
    printf("Size of float: %zu bytes\n", sizeof(floatT));
    printf("Size of double: %zu bytes\n", sizeof(doubleT));
    printf("Size of char: %zu byte\n", sizeof(charT));
    printf("Size of long: %zu byte\n", sizeof(longT));
    printf("Size of longlong: %zu byte\n", sizeof(longlongT));
    printf("Size of longlong: %zu byte\n", sizeof(doublelongT));
    
    printf("Integral types can be signed or unsigned, defaulted to signed");
    signed int sin=-1;
    unsigned int sin2=-1;
    cout << sin << endl;  // prints -1
    cout << sin2 << endl; //prints 4231567= size of potential values based on bit size
    
    //signed int or unsigned int
    printf("char can be signed or unsigned but char != signed char, the compiler will determine which is used depending on case");



    printf("");

    printf("");
    printf("");
    printf("");






    return 0;
}