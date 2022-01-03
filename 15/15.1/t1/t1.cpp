#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream file;
file.open("FF.txt");
file<<"first line\n";
file.close();
return 0;
}
