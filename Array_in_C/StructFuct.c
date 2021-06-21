
/*__________________DEMONSTRATION OF STRUCTURES AND FUNCTIONS__________________________*/

#include<stdio.h>

struct stores
{
 char name[20];
 float price;
 int quantity;
};

struct stores update(struct stores product,float p,int q)             //return type of the function is struct stores
                                                                       // which is a user defined data type.
{
 product.price+=p;
 product.quantity+=q;
 
 return(product);
}


float mul(struct stores stock)
{
 return(stock.price*stock.quantity);
}

int main()
{
 float p_increment,value;
 int q_increment;
 
 struct stores item={"XYZ",25.75,12};
 
 printf("\nInput Increment value:");
 printf("\nInput Increament values:");
 
 scanf("%f %d",&p_increment,&q_increment);
 
 item=update(item,p_increment,q_increment);
 
 printf("\nUPDATED VALUES\n");
 
 printf("Name: %s\n",item.name);
 printf("Price: %f\n",item.price);
 printf("Quantity: %d\n",item.quantity);
 
 value=mul(item);
 
 printf("\nValue of the item =%f\n\n",value);
 
 return 0;
}
  
  
