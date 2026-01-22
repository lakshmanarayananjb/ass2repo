
void checkNumber(int n) {
    int i, isPrime = 1;

    if (n <= 1)
        isPrime = 0;

    for (i = 0; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is Prime number\n",n);
    else
        printf("%d is Not a prime number\n",n);
}
