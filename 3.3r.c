#include <stdio.h> //saish
#include <stdlib.h>
int main()
{
    int i, j;
    int **a, **t;
    /* Allocate 3x4 matrix */
    a = (int **)malloc(3 * sizeof(int *));
    for(i = 0; i < 3; i++)
        a[i] = (int *)malloc(4 * sizeof(int));
    /* Allocate 4x3 transpose matrix */
    t = (int **)malloc(4 * sizeof(int *));
    for(i = 0; i < 4; i++)
        t[i] = (int *)malloc(3 * sizeof(int));
    printf("Enter marks (3x4 matrix: 3 students, 4 subjects):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    /* Transpose */
    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            t[j][i] = a[i][j];
    printf("\nOriginal Matrix (3x4):\n");
    for(i = 0; i < 3; i++)
    { for(j = 0; j < 4; j++) printf("%4d ", a[i][j]); printf("\n"); }
    printf("\nTranspose Matrix (4x3):\n");
    for(i = 0; i < 4; i++)
    { for(j = 0; j < 3; j++) printf("%4d ", t[i][j]); printf("\n"); }
    /* Free memory */
    for(i = 0; i < 3; i++) free(a[i]); free(a);
    for(i = 0; i < 4; i++) free(t[i]); free(t);
    return 0;
}
