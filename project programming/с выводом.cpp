#include <stdio.h>


const int SIZE = 8;

int board[SIZE][SIZE];
int results_count = 0;

void saveRezults(){
	FILE *pf = fopen("output.txt", "a");
	fprintf(pf,"Result %d #\n\n",results_count);
	 for(int a = 0; a < SIZE; a++)
    {
        for(int b = 0; b < SIZE; b++)
        {	if(board[a][b]==1)
			fprintf(pf,"%d-%d\n",a,b) ;
		}}
		fclose(pf);
}

void showBoard()
{
	
    for(int a = 0; a < SIZE; a++)
    {
        for(int b = 0; b < SIZE; b++)
        {
            if(board[a][b]==0)
            	printf(". ");
            else {  
			printf("Q ");
        }}
        printf("\n");
    }
}


bool tryQueen(int a, int b) {
    for(int i = 0; i < a; i++)
    {
        if(board[i][b])
        {
            return false;
        }
    }

    for(int i = 1; i <= a && b-i >= 0; i++)
    {
        if(board[a-i][b-i])
        {
            return false;
        }
    }
    
    for(int i = 1; i <= a && b+i < SIZE; i++)
    {
        if(board[a-i][b+i])
        {
            return false;
        }
    }

    return true;
}

void setQueen(int a)
{
    if(a == SIZE)
    {
        showBoard();
        printf("Result %d #\n\n",++results_count);
        saveRezults();
        return; 
    }

    for(int i = 0; i < SIZE; i++)
    {
        if(tryQueen(a, i))
        {
            board[a][i] = 1;
            setQueen(a+1);
            board[a][i] = 0;
        }
    }

    return;
}
int main()
{	setQueen(0);
    return 0;
}
    