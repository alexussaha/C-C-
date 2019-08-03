#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int N = 5; //размер поля (напрмер 5x5) можно менять, если пользователь хочет посложнее/полегче
bool field_with_bombs[N][N];
char field[N][N];

void clear_field(char g = '*') { //очистка поля
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			field[i][j] = g;
			field_with_bombs[i][j] = 0; //по умолчанию поле снчала без мин
		}
	}
}
void set_mine(int count = N) { //расстановка мин
	srand(time(NULL));
	for (int i = 0; i < count;) {
		int x = rand() % N;
		int y = rand() % N;
		if (!field_with_bombs[x][y]) {
			field_with_bombs[x][y] = 1;
			i++;
		}
	}
}
void show_field() {	//показ поля
	cout << "   ";
	for (int i = 0; i < N; i++) {
		cout << i << " ";
	}
	cout << endl << "   -------------------" << endl;
	for (int i = 0; i < N; i++) {
		cout << (char)(i+65) << "| "; //обозначение каждой строки буквой, где мы смещаем 0 и пишем 65, где 65 - код буквы А.
		for (int j = 0; j < N; j++) {
			cout<<field[i][j]<<" ";
		}
		cout << endl;
	}
}
void show_field_with_mins() {	//показ поля с минами после проигрыша пользоватлея
	cout << "   ";
	for (int i = 0; i < N; i++) {
		cout << i << " ";
	}
	cout << endl << "   -------------------" << endl;
	for (int i = 0; i < N; i++) {
		cout << (char)(i + 65) << "| "; //обозначение каждой строки буквой, где мы смещаем 0 и пишем 65, где 65 - код буквы А.
		for (int j = 0; j < N; j++) {
			cout << field_with_bombs[i][j] << " ";
		}
		cout << endl;
	}
}
bool shot(int x, int y) { //игра пользователя (мина - "возврат проигрыша", не мина - открытие ячеек)
	if (field_with_bombs[x][y])
		return false;
	int number_mine = 0;
	for (int i = x - 1; i <= x + 1 && i < N; i++) { //идем дальше с мыслью, что мы попали не в бомбу (проверяем соседние клетки с условием, что мы не вышли за грань поля)
		for (int j = y - 1; j <= y + 1 && j < N; j++) {
			if (i >= 0 && j >= 0) { //проверка на не выход за пределы массива по существующим индексам в нем
				number_mine = number_mine + field_with_bombs[i][j]; //тк у нас мина = 1, то мы просто их считаем в окрестности ячейки 
			}
		}
	}
	field[x][y] = number_mine + 0x30; //кодировка ASCII
	return true;
}
bool shot_for_first_shot(int x, int y) { //игра пользователя (мина - "возврат проигрыша", не мина - открытие ячеек)
	int number_mine = 0;
	field[x][y] = number_mine + 0x30;
		return false;
}
bool mark(int x, int y) {
	int l = 0;
	cout << "Введите 0, если хотите продолжить стрелять и 1, если надо проставить еще отметки" << endl;
	cin >> l;
	int k = 0;
	field[x][y] = k + 0x23;
	if (l == 0)
		return false;
	else
		(l == 1);
		return true;
}
int main() {
	setlocale(LC_ALL, "rus");
	int y = 0;
	char x = 0;
	clear_field();
	do {
		show_field();
		cout << endl << "Первый выстрел за наш счет: " << endl;
		cin >> x >> y;
		x = x - 65;
	} while (shot_for_first_shot(x,y));
	set_mine();
	cout << "На поле находится бомб = квадратному корню из размера поля" << endl;
	do {
		do {
			show_field();
			cout << endl << "Если надо, поставьте отметки, если не требуется, то введите два нуля." << endl;
			cin >> x >> y;
			x = x - 65;
		} 
		while (mark(x,y));
		show_field();
		cout << endl << "Стреляйте: " << endl;
		cin >> x >> y;
		x = x - 65; //восстановление из буквы в цифру, где 65 - код буквы 'А'
	} 
	while (shot(x, y));
	cout << "Вы проиграли!" << endl;
	return 0;
}