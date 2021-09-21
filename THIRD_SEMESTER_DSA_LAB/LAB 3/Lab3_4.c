

/*_______WAP TO REPLACE EVERY ELEMENT IN THE ARRAY WITH THE NEXT GREATEST ELEMENT PRESENT IN THE SAME ARRAY_____*/

#include<stdio.h>
#include<stdlib.h>

void printArray(int a[] ,int n)
{ 
 int i;
 
 for(i = 0;i < n;i++)
   printf("%d ",a[i]);
}

void replaceWithNextGreatest(int a[], int size)
{
    int maximum =  a[size-1];
    int i,temp;
    a[size-1] =-1; 
    for(i = size-2; i >= 0; i--)
    {
        temp = a[i];
        a[i] = maximum;
        if(maximum < temp)
            maximum = temp;
    }
 printf("After replace the modified array is: ");
 printArray(a , size);	
 printf("\n");
}

int main()
{
    int *arr1;
    int n,i;
    
    printf("\nEnter the number of elements\n");
    scanf("%d",&n);
    
    arr1=(int *)malloc(n*sizeof(int));
    
    if(!arr1)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
    
    printf("\nEnter the elements of the array\n");
    
    for(i=0;i<n;i++)
    {
      scanf("%d",arr1+i);
    }
      
//------------------------------------------------------
    replaceWithNextGreatest(arr1, n);
    return 0;
}
