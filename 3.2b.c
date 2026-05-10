#include <stdio.h>
//saish
int main()
{
    float price[10];
    int i;
    float max, min;
    printf("Enter stock prices for 10 days:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%f", &price[i]);
    }
    max = min = price[0];
    for(i = 1; i < 10; i++)
    {
        if(price[i] > max) max = price[i];
        if(price[i] < min) min = price[i];
    }
    printf("\n--- Stock Price Analysis ---\n");
    printf("Maximum Stock Price = %.2f\n", max);
    printf("Minimum Stock Price = %.2f\n", min);
    
    return 0;
}
