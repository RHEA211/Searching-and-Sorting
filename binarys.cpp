//BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int key)
{  
 
    int s=0;
    int e=n;
    //loop runs until s<=e

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }


    }
    return -1;
}

int main()
{
    int n, arr[n],key;
    cout<<"enter the array size-"<<endl;
    cin>>n;

    cout<<"enter the array-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter element to be found"<<endl;
    cin>>key;

    cout<<binary_search(arr, n,key);
    return 0;

}
