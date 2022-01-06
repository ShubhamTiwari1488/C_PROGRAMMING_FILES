/*___WAP TO READ DATA FROM THE KEYBOARD , WRTITE IT TO A FILE CALLED INPUT, AGAIN READ THE SAME DATA FROM THE INPUT 
     FILE,AND DISPLAY IT ON THE SCREEN.____________*/
     
#include<stdio.h>

int main()
{
 FILE *f1;	//f1 is a pointer to the data type FILE .
 
 /*______FILE IS A STRUCTURE THAT IS DEFINED IN THE I/O LIBRARY._______________________*/
 
 char c;
 
 printf("\nData Input\n\n");
 
 /* Open the file INPUT */
 
 f1=fopen("INPUT.xyz","w");
 
 /* Get a character from keyboard */
 
 while((c=getchar())!=EOF)
 {
  /* Write a character to INPUT */
  
  putc(c,f1);
 }
 
 /* Close the file INPUT */
 
 fclose(f1);
 
 printf("\n\nData Output\n\n");
 
 // Reopen the file INPUT 
 
 f1=fopen("INPUT.xyz","r");
 
 // Read a character from INPUT 
 
 while((c=getc(f1))!=EOF)
 {
  // Display a character on screen
  
  printf("%c",c);
 }
 
 // Close the file INPUT
 
 fclose(f1);
 
 printf("\n");
 
 return 0;
}
   
