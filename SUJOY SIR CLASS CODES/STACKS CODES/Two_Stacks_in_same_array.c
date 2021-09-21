
#include <stdio.h>
#include <stdlib.h>
// merging two stacks one by one
int top1, top2, MAX;
int * stack;
void create(int N){
stack = (int *) malloc(N*sizeof(int));
top1 = -1;
top2 = N;
MAX = N;
}
int peek(int ind){
if(ind == 1){
if(top1 > -1){
return stack[top1];
}
}
else{
if(top2 < MAX){
return stack[top2];
}
}
return -1;
}
int pop(int ind){
if(ind == 1){
if(top1 > -1){
return stack[top1--];
}
}
else{
if(top2 < MAX){
return stack[top2--];
}
}
return -1;
}
int stack_full(){
if(top1 == top2-1){
return 1;
}
else{
return 0;
}
}
void push(int ind, int ele){
if(!stack_full()){
if(ind == 1){
stack[++top1]=ele;
}
else{
stack[--top2]=ele;
}
}
}
void display_full(){
for(int i = 0 ; i <= top1 ; i++){
printf("%d ",stack[i]);
}
printf("| ");
for(int i = top2 ; i < MAX ; i++){
printf("%d ",stack[i]);
}
printf("\n");
}

int main(){
int size;
printf("Enter Size of Stack : ");
scanf("%d",&size);
create(size);
int choice = 0, st, ele, data, full;
while( choice != -1 ){
printf("1 : Push \n2 : Pop \n3 : Peek \n4 : Check if Stack is Full \n5 : Display Full Stack \n-----------\n");
printf("Enter Choice : ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter stack number and element : ");
scanf("%d%d",&st,&ele);
push(st,ele);
break;
case 2:
printf("Enter stack id to pop : ");
scanf("%d",&st);
data = pop(st);
printf("Data Popped : %d\n",data);
break;
case 3:
printf("Enter stack id to peek : ");
scanf("%d",&st);
printf("Data on top of stack : %d\n",peek(st));
break;
case 4:
full = stack_full();
if(full){
printf("Stack is Full\n");
}
else{
printf("Stack is not Full\n");
}
break;
case 5 :
printf("\nStack : ");
display_full();
break;
}
}
return 0;
}
