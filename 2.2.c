#include <stdio.h>
//saish

int main() {
    int ch, p=0, a=0;

    do {
        scanf("%d",&ch);
        switch(ch) {
            case 1: p++; break;
            case 2: a++; break;
            case 3: printf("%d %d",p,a); break;
        }
    } while(ch!=4);

    return 0;
}