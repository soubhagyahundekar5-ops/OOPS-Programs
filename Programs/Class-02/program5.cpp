//pass by pointer
#include<iostream>
using namespace std;
void swap(int *a ,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"swapped a:"<<*a <<endl;
    cout<<"swapped b:"<<*b<<endl;
}
int main()
{
    int a=1;
    int b=2;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    swap(&a,&b);
}
