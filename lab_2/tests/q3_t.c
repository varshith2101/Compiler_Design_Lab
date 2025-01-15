#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    float z = 3.14;
    char c = 'A';
    
    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is greater than or equal to y\n");
    }

    switch (x) {
        case 10:
            printf("x is 10\n");
            break;
        case 20:
            printf("x is 20\n");
            break;
        default:
            printf("x is neither 10 nor 20\n");
    }

    for (int i = 0; i < x; i++) {
        printf("i = %d\n", i);
    }

    while (y > 0) {
        printf("y = %d\n", y);
        y--;
    }

    do {
        printf("z = %.2f\n", z);
        z *= 2;
    } while (z < 10);

    return 0;
}
