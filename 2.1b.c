#include <stdio.h>
#include <ctype.h>
//saish
int main() {
    char ch;
    ch = getchar();

    if (isalpha(ch))
        printf("Alphabet");
    else if (isdigit(ch))
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}