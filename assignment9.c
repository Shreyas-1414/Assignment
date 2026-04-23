#include <stdio.h>
#include <math.h>

void main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int num = n;

    int result = log10(n);
    int digits = result + 1;

    

    int total = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        total = total + round((pow(last_digit,digits)));
        n = n / 10;
    };
    

    if (total == num) {
        printf("Number is armstrong");
    } else {
        printf("Number is not armstrong");
    };
}
