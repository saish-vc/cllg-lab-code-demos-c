/*
   Program to search a word in a text file
   and count its occurrences
   vaibhav
*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50];
    char str[100];
    int count = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    while (fscanf(fp, "%s", str) != EOF)
    {
        if (strcmp(word, str) == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("Word found.\n");
        printf("Occurrences = %d", count);
    }
    else
    {
        printf("Word not found.");
    }

    fclose(fp);

    return 0;
}
