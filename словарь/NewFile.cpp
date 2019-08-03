#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct Node {
	char word[40];
	int count;
	Node *next;
};
typedef Node *PNode;
PNode Head = NULL;
PNode CreateNode ( char NewWord[] )
{
	PNode NewNode = new Node;
	strcpy (NewNode->word, NewWord);
	NewNode->count = 1;
	NewNode->next = NULL;
	return NewNode;
}
void AddFirst (PNode &Head, PNode NewNode)
{
	NewNode->next = Head;
	Head = NewNode;
}
void AddAfter (PNode p, PNode NewNode)
{
	NewNode->next = p->next;
	p->next = NewNode;
}
void AddBefore(PNode &Head, PNode p, PNode NewNode)
{
	PNode q = Head;
	
	if (Head == p) {
		AddFirst(Head, NewNode);
		return;
	}
	while (q && q->next!=p)
		q = q->next;
	if ( q )
		AddAfter(q, NewNode);
}
void AddLast(PNode &Head, PNode NewNode)
{
	PNode q = Head;
	
	if (Head == NULL) {
		AddFirst(Head, NewNode);
		return;
	}
	while (q->next)
		q = q->next;
	AddAfter(q, NewNode);
}
PNode Find (PNode Head, char NewWord[])
{
	PNode q = Head;
	while (q && strcmp(q->word, NewWord))
		q = q->next;
	return q;
}

PNode FindPlace (PNode Head, char NewWord[])
{
	PNode q = Head;
	while (q && (strcmp(q->word, NewWord) > 0))
		q = q->next;
	return q;
}



int main(){
	PNode Head = NULL, p, where;
	FILE *in, *out;
	char word[80];
	int n;
	in = fopen ( "input.dat", "r");
	while ( 1 ) {
		n = fscanf ( in, "%s", word );
		if ( n <= 0 ) break;
		
		p = Find ( Head, word);
	
		if ( p != NULL )
			p->count ++;
		else {
			p = CreateNode ( word );
			where = FindPlace (Head, word);
			if ( ! where )
				AddLast ( Head, p );
			else AddBefore ( Head, where, p );
		} 
	}
	fclose(in);
	
	out = fopen ( "output.dat", "w" );
	p = Head;
	while ( p ) {
		fprintf ( out, "%-20s\t%d\n", p->word, p->count );
		p = p->next;
	}
	fclose(out);
	return 0;
}