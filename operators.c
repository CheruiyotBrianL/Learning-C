#include <stdio.h>

int main() {
    int n = 120;

    if (n > 0 && n <= 100)
        printf("Range (1 - 100).\n");
        else if (n<=0)
        printf("Less than 1\n");
        else
        printf("Greater than 100\n");
}
