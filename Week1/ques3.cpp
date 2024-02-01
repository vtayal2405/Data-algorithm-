#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[25],n,i,j,k,f=0,a,b;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter numbers in sorted order in array :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched : ";
    cin>>k;
    if(arr[0]==k)
    {
        cout<<"Present";
    }
    i=1;
    while(i<n && arr[i]<k)
    {
        i*=2;
    }
    a=i/2;
    b=min(i,n-1);
    for(j=a;j<=b;j++)
    {
        if(arr[b]==k)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not present";
    }
}

