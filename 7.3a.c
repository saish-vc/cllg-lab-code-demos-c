/* 
   Program to create report.txt,
   write student details and display contents
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll;
    float marks;

    // Taking input
    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%f", &marks);

    // Writing into file
    fp = fopen("report.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "Student Name: %s\n", name);
    fprintf(fp, "Roll Number : %d\n", roll);
    fprintf(fp, "Marks       : %.2f\n", marks);

    fclose(fp);

    // Reading from file
    fp = fopen("report.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    char ch;

    printf("\nFile Contents:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
