
//WAP TO FIND THE SECOND SMALLEST AND SECOND LARGEST NUMBER IN THE ARRAY

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
  int n,i,j=0,k=0,lrg,lrg2nd,srg,srg2nd;
  int *arr1;
       
       printf("\nEnter the size of array : ");
       scanf("%d", &n);
       
       arr1=(int *)malloc(n*sizeof(int));
       
       if(!arr1)
       {
        printf("\nMemory not allocated\n");
        exit(0);
       }
        
    /* Stored values into the array*/
       printf("\nEnter the elements of the array \n");
       for(i=0;i<n;i++)
            {
	      //printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
/* find location of the largest element in the array */		
//   lrg=arr1[0];
   lrg=INT_MIN;
   srg=INT_MAX;
   
  for(i=0;i<n;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
      
      if(srg>arr1[i])
      {
        srg=arr1[i];
        k=i;
      }  
  }

/* ignore the largest element and find the 2nd largest element in the array */		
   lrg2nd=INT_MIN;
   srg2nd=INT_MAX;
   
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
            continue;     /* ignoring the largest element */
		  
        }
      else
        {
          if(lrg2nd<arr1[i])
	     {
               lrg2nd=arr1[i];
             }
        }
  }
  
  for(i=0;i<n;i++)
  {
   if(i==k)
   {
    continue;    //ignoring the largest number
   } 
   
   else{
     if(srg2nd>arr1[i])
     {
      srg2nd=arr1[i];
     }
   }
   
  }
  
      

  printf("The Second largest element in the array is :  %d \n\n", lrg2nd);
  printf("The Second smallest element in the array is : %d \n\n",srg2nd);
  
  return 0;
}
