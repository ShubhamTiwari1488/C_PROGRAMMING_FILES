
//WAP TO FIND AND DISPLAY THE NUMBERS OF ELEMENTS BETWEEN TWO ELEMENTS A AND B...

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *a;
 int n,i,a_num,b_num,pos_a,pos_b,count=0;
 
 printf("\nEnter the number of elements of the array\n");
 scanf("%d",&n);
 
 a=(int *)malloc(n*sizeof(int));
 
 if(!a)
 {
  printf("Memory not allocated\n");
  exit(1);
 }
 
 for(i=0;i<n;i++)
 {
  printf("Enter %d element : ",(i+1));
  scanf("%d",a+i);
 }
 
 printf("\nEnter the two elements ,i.e a and b\n");
 scanf("%d %d",&a_num,&b_num);
 
 for(i=0;i<n;i++)
 {
  if(a_num==a[i])
    pos_a=i;
    
  if(b_num==a[i])
    pos_b=i;
    
 }
 
 for(i=pos_a;i<=pos_b;i++){
   printf("%d ",a[i]);
   count++;
 }
 
 printf("\nThe number of elements between them are : %d\n",count);
   
 printf("\n");
 
 return 0;
}
           
