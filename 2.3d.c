#include <stdio.h>
//saish

int main() {
    int n,i=1;
    long long f=1;

    scanf("%d",&n);

    do {
        f*=i;
        i++;
    } while(i<=n);

    printf("%lld",f);
}