//insertion sort 
#include<bits/stdc++.h>
using namespace std;

 void insertion_sort(int a[],int n)
 {
     for (int i=1;i<n;i++)
     {
         int temp= a[i];
         int j=i-1;
         while(j>=0 && a[j]>temp)
         {
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=temp;
     }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

 }
 int main()
{
    int n,a[10];
    cin>>n;

    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"sorted array through selection sort-"<<endl;
    insertion_sort( arr,n);

return 0;





}
