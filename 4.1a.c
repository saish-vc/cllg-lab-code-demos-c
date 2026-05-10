#include <stdio.h> //saish
int main()
{
    char fname[20], lname[20], fullname[40];
    int i = 0, j = 0, length = 0;
    printf("Enter First Name: "); scanf("%s", fname);
    printf("Enter Last Name : "); scanf("%s", lname);
    /* Copy first name */
    while(fname[i] != '\0')
    { fullname[length] = fname[i]; i++; length++; }
    /* Add space */
    fullname[length] = ' '; length++;
    /* Copy last name */
    while(lname[j] != '\0')
    { fullname[length] = lname[j]; j++; length++; }
    fullname[length] = '\0';
    printf("\nFull Name        : %s\n", fullname);
    printf("Length of Name   : %d characters\n", length);
    if(length <= 20)
        printf("Status: Name fits on the screen.\n");
    else
        printf("Status: Name does NOT fit on the screen.\n");
    return 0;
}
