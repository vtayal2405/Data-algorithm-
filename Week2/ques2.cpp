#include<iostream>
using namespace std;
void indice(int arr[],int n)
{
    int i,j,k;
    for(k=n-1;k>=2;k--)
    {
        i=0;j=k-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==arr[k])
            {
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                return;
            }
            else if(arr[i]+arr[j]<arr[k])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    cout<<"No sequence found";
}
int main()
{
    int arr[25],t,n,i;
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
        indice(arr,n);
    }
}

