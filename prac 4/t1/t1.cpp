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
    cout<<"enter two floats"<<endl;
    cin>>c>>d;
    cout<<first::add(a,b)<<endl;
    cout<<second::add(c,d)<<endl;

    return 0;
}
