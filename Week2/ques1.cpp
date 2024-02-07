#include<iostream>
using namespace std;
int binary(int arr[],int u,int l,int k)
{
    int mid,i=-1;
    while(l<=u)
    {
        mid=l+(u-l)/2;
        if(arr[mid]==k)
        {
            i=mid;
            return i;
        }
        else if(arr[mid]<k)
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    return i;
}
int occurrence(int arr[],int u,int l,int k)
{
    int c=0;
    int index=binary(arr,u,l,k);
    if(index==-1)
    {
        return c;
    }
    c=1;
    int a=index-1;
    int b=index+1;
    while(a>=0 && arr[a]==k)
    {
        c++;
        a--;
    }
    while(b<=u && arr[b]==k)
    {
        c++;
        b++;
    }
    return c;
}
int main()
{
    int a[25],t,n,i,j,key,b;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter size of array : ";
        cin>>n;
        cout<<"Enter elements in array : ";
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<"Enter number to be searched : ";
        cin>>key;
        b=occurrence(a,n-1,0,key);
        cout<<key<<" - "<<b<<endl;
    }
}

