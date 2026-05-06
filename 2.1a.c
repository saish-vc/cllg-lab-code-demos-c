#include <stdio.h>
//saish
int main() {
    int houseNumber;
    scanf("%d", &houseNumber);

    if (houseNumber % 2 == 0)
        printf("LEFT\n");
    else
        printf("RIGHT\n");

    return 0;
}