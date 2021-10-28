
//SORTING THE ELEMENTS INSIDE A STACK USING BUBBLE SORT AND STACK OPERATIONS.

#include<stdio.h>

#define MAX 10

int top1=-1;

void push(int stack[MAX],int *top,int data)
{
 if(*top==(MAX-1))
   printf("\nStack Overflow");
   
 else
 {
  (*top)++;
  
  stack[(*top)]=data;
  
 }
 
}

void pop(int stack[MAX],int *top)
{
   int item;
   
   if(*top==-1)
    printf("\nStack Underflow");
    
   else
   {
    item=stack[(*top)];
    (*top)--;
   }
   
   //return item;
}    

int isEmpty(int stack[MAX],int top)
{
 if(top==-1)
  return 1;
  
 else
  return 0;
}

void bubbleSortStack(int input[], int size)
{ 
    int tmpStack1[size],tmpStack2[size];
    
    int top2=-1,top3=-1,i,t,temp;
      
    for(i = 0; i < size; i++)
    { 
       push(tmpStack1,&top2,input[i]);
    }
      
      
    for(i = 0; i < size; i++){ 
        
        if(i % 2 == 0){ 
            while (!isEmpty(tmpStack1,top2)){ 
                t = tmpStack1[top2];
                pop(tmpStack1,&top2); 
                  
                if(isEmpty(tmpStack2,top3)){ 
                    push(tmpStack2,&top3,t);  
                }
                
                else{ 
                    
                    if(tmpStack2[top3] > t){ 
                        temp = tmpStack2[top3]; 
                        pop(tmpStack2,&top3); 
                        push(tmpStack2,&top3,t); 
                        push(tmpStack2,&top3,temp); 
                    } 
                    
                    else{ 
                        push(tmpStack2,&top3,t); 
                    } 
                } 
            } 
            input[size-1-i] = tmpStack2[top3];
            pop(tmpStack2,&top3); 
        }     
        
        else{
            
            while(!isEmpty(tmpStack2,top3)){ 
                t = tmpStack2[top3];
                pop(tmpStack2,&top3);
                  
                if (isEmpty(tmpStack1,top2)){ 
                    push(tmpStack1,&top2,t); 
                }
                  
                else{ 
                    
                    if (tmpStack1[top2] > t){ 
                        temp = tmpStack1[top2];
                        pop(tmpStack1,&top2); 
                          
                        push(tmpStack1,&top2,t); 
                        push(tmpStack1,&top2,temp); 
                    } 
                    
                    else{
                        push(tmpStack1,&top2,t); 
                    }
                } 
            } 
              
            input[size-1-i] = tmpStack1[top2];
            pop(tmpStack1,&top2); 
        } 
    }
    
    printf("\n");
    for(i = 0; i < size; i++){
        printf("%d\t",input[i]); 
    }
} 

void display(int stack[MAX],int top)
{
 int i;
 
 i=top;
 
 while(i!=-1)
 {
  printf("%d ",stack[i]);
  
  i--;
 }
 
 printf("\n");
}

int main()
{
 int stack[MAX];
 
 int n,i,data;
 
 printf("\nEnter the no of items in the stack ");
 scanf("%d",&n);
 
 printf("\nEnter the elements in the stack\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&data);
  
  push(stack,&top1,data);
  
 }
 
 printf("\nBefore sorting the stack we get :\t");
 display(stack,top1);
 
 printf("\nAfter sorting the stack we get :\t");
 bubbleSortStack(stack,(top1+1));
 
 printf("\n");
 
 return 0;
}
 
 
 
