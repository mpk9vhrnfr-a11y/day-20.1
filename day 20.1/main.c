#include <stdio.h>

int main(void) {
    int n, num, first, last, x = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = num % 10;

    while(num >= 10) {
        num = num / 10;
        x = x * 10;
    }
    first = num;

    temp = n % x;
    temp = temp / 10;

    n = last * x+ temp * 10 + first;

    printf("Number after swapping first and last digit = %d", n);

    return 0;
}
