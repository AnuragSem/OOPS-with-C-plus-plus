#include<iostream>
using namespace std;

namespace first
{
    int add(int a,int b)
    {
        return a+b;
    }
}

namespace second
{
    float add(float a,float b)
    {
        return a+b;
    }
}

int main()
{
    int a,b;
    float c,d;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    cout<<"enter two float"<<endl;
    cin>>c>>d;
    cout<<add(a,b)<<endl;
    cout<<add(c,d)<<endl;

    return 0;
}
