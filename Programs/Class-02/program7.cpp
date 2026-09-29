//palindrome string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    int len=0;
    string s1="hello";
    string s2="";
    for( i=0;s1[i]!='\0';i++)
    {
        len++;
    }
    cout<<"length:"<<len<<endl;
    for(i=len;i>=0;i--)
    {
        s2=s2+s1[i];
    }
    cout<<"original:"<<s1<<endl;
    cout<<"rev:"<<s2<<endl;
    if(s1==s2)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }

}
