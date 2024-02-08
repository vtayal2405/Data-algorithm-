#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int t=0,i,j,c=0,b=0;
    for(i=1;i<n;i++)
    {
        t=arr[i];
        j=i-1;
        b++;
        while(j>=0 && arr[j]>t)
        {
            c++;
            b++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ncompanisons = "<<c<<"\nshifts = "<<b<<endl;
}
int main()
{
    int arr[25],n,i,t,l;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    for(l=0;l<t;l++)
    {
        cout<<"Enter size of array : ";
        cin>>n;
        cout<<"Enter elements in array : "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertion(arr,n);
    }
}
