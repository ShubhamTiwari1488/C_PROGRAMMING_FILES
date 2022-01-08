
//PRINTING THE CHARACTERS IN REVERSE IN FILE MANAGEMENT

#include<stdio.h>

int main()
{
 FILE *fp;
 
 char c;
 
 fp=fopen("Reverse","w");
 
 while((c=getchar())!=EOF)
 	putc(c,fp);
 
 fclose(fp);
 
 fp=fopen("Reverse","r");
 
 fseek(fp,-1L,2);	//Pointer now set to the last character
 
 printf("\nPrinting the characters in reverse order :::\n\n");
 
 do
 {
  printf("%c",getc(fp));
 }
 while(!fseek(fp,-2L,1));
 
 fclose(fp);
 
 putchar('\n');
 
 return 0;
}
 
 
