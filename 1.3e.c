#include <stdio.h>
//saish
int main() {
    unsigned int num;
    scanf("%u", &num);

    unsigned int result = num ^ 0xAA;

    printf("Result = %u\n", result);

    return 0;
}