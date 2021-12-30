
//CYCLIC ROTATING THE ARRAY BY ONE

#include<stdio.h>

void Rotate(int arr[],int );
void Display(int arr[],int );
void swap(int *,int *);

int main()
{
 int n,i;
 
 int arr[10];
 
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 
 printf("\nEnter the elements \n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 printf("\nDisplaying the array before rotating :\t");
 
 Display(arr,n);
 
 printf("\nDisplaying the array after rotating by one :\t");
 
 Rotate(arr,n);
 Display(arr,n);
 
 return 0;
}

void Rotate(int arr[],int n)
{
 
 /*___THERE IS ONE METHOD IN WHICH WE CAN STORE THE LAST ELEMENT AND THEN SHIFT THE REST ELEMENTS TO THEIR RESPECTIVE
	NEXT POSITION ,i.e n-1 to n . AND AT LAST INSERT THE LAST STORED ELEMENT TO THE FIRST POSITION.
				
	BUT HERE WE ARE GOING TO FOLLOW ANOTHER METHOD (THE SWAPPING METHOD).
							_______________________*/ 
							
  int i=0,j=n-1;
  
  while(i!=j)
  {
   swap(&arr[i],&arr[j]);
   
   i++;
  }
  
}

void Display(int arr[],int n)
{
 int i=0;
 
 for(;i<n;i++)
   printf("%d ",arr[i]);
   
 printf("\n");
 
}

void swap(int *a,int *b)
{
 int temp;
 
 temp=*a;
 
 *a=*b;
 
 *b=temp;
} 
