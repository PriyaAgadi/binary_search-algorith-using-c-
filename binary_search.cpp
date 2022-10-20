#include<iostream>
using namespace std;

int binary_search(int a[],int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(key==a[mid])
        return mid;
        
        if(key<a[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}

int main()
{
    int a[50],limit, result,key;
    cout<<"enter the array are"<<endl;
    cin>>limit;
    
    cout<<"the array elements are"<<endl;
    for(int i=0;i<limit;i++)
    {
        cin>>a[i];
    }
    
    cout<<"the array elements are"<<endl;
    cout<<"the array elements are"<<endl;
    for(int i=0;i<limit;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    
    result = binary_search(a,limit,key);
    if(result==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
        cout<<"element is found"<<endl;
return 0;
}