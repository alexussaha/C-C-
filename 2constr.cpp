#include <iostream>
using namespace std;
class demo{
	public :
		demo(){cout<<"Constructor"<<endl;}
		~demo(){cout<<"Destructor"<<endl;}
};
int main(){
	demo staticdemo;
	demo *dynamicdemo = new demo;
	delete dynamicdemo;
	return 0;
}