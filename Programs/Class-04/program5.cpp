//parametrized constructor
#include<iostream>
using namespace std;
class Employee
{
private:
    int ID;
    string Dept;
    string name;
    double salary;
public:
    Employee(int i,string n,double sal)
    {
        ID=i;
        Dept="ECE";
        name=n;
        salary=sal;
    }
    void print()
    {
        cout<<"ID:"<<ID<<endl;
        cout<<"Department:"<<Dept<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main()
{
    int ID;
    double salary;
    string name;
    cout<<"enter details:"<<endl;
    cin>>ID;
    cin>>name;
    cin>>salary;
    Employee E1(ID,name,salary);
    E1.print();
    Employee E2(32,"abc",20000);
    E2.print();
}
