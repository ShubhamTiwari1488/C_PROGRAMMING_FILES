
/*______________THIS PROGRAM IS ON BASIC OPERATIONS ON ARRAYS :=

                  1. INSERTION
                  2.DELETION
                  3.SEARCH
                  4.UPDATION
                  5.TRAVERSAL
                  6.SORTING
                  7.MERGING
                  8.REVERSING
                  9.FINDING THE LARGEST NUMBER
                  10.TRANSPOSE OF MATRIX
                                                             ________________________________*/
                                                             
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int INSERT(int *,int,int,int);   
int DELETE(int *,int,int);
int SEARCH(int *,int,int);
void UPDATE(int *,int,int);
void TRAVERSE(int *,int);
void SORT(int *,int);
void MERGE(int *,int *,int *,int,int);
void REVERSE(int *,int);
void LARGE(int *,int);
void TRANSPOSE(int **,int **,int,int);

int main()
{
 int *a,*b,*c;
 int **arr,**t_matrix;
 int num,pos,n,i,d,m,j;
 char ch;

 while(1)
{ 
 printf("\nDo you want to continue ,Y/N\n");
 scanf(" %c",&ch);
 ch=toupper(ch);
 if(ch=='N')
 {
    printf("\nExiting\n");
    exit(0);
 }
 
 printf("\nThe operations of the arrays are as listed:=\n1. INSERTION\n2. DELETION\n3. SEARCH\n4. UPDATION\n5. TRAVERSAL\n6. SORTING\n7. MERGING\n8. REVERSING\n9. FINDING THE LARGEST NUMBER\n10. TRANSPOSE OF MATRIX\n\n");

printf("\nEnter the operation which you want to perform from the above list\n");
scanf("%d",&d);

switch(d)
{
 case 1: 
        printf("\nEnter the number of elements in the array\n");
        scanf("%d",&n);
        
        a=(int *)malloc((n+1)*sizeof(int));
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter element %d\n",i+1);
         scanf("%d",&a[i]);
        }
        printf("\nEnter the number to be inserted and its position\n");
        scanf("%d %d",&num,&pos);
        
        n=INSERT(a,n,num,pos);
                
        //printf("\nThe value of n is %d\n",n);
        
        printf("The new array after insertion is :=> \n");
        for(i=0;i<n;i++)
        {
         printf("%d\t",a[i]);
        }
        printf("\n\n");
        
        free(a);
        
        break;
        
 case 2:
        printf("\nEnter the number of elements in the array\n");
        scanf("%d",&n);
        
        a=(int *)malloc(n*sizeof(int));
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter the data for element %d >>>",(i+1));
         scanf("%d",a+i);
        }
        
        printf("\nEnter the element to be deleted\n");
        scanf("%d",&num);
        
        n=DELETE(a,n,num);
        
        printf("\nAfter deletion of the element the array is as follows :\n");
        
        for(i=0;i<n;i++)
        {
          printf("Element no %d of the array is : %d\n",i+1,*(a+i));
        }
        
        printf("\n\n");
        
        free(a);
        
        break;   
        
 case 3:
        printf("\nEnter the number of elements in the array\n");
        scanf("%d",&n);
        
        a=(int *)malloc(n*sizeof(int));
        
        printf("Enter the elements of the array\n");
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter the value of element number %d >>>",i+1);
         scanf("%d",(a+i));
        }
        
        printf("\nEnter the number you want to search in the list\n");
        scanf("%d",&num); 
        
        pos=SEARCH(a,n,num);
        
        if(pos==-1)
        {
         printf("\nThe element does not exists in the list\n");
         exit(0);
        } 
        
        printf("\nThe position of the element in the list is at %d\n",(pos+1));
        
        printf("\n\n");
        
        free(a);
        
        break;    
        
 case 4:
        printf("\nEnter the number of elements in the list\n");
        scanf("%d",&n);
        
        a=(int *)malloc(n*sizeof(int));
        
        printf("\nEnter the elements in the array\n");
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter the value of element number %d >>>",(i+1));
         scanf("%d",(a+i));
        }
        
        printf("\nEnter the element to be updated\n");
        scanf("%d",&num);
        
        UPDATE(a,n,num);
        
        printf("\nThe list after updation becomes\n");
        
        for(i=0;i<n;i++)
        {
         printf("\nThe element of the list at position %d is %d\n",(i+1),a[i]);
        }
        
        printf("\n\n");
        
        free(a);
        
        break; 
        
        
  case 5:
        printf("\nEnter the number of elements in the list\n");
        scanf("%d",&n);
        
        a=(int *)malloc(n*sizeof(int));
        
        printf("\nEnter the elements in the array\n");
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter the value of element number %d >>>",(i+1));
         scanf("%d",(a+i));
        }
        
        printf("\nExecuting the traverse operation \n");
        
        printf("\nPrinting the elements in the list\n");
        
        TRAVERSE(a,n);
        
        printf("\n\n");
        
        free(a);
        
        break;
        
  case 6:
         printf("\nEnter the number of elements in the list\n");
        scanf("%d",&n);
        
        a=(int *)malloc(n*sizeof(int));
        
        printf("\nEnter the elements in the array\n");
        
        for(i=0;i<n;i++)
        {
         printf("\nEnter the value of element number %d >>>",(i+1));
         scanf("%d",(a+i));
        }
        
        SORT(a,n);
        
        printf("\nThe elements in the list after being sorted are as follows :\n");
        for(i=0;i<n;i++)
        {
         printf(" %d ",*(a+i));
        }
        
        printf("\n\n");
        
        free(a);
        
        break;    
        
  case 7:
         printf("\nEnter the number of elements of 1st array\n");
         scanf("%d",&n);
         
         a=(int *)malloc(n*sizeof(int));
         
         printf("\nEnter the elements of arrays::\n");
         
         for(i=0;i<n;i++)
         {
          printf("\nEnter the element no %d in the array >>>",i+1);
          scanf("%d",a+i);
         }
         
         printf("\nEnter the number of elements of 2nd array\n");
         scanf("%d",&m);
         
         b=(int *)malloc(m*sizeof(int));
         
         printf("\nEnter the elements of the arrays::\n");
         
         for(i=0;i<m;i++)
         {
          printf("\nEnter the element no %d in the array >>>",i+1);
          scanf("%d",b+i);
         } 
         
         c=(int *)malloc((n+m)*sizeof(int));
         
         MERGE(a,b,c,n,m);
         
         printf("\nAfter merging the array is as follows ::\n");
         
         for(i=0;i<(n+m);i++)
         {
          printf("%d ",*(c+i));
         }
         
         printf("\n\n");
         
         free(a);
         free(b);
         free(c);
         
         break; 
  
  case 8:
         printf("\nEnter the number of elements in the array\n");
         scanf("%d",&n);
         
         a=(int *)malloc(n*sizeof(int));
         printf("\nEnter the elements of the array\n");
         
         for(i=0;i<n;i++)
         {
          printf("\nEnter the element no %d in the array >>>",i+1);
          scanf("%d",a+i);
         }
         
         printf("\nThe array that you have entered is :\n");
         
         for(i=0;i<n;i++)
         {
          printf("%d ",a[i]);
         } 
         
         REVERSE(a,n);
         
         printf("\nThe array after reversing becomes :\n");
         
         for(i=0;i<n;i++)
         {
          printf("%d ",a[i]);
         }
         
         printf("\n\n");
         
         free(a);
         
         break; 
         
  case 9:
         printf("\nEnter the number of elements in the array\n");
         scanf("%d",&n);
         
         a=(int *)malloc(n*sizeof(int));
         
         printf("\nEnter the elements one by one \n");
         
         for(i=0;i<n;i++)
         {
          printf("\nEnter the element no %d in the array >>>",i+1);
          scanf("%d",a+i);
         }        
         
         LARGE(a,n);
         
         free(a);
         
         break;  
         
  case 10:
          printf("\nTranspose of matrix is going to be performed\n\n");
          printf("Enter the number of rows of the matrix\n");
          scanf("%d",&m);
          printf("Enter the number of columns of the matrix\n");
          scanf("%d",&n);
          
          arr=(int **)malloc(m*sizeof(int *));
          t_matrix=(int **)malloc(n*sizeof(int *));
          
          if((!arr) || (!t_matrix))
          {
            printf("\nMemory not allocated ......quiting\n");
            exit(0);
          }  
          
          for(i=0;i<m;i++)
             arr[i]=(int *)malloc(n*sizeof(int));
             
          for(i=0;i<n;i++)
             t_matrix[i]=(int *)malloc(m*sizeof(int));   
          
          
          printf("\nEnter the elements of the matrix\n");
          
          for(i=0;i<m;i++)
            for(j=0;j<n;j++)
             { 
               printf("\nEnter element of row=%d and col=%d ",(i+1),j+1);  
               scanf("%d",&arr[i][j]);
            }   
          
          printf("\n===============================================\n");
          printf("\nPrinting the original matrix\n");
          
          for(i=0;i<m;i++)
          {
           for(j=0;j<n;j++)
           {
            printf("%d ",arr[i][j]);
           }
           printf("\n");
         }
                 
          TRANSPOSE(arr,t_matrix,m,n);
          
          free(arr);
          free(t_matrix);
          
          break;
          
                      
                           
}
}          
 return 0;
}

int INSERT(int *a,int n,int num,int pos)
{
 int j;
 j=n-1;
 
 if(pos>(n+1))
    pos=n+1;
    
 if(pos<1)
    pos=1;
       
 while(j>=(pos-1))
 {
  a[j+1]=a[j];
  j--;
 }
 
 a[pos-1]=num;
 n=(n+1);
 return n;
}

int DELETE(int *a,int n,int num)
{
 int i,j,pos;
 
 pos=SEARCH(a,n,num);
 
 if(pos==-1)
 {
  printf("\nThe element does not exist .Please choose an element that exists\n");
  exit(0);
 }
 
 i=pos;
 
 while(i<n) 
 {
  a[i]=a[i+1];
  i++;
 }
 
 n=n-1;
 
 return n;
}   
 
int SEARCH(int *a,int n,int num)
{
 int i,flag=-1;
 
 for(i=0;i<n;i++)
 {
  if(a[i]==num)
  {
   flag=i;
   break;
  }
 }
 
 return flag;
}
 
void UPDATE(int *a,int n,int num)
{
 int pos,mod_num;
 
 pos=SEARCH(a,n,num);
 
 if(pos==-1)
 {
  printf("\nThe element does not exist in the list ..please enter the element correctly\n");
  exit(0);
 }
 
 printf("\nEnter the modified value for the element\n");
 scanf("%d",&mod_num);
 
 a[pos]=mod_num; 
}     

void TRAVERSE(int *a,int n)
{
 int i;
 
 for(i=0;i<n;i++)
 {
  printf("The value of element %d is %d\n",i+1,*(a+i));
 }
}
        
void SORT(int *a,int n)
{
 int i,j,temp;
 
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j+1]<a[j])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}
    
    
void MERGE(int *a,int *b,int *c,int n,int m)
{
  int i,j;
  
  for(i=0;i<n;i++)
  {
   *(c+i)=*(a+i);
  }
  
  for(j=0;j<m;j++)
  {
   c[i+j]=b[j];
  }
  
 }
 
void REVERSE(int *a,int n)
{
 int i=0,j=n-1,temp;
 
 while(i<j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  
  i++;
  j--;
 }
 
}
 
void LARGE(int *a,int n)
{
 int i=0,max;         
 
 max=a[i];
 
 for(i=1;i<n;i++)
 {
  if(max<a[i])
       max=a[i];
       
 }
 
 printf("\nThe Largest number in the array is : %d\n",max);
 
 printf("\n\n");
 
}

void TRANSPOSE(int **a,int **b,int m,int n)
{
 int i,j;
 
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {
   b[i][j]=a[j][i];
  }
  
 printf("\n-------------------------------------------------------\n");
 printf("\nPrinting the transpose matrix\n");
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
    printf("%d ",b[i][j]);
  printf("\n");
 }
    
 printf("\n\n");
 
}
             
