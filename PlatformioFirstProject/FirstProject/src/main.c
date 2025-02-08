#include <stdio.h>
#include <calc.h>


void addFunction() {
    int a = 10;
    int b = 5;
    int sum =calc_add(a, b);
    printf("1: Sum of %d and %d is %d \n", a, b, sum);
    printf("2: sum of %d and %d is %d in hexadecimal  0x%x\n", a, b, sum,sum);
    printf("3: sum of %d and %d is %d in octa decimal  0%o\n", a, b, sum,sum);
}

void multiplyFunction() {
    double a = 10.56789;
    double b = 10.89765;
    double multiplication = calc_multiply(a, b);
    printf("3: Multiplication of %lf and %lf is %lf \n", a, b, multiplication);
   
}

void divideFunction() {
    float a = 5.2;
    float b = 10.3;
    float division = calc_divide(a, b);
    printf("4: Division of %f and %f is %f \n", a, b, division);
}

void calculateRectangleAreaFunction() {
    float length = 5.2;
    float width = 10.3;
    float area = calculateRectangleArea(length, width);
    printf("5: Area of rectangle with length %f and width %f is %f \n", length, width, area);
}

void calculateCircleAreaFunction() {
    double radius = 59999.2;
    double area = calcukateCircleArea(radius);
    printf("6: Area of circle with radius %lf is %lf \n", radius, area);} 


int main() {
    addFunction();
    multiplyFunction();
    divideFunction();
    calculateRectangleAreaFunction();
}



