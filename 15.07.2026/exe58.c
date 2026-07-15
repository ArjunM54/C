#include <stdio.h>

int main() {
    float x, a=1, sum;
    int n;

    printf("Enter the range (number of terms): ");
    scanf("%d", &n);

    printf("Enter a number for x: ");
    scanf("%f", &x);

    for (int i = 2; i <= n; i += 2) {

        long long fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        a=a*x;

        sum += (a / fact);

        printf("%.2f ", sum);
    }

    printf("\n");
    return 0;
}
