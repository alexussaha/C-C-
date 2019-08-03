#include <iostream>
using namespace std;
class Test{
	char c1,c2; 
             public: 
      Test(char b) {c1=b;c2=c1+1;};
      Test Increment(){c1++;c2++; return (*this);}; //Возвращается объект класса Test
      Test* Where_Am_I(){return this;}; //Возвращается указатель на объект класса Test
      void Print(){cout<<c1<<c2<<'\t';}};

int main()
{ Test a('A'); 
	a.Print();
cout<<"adress of object: " <<a.Where_Am_I()<<endl;
  Test b('H'); 
  b.Print();
cout<<"adress of object: " <<b.Where_Am_I()<<endl;
  b.Increment().Print();
    return 1;
} 