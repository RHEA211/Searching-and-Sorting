//LINEAR SEARCH

#include<bits/stdc++.h>
using namespace std;


int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}
   


int main()
{
    int n,arr[10],key;
    cout<<"Number of elements in array-"<<endl;
    cin>>n;

    cout<<"enter the array element-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter element to find"<<endl;
    cin>>key;

    cout<<linearsearch(arr,n,key)<<endl;
    return 0;

}