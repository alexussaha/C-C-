#include <string.h>
#include <iostream>
using namespace std;
template <class T> void Swap(T&a,T&b) {
	T c; c=b; b=c;
};
int main () {
	int i=0, j=1; double x=0.0, y=1.0;
	char *s1="I am the first string!";
	char *s2="I am the second string!";
	cout<<"Befor exchange!"<<endl;
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
	swap(i,j);
	swap(x,y);
	swap(s1,s2);
	cout<<"After an exchange of!"; {
		cout<<"i="<<i<<endl;
		cout<<"j="<<j<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"s1="<<s1<<endl;
		cout<<"s2="<<s2<<endl;
	}
return 0;
}
