#include<iostream>
using namespace std;
int linear(int arr[],int size,int key)
{
    int count =0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            
            cout<<"Found the position "<<i+1;
            count=1;
            break;
        }
    }
    return count;
}
int main()
{ 
    int arr[7];
    int Size,key,i;
    cout<<"Enetr the Element of the Array";
    for(i=0;i<7;i++)
    cin>>arr[i];
    cout<<"Enetr the key";
    cin>>key;
    Size=sizeof(arr)/sizeof(int);
    int result=linear(arr,Size,key);
    if(result==0)
    {
        cout<<"Not found";
    }
    return 0;
}