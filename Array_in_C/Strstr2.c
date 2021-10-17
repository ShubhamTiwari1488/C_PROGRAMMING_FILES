/*______

	With the help of strstr() function we first searches for the occurrence of "STL" sub-string in s1 and after 
	that replaces that word with "Strings".
        
        						___________*/
        				

#include<stdio.h>
#include<string.h>


int main()
{
    // Take any two strings
    
    char s1[20] = "Fun with STL";
    char s2[4] = "STL";
    char *p;
  
    // Find first occurrence of s2 in s1
    
    p = strstr(s1,s2);
  
    // Prints the result
    
    if(p) 
    {
        strcpy(p,"Strings");
        printf("%s\n",s1);
    } 
    
    else{
        printf("String not found\n");
  }
    
    return 0;
}

//REMEMBER THE POINT THAT IN THE STRING SECTION IF YOU LEFT THE SIZE OF THE STRING UNDECLARED THEN 
//THE COMPILER WILL DISPLAY AN MESSAGE :::--

/*______*** stack smashing detected ***: terminated
	   Aborted (core dumped)
	   
	   
	   TO AVOID THIS TRY TO DECLARED THE SIZE OF THE ARRAY MORE THAN LENGTH OF THE STRING   
	                 
	                                    ______________________*/
	                                    
	                                    



