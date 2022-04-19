#include<iostream>
using namespace std;
int main()
{ 
    int arr[10];
    int key,Size,i;
    int count=0;
    cout<<"Enter the Array of Element ";
    for(i=0;i<10;i++)
    cin>>arr[i];
    cout<<"Enter the key :"<<endl;
    cin>>key;
    Size=sizeof(arr)/sizeof(int);
    for(int i=0;i<Size;i++)
    {
        if(arr[i]==key)
        {
      cout<<"Position of Element:"<<i;
           count =1;
           break;
        }
    }
    if(count==0)
    {
    cout<<"Position Not found :";
    }
    return 0;
}