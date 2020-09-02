#include<stdio.h>

long long primeinrange(long long n1, long long n2);
long long prime(long long pr);
int main() {

    long long findprime1;
    long long findprime2;
    printf("Enter first number: ");
    scanf("%lld", &findprime1);
    printf("Enter second number: ");
    scanf("%lld", &findprime2);
    printf("\n");
    primeinrange(findprime1, findprime2);

}

long long primeinrange(long long n1, long long n2) {
    for (n1; n1 <= n2; n1++)
        prime(n1);
}

long long prime(long long pr) {
    int n = 2;
    for (n; n < pr; n++) {
        if (pr % n == 0)
            break;
    }
    if (n == pr)
        printf("\nPrime: %lld\n", pr);
    else
        printf("\nNot Prime: %lld\n", pr);
}
