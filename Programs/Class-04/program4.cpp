//copy constructor
#include<iostream>
using namespace std;
class rect
{
private:
    int len;
    int width;
public:
    rect(int x, int y)
    {
        len=x;
        width=y;
    }
    void print()
    {
        cout<<"length:"<<len<<endl;
        cout<<"width:"<<width<<endl;
    }
};
int main()
{
    rect r1(2,3);
    rect r2(r1);
    r1.print();
    cout<<"copy r1 to r2:"<<endl;
    r2.print();
    return 0;
}
