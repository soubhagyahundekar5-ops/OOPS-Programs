//02/09/2026
#include<iostream>
using namespace std;
class Test
{
private:
    int mark;
    float spi;
public:
    void  Setdata()
    {
        mark=270;
        spi=6.5;
    }
    void Displaydata()
    {
        cout <<"Mark=" <<mark <<endl;
        cout <<"spi=" <<spi;
    }
};
//main is the starting point of program
int main()
{
    Test o1;
    o1.Setdata();
    o1.Displaydata();
    return 0;
}
