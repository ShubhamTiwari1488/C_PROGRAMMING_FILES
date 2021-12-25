
//FINDING THE KTH MAXIMUM AND MINIMUM ELEMENT OF THE ARRAY

#include<bits/stdc++.h>
using namespace std;

class Array
{
 int arr[100];
 int n,k;
 
 public:
 
 void Input()
 {
  cout<<"\nEnter the number of elements ";
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
   cout<<"\nEnter the element no "<<i+1<<" ";
   cin>>arr[i];
  }
  
  cout<<"\n\nEnter the value of k ";
  cin>>k;
  
 }
 
 void Display()
 {
  
  sort(arr,arr+n);
  
  cout<<"\nThe sorted array is ";
  
  for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   
   
  cout<<"\n\nThe kth smallest element is "<<arr[k-1]<<endl;
  
  cout<<"\nThe kth largest element is "<<arr[n-k]<<endl;
 
 }
 
};

int main()
{
 Array a;
 
 a.Input();
 
 cout<<"\n==================================================\n";
 
 a.Display();
 
 return 0;
}
   
  
    
