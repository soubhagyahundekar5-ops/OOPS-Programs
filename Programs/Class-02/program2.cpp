#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter 5 numbers:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"number :"<<arr[i]<<endl;
    }
     int i;
     int tempG;
     tempG=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>tempG)
        {
           tempG=arr[i];
        }
    }
    cout<<"greater:"<<tempG<<endl;

}
