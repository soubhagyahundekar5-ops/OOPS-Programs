#include<iostream>
using namespace std;
#include<string>
class student
{
private:
     string name="xyz";
     int age=6;
public:
    void Displaydata()
    {
        cout <<"Name=" <<name <<endl;
        cout <<"Age=" <<age;
    }
};
//main is the starting point of program
int main()
{
    student s1;
    s1.Displaydata();
    return 0;
}
