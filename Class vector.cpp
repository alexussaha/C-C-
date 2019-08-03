#include <iostream>
using namespace std;
class vector {
int d;
double x1,y1;
double *b;
public:
 vector(int n, double *x);
 ~vector();
 vector operator=(const vector&);
 vector operator+(const vector&);
void print();
};
vector::vector(int n, double *x)
{d=n; b=new double[d];
 for(int i=0;i<d;i++)b[i]=x[i];};
vector::~vector(){delete []b;};
vector vector::operator=(const vector& r)
{if(&r==this) return *this;delete[] b; d=r.d;
b=new double[d];for(int i=0;i<d;i++) b[i]=r.b[i];
return *this;}
vector vector::operator+(const vector& r)
{vector tmp(d,b);
  for(int i=0;i<d;i++) tmp.b[i]=b[i]+r.b[i];
return tmp;}
void vector::print()
   {cout<< "coordinatyi:";
    for(int i=0;i<d;i++)
   cout<<b[i]<<"\n";}

int main()
{
   const int k=2;
   double x[]={4.0,5.5},y[]={9.0,-2.5};
   vector c(k,x), a(k,x), b(k,y);
   a.print();
   b.print();
   c=a+b;
   c.print();
    return 1;
}