
/*_______________WAP TO COPY A STRING AND PRINT IT ON THE SCREEN_____________________________*/

#include<stdio.h>

int main()
{
 char str1[80],str2[80],str3[165];
 int i,j;
 
 printf("\nEnter your first name\n");
 scanf("%s",str1);
 
 printf("\nEnter your last name\n");
 scanf("%s",str2);
 
 //printf("%s %s\n",str1,str2);
 
 for(i=0;str1[i]!='\0';i++)
 {
  str3[i]=str1[i];
 }
 
 //str3[i]='\t';
 str3[i]=' ';
 
 for(j=0;str2[j]!='\0';j++){
  str3[i+j+1]=str2[j];
  //str3[i+j]=str2[j];
 } 
 printf("The string after concatenation becomes : %s\n\n",str3);
   
 return 0;
}
  
