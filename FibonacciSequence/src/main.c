#include <stdio.h>
#include <fibo.h>

void fibonachiFunction() {
    int n = 10;
    int fibo = fibonachi(n);
    printf("Fibonachi of %d is %d \n", n, fibo);
}

 int main() {
    fibonachiFunction();
    return 0;
}
    