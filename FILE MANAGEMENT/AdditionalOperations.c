
#include<stdio.h>

int main()
{
 FILE *fp;
 
 char ch;
 //char str[100];
 
 long n;
 
 fp=fopen("New.txt","w");
 
 while((ch=getchar())!=EOF)
 	putc(ch,fp);
 
 //fscanf(stdin,"%[^\n]s",str);
 //fprintf(fp,"%s",str);
 
 printf("\nThe total number of characters entered is %ld\n",ftell(fp));
 
 fclose(fp);
 
 fp=fopen("New.txt","r");
 
 //fseek(fp,0L,2);	This means this goes to the end of the file, past the last character of the file
 
 fseek(fp,-1L,2);	// This points to the position of the last character of the file
 
 printf("\nThe end of the file , past to the last character is %c at position %ld\n",getc(fp),ftell(fp));
 
 //printf("\nThe next character printed is %c at %ld\n",getc(fp),ftell(fp));
 
 while(!fseek(fp,-2L,1))
 {
  printf("%c at %ld\n",getc(fp),ftell(fp));
 }
  
 return 0;
}
  
