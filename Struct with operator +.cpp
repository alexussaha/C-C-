#include <iostream>
using namespace std;
struct complex{double re, im;};
complex operator+(complex p1, complex p2) {
	complex p3; p3.re=p1.re+p2.im;
	p3.im=p1.im+p2.im;
	return p3;
}
int main() {
	struct complex p1={1,2};
	struct complex p2={6,8};
	struct complex p3; 
	p3=p1+p2;
	cout<<p3.re<<' '<<p3.im;
	return 0;
}