#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string s;
ifstream file;
file.open("SF.txt");
if(!file)
{
cerr<<"NOT FOUND"<<endl;
}
else
{
while(getline(file,s))
cout<<s<<endl;
}
file.close();

}
