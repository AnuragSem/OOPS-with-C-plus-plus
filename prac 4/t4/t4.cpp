#include<iostream>
using namespace std;

//using namespace first;
//using namespace second;
namespace first
{
int add(int a, int b)
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


int main(){
cout<<add(1,2)<<"\n";
cout<<add(1.2,2)<<"\n";
cout<<add(1,2.1)<<"\n";
cout<<add(1.1,2.1)<<"\n";
cout<<add(0,0)<<"\n";

return 0;
}
