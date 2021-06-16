
/*________________WAF TO PERFORM OR PRINT THE FOLLOWING PATTERN :=
                        
                              S
                              SO
                              SON
                              SONU
                              SONU
                              SON
                              SO
                              S
                                                                                    _____________*/
                                                                                    
#include<stdio.h>
#include<string.h>

void display_pattern(char []);

int main()
{
 char ch[100];
 
 printf("\nEnter a string to generate the pattern\n");
// fgets(ch,100,stdin);
 
 scanf("%[^\n]s",ch);
 
 display_pattern(ch);
 
 return 0;
}

void display_pattern(char A[50])
{
 int i,len,m,n;
 
 len=strlen(A);

 for(i=0;A[i]!='\0';i++)
 {
  printf("\n|%-*.*s|",len,(i+1),A);
 }
 
 for(i=len;i>0;i--)
 {
   printf("\n|%-*.*s|",len,i,A);
 }
 
 printf("\n");  
}
   
