#include<stdio.h>

int main() {

    int age;
    float height;
    double salary;

    printf("Write your age: ");
    scanf("%d", &age);
    printf("Write your height (in meters): ");
    scanf("%f", &height);
    printf("Write your salary (in dollars): ");
    scanf("%lf", &salary);
    printf("You are %d years old, %f meters tall and earn $%.2lf");

}