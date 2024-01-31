#include<iostream>
using namespace std;
int main()
{
    int arr[25],n,lb=0,ub,mid,i,k,c=0,f=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    ub=n-1;
    cout<<"Enter the positive numbers in array : "<<endl;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"Enter no. to be searched : ";
    cin>>k;
    while(lb<=ub)
    {
        c++;
        mid=lb+(ub-lb)/2;
        if(arr[mid]==k)
        {
            f=1;
            break;
        }
        else if(arr[mid]>k)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
    if(f==1)
    {
        cout<<"Present "<<c;
    }
    else
    {
        cout<<"Not present "<<c;
    }
}
