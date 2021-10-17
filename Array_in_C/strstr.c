
/*______STRSTR FUNCTION ::

	This function takes two strings s1 and s2 as an argument and finds the first occurrence of the sub-string s2 in the string s1. The process of matching does not include the terminating null-characters(‘\0’), but function stops there.
	
	
	char *strstr (const char *s1, const char *s2);

	Parameters:
		s1: This is the main string to be examined.
		s2: This is the sub-string to be searched in s1 string.
		
		
	 This function returns a pointer points to the first character of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. If s2 points to an empty string, s1 is returned.
	 
	 
	 			_____________________________*/
	 			


#include <stdio.h>
#include <string.h>

  
int main()
{
    //Taking two strings 
    
    char s1[] = "Rainbow Colours";
    char s2[] = "bow";
    char *p;
  
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
  
    // Prints the result
    if (p) 
    {
        printf("String found\n");
        printf("\nFirst occurrence of string '%s' in '%s' is '%s'"\n, s2, s1, p);
    } 
    
    else
        printf("String not found\n");
  
  
    return 0;
}

