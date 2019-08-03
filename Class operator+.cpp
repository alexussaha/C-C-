#include <iostream>
using namespace std;
class Point{double x,y; 
       public: 
       Point(double a, double b) {x=a;y=b;};
       Point operator+(Point&);
void Show(){cout<<x<<' '<<y<<endl;}};
Point Point::operator+(Point& p)
{return Point(x+p.x,y+p.y);}
int main()
{ Point P1(0,2),P2(-1,5);
  Point P3=P1+P2;
  P3.Show();
  return 0;
}