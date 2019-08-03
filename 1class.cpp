#include <math.h>

#include <iostream>

using namespace std;

class vector{

double x,y,m;

public:

vector(double p1,double p2)

{x=p1;y=p2;m=sqrt(p1*p1+p2*p2);};

~vector(){cout<<"Destructor!"<<endl;};

double get(){return m;}

void print();

};

void vector::print()

{cout<<"x="<<x<<"y="<<y<<endl;

cout<<"m="<<m<<endl;}



int main()

{vector a(3,4),b(6,7);

a.print();b.print();

if(a.get()>b.get()) cout<<"max="<<a.get()<<endl;

else cout<<"max="<<b.get()<<endl;

return 1;

}


