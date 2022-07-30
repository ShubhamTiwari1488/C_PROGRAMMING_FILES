#include<bits/stdc++.h>
using namespace std;

string chr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void sayDigit(int n)
{
    //Base case
    if(n == 0)
        return;
        
    int digit = n%10;
    
    sayDigit(n/10);
    
    cout<<chr[digit]<<" ";
}

int main()
{
    int num;
    
    cout<<"\nEnter the number ";
    cin>>num;
    
    sayDigit(num);
    
    cout<<endl;
    
    return 0;
}
