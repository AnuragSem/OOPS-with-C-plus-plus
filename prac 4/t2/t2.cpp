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
    cout<<"enter 2 integers"<<endl;
    cin>>a>>b;
    cout<<"enter 2 float"<<endl;
    cin>>c>>d;
    using namespace first;
    cout<<add(a,b)<<endl;
    using namespace second;
    cout<<add(c,d)<<endl;

    return 0;
}
