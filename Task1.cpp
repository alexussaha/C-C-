#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double T, V, a, g;
g=9.8;
cout<<"Write the speed V= \n" ;
cin>>V;
cout<<"Write the time T= \n";
cin>>T;
a=asin((g*T)/(2*V));
cout<<"a="<<a<<"\n";
	return 0;
}