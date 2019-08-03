#include <iostream>
using namespace std;
class example {
	public:
		int n;
		void set (int k) {
			n=k;
		}
		void show(){
			cout<<"n="<<n<<endl;
		}
};
int main() {
	example c,*ptr;
	c.set(10);
	c.show();
	ptr=&c;
	ptr->show();
	return 0;
}