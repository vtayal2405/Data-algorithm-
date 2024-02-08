#include<iostream>
using namespace std;
void selection(int arr[],int size)
{
    int i,j,b=0,c=0,t=0,min=0;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            c++;
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            b++;
            t=arr[min];
            arr[min]=arr[i];
            arr[i]=t;
        }
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ncompanisons = "<<c<<"\nswaps = "<<b<<endl;
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
        selection(arr,n);
    }
}

