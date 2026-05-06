#include <stdio.h>
//saish
int main() {
    int num;
    scanf("%d", &num);

    unsigned char original = (unsigned char)num;
    unsigned char complemented = ~original & 0xFF;

    printf("Complement = %u\n", complemented);

    return 0;
}