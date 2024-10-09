#include<stdio.h>

// Single line comment

/*
    Multiline comments
*/

int main() {
    int age = 32;  //int: Represents integer values.
    printf("The age is %d \n", age);  // d represent age and \n is for new line.

    float height = 3.02f;   // float: Represents single-precision floating-point numbers.
    printf("The height is %.2f \n", height);

    double salary = 12345.34;  // double: Represents double-precision floating-point numbers.
    printf("This salary is %2lf \n", salary);

    char ch = 'A';  // char: Represents a single character.
    printf("charecter: %c \n", ch);

    return 0;
}