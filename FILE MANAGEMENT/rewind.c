
#include<stdio.h>

int main()
{
 FILE *fp;
 
 char c;
 
 fp=fopen("FILE","w");
 
 while((c=getchar())!=EOF)
 	putc(c,fp);
 
 printf("\nThe total numbers of characters entered is %ld",ftell(fp));
 
 rewind(fp);
 
 printf("\nAfter using rewind(fp) now the value of ftell is %ld\n",ftell(fp));
 
 fclose(fp);
 
 return 0;
}
 
 
 
 
