

#include<stdio.h>
#include<stdlib.h>

#define MAX 20

void printsparse(int b[MAX][3]);
void readsparse(int b[MAX][3]);
void addsparse(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3]);

int main()

{
   
int b1[MAX][3],b2[MAX][3],b3[MAX][3],b4[MAX][3],b5[MAX][3];
   
readsparse(b1);
   
readsparse(b2);

readsparse(b3);
   
addsparse(b1,b2,b4);

addsparse(b3,b4,b5);
   
printsparse(b5);

printf("\n");

return 0;
}

void readsparse(int b[MAX][3])
{
   
int i,t,m,n;
   
printf("\nEnter no. of rows and columns:");
   
scanf("%d%d",&m,&n);

printf("\nNo. of non-zero triples:");
   
scanf("%d",&t);
   
b[0][0]=m;
   
b[0][1]=n;
   
b[0][2]=t;
   
for(i=1;i<=t;i++)
 {
       
  printf("\nEnter the triples(row,column,value):");
       
  scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
 }
}

void addsparse(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3])
{
   
int t1,t2,i,j,k;
   
if(b1[0][0]!=b2[0][0]||b1[0][1]!=b2[0][1])
    {
       
     printf("\nYou have entered invalid matrix!!Size must be equal\n");
       
     exit(0);
    }
   
t1=b1[0][2];
   
t2=b2[0][2];
   
i=j=k=0;
   
b3[0][0]=b1[0][0];
   
b3[0][1]=b1[0][1];
   
while(i<=t1&&j<=t2)
    {
       
if(b1[i][0]<b2[j][0])      
//row numbers are not equal
       
{
           
b3[k][0]=b1[i][0];
           
b3[k][1]=b1[i][1];
           
b3[k][2]=b1[i][2];
           
k++;
           
i++;
       
}
       
else if(b2[j][0]<b1[i][0])      
//row numbers are not equal
       
{
           
b3[k][0]=b2[j][0];
           
b3[k][1]=b2[j][1];
           
b3[k][2]=b2[j][2];
       
    k++;
           
j++;
       
}
       
else if(b1[i][1]<b2[j][1])      
//row numbers are equal, compare column
       
{
           
b3[k][0]=b1[i][0];
           
b3[k][1]=b1[i][1];
           
b3[k][2]=b1[i][2];
           
k++;
           
i++;
        }
       
else if(b2[j][1]<b1[i][1])      
//row numbers are equal, compare column
       
{
           
b3[k][0]=b2[j][0];
           
b3[k][1]=b2[j][1];
           
b3[k][2]=b2[j][2];
           
k++;
           
j++;
       
}
       
else
       
{
           
b3[k][0]=b1[i][0];      //row and column numbers are equal
           
b3[k][1]=b1[i][1];
           
b3[k][2]=b1[i][2]+b2[j][2];
           
k++;
           
i++;
           
j++;
       
}
    }
   
while(i<=t1)        //copy remaining terms from b1
    {
       
b3[k][0]=b1[i][0];
       
b3[k][1]=b1[i][1];
       
b3[k][2]=b1[i][2];
       
i++;
       
k++;
    }
   
while(j<=t2)        //copy remaining terms from b2
    {
       
b3[k][0]=b2[j][0];
       
b3[k][1]=b1[j][1];
       
b3[k][2]=b1[j][2];
       
j++;
       
k++;
    }
   
b3[0][2]=k-1;       //set number of terms in b3
}
void printsparse(int b[MAX][3])
{
   
int i,t;
   
t=b[0][2];
   
printf("\nrow\tcolumn\tvalue");
   
for(i=1;i<=t;i++)
    {
       
printf("\n%d\t%d\t%d",b[i][0],b[i][1],b[i][2]);
    }
}

