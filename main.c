#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s anagram1 anagram2\n", argv[0]);
        return 1;
    }

    int primes[26] = { 2,  3,  5,  7,  11, 13, 17, 19, 23, 29,
                       31, 37, 41, 43, 47, 53, 49, 61, 67, 71,
                       73, 79, 83, 97, 101 };

    int factor1 = 1;
    int factor2 = 1;

    for (int i = 0; argv[1][i]; ++i) {
        if (argv[1][i] > 90)
            factor1 *= primes[argv[1][i] - 97];
        else
            factor1 *= primes[argv[1][i] - 65];
    }

    for (int i = 0; argv[2][i]; ++i) {
        if (argv[2][i] > 90)
            factor2 *= primes[argv[2][i] - 97];
        else
            factor2 *= primes[argv[2][i] - 65];
    }

    if (factor1 == factor2)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
