#include <stdio.h>
//saish

int main() {
    int num, sum=0, temp, r;

    scanf("%d",&num);
    temp=num;

    while(temp!=0){
        r=temp%10;
        sum += r*r*r;
        temp/=10;
    }

    if(sum==num) printf("Armstrong");
    else printf("Not");

    return 0;
}