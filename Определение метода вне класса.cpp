#include <iostream>
using namespace std;
class example {
	private: int a;
	public:
		int cube (int b);
};
int example::cube (int b) {
	a=b*b*b;
	return a;
}
int main() {
	example c;
	cout<<"a="<<c.cube(4);
	return 0;
}