#include <stdio.h>
int pq(int p, int q){
	if (q>1){
	return p*pq(p, q-1);}
	else return p;
}
int main(){
	printf("%d",pq(2,4));
	return 0;
}