/*// Write a C++ program to find the sum of two private data members numA and numB of two classes ABC and XYZ using a common friend function.
// Assume that the protoype for both the classes will be int add(ABC,XYZ); ...

#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int num1;
public:
    void setdata1(int a);
    friend int add(ABC,XYZ);
};
void ABC::setdata1(int a)
{
    num1=a;
}
class XYZ
{
    int num2;
public:
    void setdata2(int b);
    friend int add(ABC,XYZ);
};
void XYZ::setdata2(int b)
{
    num2=b;
}
int add(ABC a1,XYZ x1)
{
    return(a1.num1+x1.num2);
}
int main()
{
    ABC A;
    A.setdata1(2);
    XYZ X;
    X.setdata2(2);
    cout<<"sum:"<<add(A,X)<<endl;
    return 0;
}
