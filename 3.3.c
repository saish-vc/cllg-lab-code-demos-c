#include <stdio.h>
//saish
int main() {
    float a[10],max,min;

    for(int i=0;i<10;i++)
        scanf("%f",&a[i]);

    max=min=a[0];

    for(int i=1;i<10;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }

    printf("%f %f",max,min);
}