//constructor
/employee
//constructor is used to assign common values among the objects
#include<iostream>
using namespace std;
class employee
{
private:
    int ID;
    string dept;
public:
    employee()
    {
        cin>>ID;
        cin>>dept;
    }
    void print()
    {
        cout<<"employee ID:"<<ID<<"employee dept:"<<dept<<endl;
    }
};
int main()
{
    employee E1;
    E1.print();
}
