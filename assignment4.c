#include <stdio.h>

int main() {
    float bs, hra, ta, ts, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    hra = 0.10 * bs;   
    ta  = 0.05 * bs;   
    ts  = 0.02 * bs;   

    gross = bs + hra + ta - ts;

    printf("Basic Salary = %.2f\n", bs);
    printf("HRA = %.2f\n", hra);
    printf("TA = %.2f\n", ta);
    printf("TS = %.2f\n", ts);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
