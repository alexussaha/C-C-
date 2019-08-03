#include <iostream>
using namespace std;
class Point{double x,y; 
      public: 
      Point(double a, double b) {x=a;y=b;};
      friend  Point operator+(Point&, Point&);
      void Show(){cout<<x<<' '<<y<<endl;}};
Point operator+(Point& p1, Point& p2)
{return Point(p1.x+p2.x,p1.y+p2.y);}
int main()
{ Point P1(1,0),P2(4,5);
  Point P3=P1+P2;
  P3.Show();
  return 0;
}