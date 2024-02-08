#include<iostream>
using namespace std;
void insertion(int arr[],int n,)
{
    int t=0,i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        while(j>=0 && arr[j]>t)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
        
    }
}
int main()
{
    int arr[25],n,i;
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
