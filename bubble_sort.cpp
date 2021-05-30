//bubble sort
//swap adjacent elements if in wrong order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[10];
    cin>>n;

    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i,j;
  int counter=1;
  while(counter<n-1)
   {
       for(i=0;i<n-counter;i++) 

  { 
      if(arr[i]>arr[i+1])
  {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    }
    counter++;
       
   }
   cout<<"sorted array through bubble sort-"<<endl;
 
   for(i=0;i<n;i++)
   {
       cout<<arr[i];
   }
}





