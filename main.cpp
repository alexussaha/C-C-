#include <iostream>
using namespace std;
int main()
{ 
int A, B, C, max, min;
cout<<("Write the numbers:\n");
cout<<("A=");
cin>>A;
cout<<("B=");
cin>>B;
cout<<("C=");
cin>>C;
if((A>=B)&&(B>=C))	cout<<("MAX:")<<A<<(" MIN:")<<C;
    else if((A>=C)&&(C>B))	cout<<("MAX:")<<A<<(" MIN:")<<B;
    else if((A<B)&&(A>=C))  cout<<("MAX:")<<B<<(" MIN:")<<C;
    else if((C<B)&&(A<C))  cout<<("MAX:")<<B<<(" MIN:")<<A;
    else if((A>=B)&&(A<C))  cout<<("MAX:")<<C<<(" MIN:")<<B;
    else if((A<B)&&(A<C))  cout<<("MAX:")<<C<<(" MIN:")<<A;
    return 0;
}