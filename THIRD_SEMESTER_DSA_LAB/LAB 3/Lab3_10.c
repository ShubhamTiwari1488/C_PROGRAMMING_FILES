
/*________WAP TO SWAP ALL 1ST COLUMN WITH ALL THE CORRESPONDING ELEMENTS IN THE LAST COLUMN ,AND 2ND COLUMN WITH THE SECOND LAST COLUMN AND 3RD WITH 3RD LAST ETC.OF A 2-D DYNAMIC ARRAY._______________*/

#include <stdio.h>
#include<stdlib.h>

// function to swap the array elements
void Array_Swap(int **array ,int n,int m)
{ 
    int i=0,j=m-1,temp=0,k=0;
    
    for(i=0,j=m-1;i<j;i++,j--)
    {
     for(k=0;k<n;k++)
     {
      temp=array[k][i];
      array[k][i]=array[k][j];
      array[k][j]=temp;
      
     }  
  }
}

int main()
{
    int **array_1;
    int i,j,n,m;
    
    printf("\nEnter the dimension of the array : ");
    scanf("%d %d",&n,&m);
    
    array_1=(int **)malloc(n*sizeof(int *));
    
    if(!array_1)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
    
    for(i=0;i<n;i++)
      array_1[i]=(int *)malloc(m*sizeof(int));
      
    if(!array_1)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
    
        
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
       for(j=0;j<m;j++)
       {
        scanf("%d",&array_1[i][j]);
       }
    }
    
    printf("\nThe array you entered is ::\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
      printf("%d\t",array_1[i][j]);
     }
     printf("\n");
    }
    
    printf("\n\n");
      
    Array_Swap(array_1,n,m);

    printf("\nThe array after swap is..\n");
    for(i=0 ; i<n ; i++){
    for(j=0;j<m;j++)
    {
        printf("%d\t",array_1[i][j]);
    }
    
    printf("\n");
   }
    
    return 0;
}
