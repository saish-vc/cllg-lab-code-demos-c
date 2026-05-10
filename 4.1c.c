#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, j, length = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    /* Find length */
    while(str[length] != '\0') length++;
    j = length - 1;
    /* Compare from both ends */
    while(i < j)
    {
        if(str[i] != str[j])
        { flag = 0; break; }
        i++; j--;
    }
    if(flag == 1) printf("%s is a Palindrome.\n", str);
    else           printf("%s is NOT a Palindrome.\n", str);
    return 0;
}
