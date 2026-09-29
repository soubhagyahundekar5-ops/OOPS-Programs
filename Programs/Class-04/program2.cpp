//adding 2 complex numbers
 #include<iostream>
 using namespace std;
 class Complex
 {
    int real;
    int imaginary;
 public:
     void Setdata(int r,int i)
     {
         real=r;
         imaginary=i;
     }
     void print()
     {
         cout<<"Real:"<<real<<endl;
         cout<<"imaginary:"<<imaginary<<endl;

     }
     void addnumber(Complex c1,Complex c2)
     {
          real =c1.real+c2.real;
          imaginary =c1.imaginary+c2.imaginary;

     }

 };
 int main()
 {
     Complex c1,c2,c3;
     c1.Setdata(1,2);
     cout<<"1st num:"<<endl;
     c1.print();
     c2.Setdata(2,1);
      cout<<"2nd num:"<<endl;
     c2.print();
     c3.addnumber(c1,c2);
     cout<<"total data:"<<endl;
     c3.print();
     return 0;

 }

