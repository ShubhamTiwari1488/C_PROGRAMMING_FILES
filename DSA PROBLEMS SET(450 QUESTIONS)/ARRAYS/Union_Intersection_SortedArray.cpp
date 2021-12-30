
//FINDING THE UNION AND INTERSECTION OF TWO SORTED ARRAY

#include<bits/stdc++.h>
using namespace std;

void UNION(int [],int [],int ,int);
void INTERSECTION(int [],int [],int,int);
void Display(int [],int [],int,int);

int main()
{
 int arr1[10],arr2[10];
 
 int n1,n2;
 
 cout<<"\nEnter the no. of elements of the array 1 ";
 cin>>n1;
 
 cout<<"\nEnter the elements of the array 1 \n";
 
 for(int i=0;i<n1;i++)
   cin>>arr1[i];
   
 cout<<"\nEnter the no. of elements of the array 2 ";
 cin>>n2;
 
 for(int i=0;i<n2;i++)
   cin>>arr2[i];
 
 Display(arr1,arr2,n1,n2);
  
 UNION(arr1,arr2,n1,n2);
 
 INTERSECTION(arr1,arr2,n1,n2);
 
 return 0;
}

void UNION(int arr1[],int arr2[],int n1,int n2)
{
   
   sort(arr1,arr1+n1);	//Sorting array 1
   
   sort(arr2,arr2+n2);	//Sorting array 2
   
   int i=0,j=0;
   
   cout<<"\nThe union of the two sorted arrays are::\t";
   
   while(i<n1 && j<n2)
   { 
    if(arr1[i]>arr2[j])
      cout<<arr2[j++]<<" ";
      
    else if(arr1[i]<arr2[j])
      cout<<arr1[i++]<<" ";
      
    else{
        cout<<arr1[i]<<" ";
    	i++;
    	j++;
     } 	
     
   }
   
   while(i<n1)
   {
    cout<<arr1[i]<<" ";
    i++;
   }
   
   while(j<n2)
   {
    cout<<arr2[j++]<<" ";
   }
   
   cout<<"\n";
}          

void INTERSECTION(int arr1[],int arr2[],int n1,int n2)
{
 
 int i,j;
 
 i=j=0;
 
 cout<<"\nThe intersection of the two sorted arrays are::\t";
 
 while(i<n1 && j<n2)
 {
  if(arr1[i]==arr2[j])
  {
    cout<<arr1[i]<<" ";
    i++;
    j++;
  }
  
  else if(arr1[i]>arr2[j])
  	j++;  
  	
  else
    i++;
 }
 
 cout<<endl;
 
}
 
void Display(int arr1[],int arr2[],int n1,int n2)
{
 cout<<"\nDisplaying array 1 :: \t";
 
 for(int i=0;i<n1;i++)
   cout<<arr1[i]<<" ";
   
 cout<<"\nDisplaying array 2 :: \t";
 
 for(int i=0;i<n2;i++)
   cout<<arr2[i]<<" ";    
   
 cout<<endl;
}
  
