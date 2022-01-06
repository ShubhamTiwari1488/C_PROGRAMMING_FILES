
/*_____________WRITING ON A FILE (A PROGRAM ON FILE MANAGEMENT) ____________________________*/

#include<stdio.h>

int main()
{
 FILE *f1;
 char c;
 
 printf("\nData Input\n\n");
 
 //Open the file INPUT
 
 f1=fopen("Input.txt","w");
 
 //Get a character from the keyboard
 
 while((c=getchar())!=EOF)
 {
  //Write a character to "Input.txt"
  
  putc(c,f1);
 }
 
 fclose(f1);
 
 printf("\nData output\n\n");
 
 f1=fopen("Input.txt","r");
 
 //Read a character from "Input.txt"
 
 while((c=getc(f1))!=EOF)
 {
  //Display a character on screen
  
  printf("%c",c);
 }
 
 //Close the file Input.txt
 
 fclose(f1);
 
 return 0;
}
   
