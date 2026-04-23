#include <stdio.h>
void main() {

    
    int n, factorial;
    printf("Enter the number: ");
    scanf("%d", &n); 
    factorial = 1; 


    while (n > 0) 
    {
        factorial = factorial * n;
        n = n - 1;
    };
    printf("Factorial is: %d", factorial);
}
