//greater number in an array(13/08/2026)
#include<iostream>
using namespace std;
int main()
{
    int tempG;
    int tempS;
    int arr[2];
    cout<<"enter 2 numbers:"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<2;i++)
    {
        cout<<"number :"<<arr[i]<<endl;
    }

    for(int i=0;i<2;i++)
    {
        if(arr[i]>arr[i+1])
        {
           tempG=arr[i];
        }
        else
        {
        tempG=arr[i+1];
        }
    }
    cout<<"greater:"<<tempG<<endl;

}
