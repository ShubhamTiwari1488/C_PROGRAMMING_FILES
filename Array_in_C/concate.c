
/*___________________CONCATENATE THREE DIFFERENT STRINGS INTO ONE___________________________*/

#include<stdio.h>

int main()
{
 char f_name[20]={"VISWANATH"},
      m_name[20]={"PRATAP"},
      l_name[20]={"SINGH"},
      name[80];
      
 int i,j,k;
 
 i=0;j=0;k=0;
 
 while(f_name[i]!='\0')
 {
  name[i]=f_name[i];
  i++;
 }
 
 name[i]=' ';
 
 while(m_name[j]!='\0')
 {
  name[i+j+1]=m_name[j];
  j++;
 }
 
 name[i+j+1]=' ';
 
 while(l_name[k]!='\0')
 {
  name[i+j+k+2]=l_name[k];
  k++;
 }
 
 printf("\nThe full name of the person is : %s\n\n",name);
 
 return 0;
}
        
