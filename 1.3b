#include <stdio.h>
int main()
{
 unsigned int num1, num2, merged;
 printf("Enter first number (0-255): ");


 scanf("%u", &num1);
 printf("Enter second number (0-255): ");
 scanf("%u", &num2);
 merged = (num1 << 8) | num2;
 printf("\n--- Bitwise Merge ---\n");
 printf("First Number: %u\n", num1);
 printf("Second Number: %u\n", num2);
 printf("Merged Result: %u\n", merged);
 printf("\n--- Extracted Back ---\n");
 printf("First Number: %u\n", (merged >> 8) & 0xFF);
 printf("Second Number: %u\n", merged & 0xFF);
 return 0;
}
