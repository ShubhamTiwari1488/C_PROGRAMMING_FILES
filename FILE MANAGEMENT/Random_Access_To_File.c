
//RANDOM ACCESS FILE

#include<stdio.h>

int main()
{
 FILE *fp;
 
 long n;
 char c;
 
 fp=fopen("Random","w");
 
 while((c=getchar())!=EOF)
 	putc(c,fp);
 	
 printf("\nNo of characters entered = %ld\n",ftell(fp));
 
 fclose(fp);
 
 fp=fopen("Random","r");
 
 n=0L;
 
 while(feof(fp)==0)
 {
  fseek(fp,n,0);	//position to n+1 th character
  
  printf("\nPositon of %c is %ld\n",getc(fp),ftell(fp));
  
  n=n+5L;
 }
 
 putchar('\n');
 
 fseek(fp,-1L,2);	//Position to last character
 
 do
 {
  putchar(getc(fp));
 }
 
 while(!fseek(fp,-2L,1));
 
 fclose(fp);
 
 return 0;
}
   
