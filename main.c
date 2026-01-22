
void checkNumber(int n) {
    int i, isPrime = 1;

    if (n <= 1)
        isPrime = 0;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
}
