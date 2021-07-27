

#include<stdio.h>

struct book
{
 char book_name[50];
 char author_name[50];
};

int main()
{
 struct book b1;
 
 printf("Enter the book name and author name \n");
 scanf("%s %s",b1.book_name,b1.author_name);
 
 printf("Book name is %s and author name is %s\n",b1.book_name,b1.author_name); 
 
 return 0;
}
 
