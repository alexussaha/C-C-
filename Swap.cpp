#include <iostream>
using namespace std;
void swap1 (int i, int j)
{
	int t=i; i=j; j=t;
}
void swap2 (int *i, int *j)
{
	int t=*i; *i=*j; *j=t;
}
void swap3 (int &i, int &j)
{
	int t=i; i=j; j=t;
}
int i=0, j=1;
int main() { 
int i=1, j=2;

swap1(i, j);
cout<<"i="<<i<<"j="<<j<<endl;
swap1(::i, ::j);
cout<<"::i="<<::i<<"::j="<<::j<<endl;
swap2(&i, &j);
cout<<"i="<<i<<"j="<<j<<endl;
swap3(i, j);
cout<<"i="<<i<<"j="<<j<<endl;
return 1;
}
