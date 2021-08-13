
//WAP TO SORT ROWS OF A DYNAMIC MATRIX HAVING M ROWS AND N COLUMNS IN ASCENDING AND COLUMNS IN DESCENDING ORDER.

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int **array1,**array2;
    
    int i, j, k, a, m, n;
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    
    array1=(int **)malloc(m*sizeof(int *));
    array2=(int **)malloc(m*sizeof(int *));
    
    if(!array1 && !array2)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
     
    for(i=0;i<m;i++)
    {
     array1[i]=(int *)malloc(n*sizeof(int));
     array2[i]=(int *)malloc(n*sizeof(int));
    }
    
     if(!array1 && !array2)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
      
    printf("Enter co-efficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
                printf(" %d", array1[i][j]);
        }
        printf("\n");
    }
    printf("After arranging rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                if (array1[i][j] > array1[i][k])
                {
                    a = array1[i][j];
                    array1[i][j] = array1[i][k];
                    array1[i][k] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
    }
    printf("After arranging the columns in descending order \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k = i + 1; k < m; ++k)
            {
                if (array2[i][j] < array2[k][j])
                {
                    a = array2[i][j];
                    array2[i][j] = array2[k][j];
                    array2[k][j] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array2[i][j]);
        }
        printf("\n");
    }
    
  return 0;
}

