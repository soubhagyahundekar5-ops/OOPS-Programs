//Define class rectangle with members width and height. Also define function to set_values(w,l) to initialize the members,
// area() to calculate area. demonstrate class rectangle for 2 objects.

#include<iostream>
using namespace std;
class rectangle
{
private:
    int width;
    int height;
public:
    void set_values(int ,int);
    int area()
    {
        return width*height;
    }
};
void rectangle::set_values(int width, int height)
{
    this->width=width;  this->height=height;
}
int main()
{
    rectangle a1;
    a1.set_values(3,4);
    cout<<"area:"<<a1.area();
    return 0;
}
