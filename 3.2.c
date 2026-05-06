#include <stdio.h>
//saish
int main() {
    int a[50],n,temp;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}