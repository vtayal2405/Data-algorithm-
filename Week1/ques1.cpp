#include<iostream>
using namespace std;
int main()
{
  int arr[25],n,i,x,f=0;
  cout<<"Enter no. of elements in array : ";
  cin>>n;
  cout<<"Enter the positive numbers in array : "<<endl;
  for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  cout<<"Enter a number to be searched :";
  cin>>x;
  for(i=0;i<n;i++)
    {
      if(x==arr[i])
      {
        f=1;
        break;
      }
    }
    if(f==1)
    {
        cout<<"Present "<<i+1<<endl;
    }
    if(f==0)
    {
        cout<<"Not Present "<<i+1<<endl;
    }
}
