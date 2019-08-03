#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int N = 5; //������ ���� (������� 5x5) ����� ������, ���� ������������ ����� ���������/�������
bool field_with_bombs[N][N];
char field[N][N];

void clear_field(char g = '*') { //������� ����
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			field[i][j] = g;
			field_with_bombs[i][j] = 0; //�� ��������� ���� ������ ��� ���
		}
	}
}
void set_mine(int count = N) { //����������� ���
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
void show_field() {	//����� ����
	cout << "   ";
	for (int i = 0; i < N; i++) {
		cout << i << " ";
	}
	cout << endl << "   -------------------" << endl;
	for (int i = 0; i < N; i++) {
		cout << (char)(i+65) << "| "; //����������� ������ ������ ������, ��� �� ������� 0 � ����� 65, ��� 65 - ��� ����� �.
		for (int j = 0; j < N; j++) {
			cout<<field[i][j]<<" ";
		}
		cout << endl;
	}
}
void show_field_with_mins() {	//����� ���� � ������ ����� ��������� ������������
	cout << "   ";
	for (int i = 0; i < N; i++) {
		cout << i << " ";
	}
	cout << endl << "   -------------------" << endl;
	for (int i = 0; i < N; i++) {
		cout << (char)(i + 65) << "| "; //����������� ������ ������ ������, ��� �� ������� 0 � ����� 65, ��� 65 - ��� ����� �.
		for (int j = 0; j < N; j++) {
			cout << field_with_bombs[i][j] << " ";
		}
		cout << endl;
	}
}
bool shot(int x, int y) { //���� ������������ (���� - "������� ���������", �� ���� - �������� �����)
	if (field_with_bombs[x][y])
		return false;
	int number_mine = 0;
	for (int i = x - 1; i <= x + 1 && i < N; i++) { //���� ������ � ������, ��� �� ������ �� � ����� (��������� �������� ������ � ��������, ��� �� �� ����� �� ����� ����)
		for (int j = y - 1; j <= y + 1 && j < N; j++) {
			if (i >= 0 && j >= 0) { //�������� �� �� ����� �� ������� ������� �� ������������ �������� � ���
				number_mine = number_mine + field_with_bombs[i][j]; //�� � ��� ���� = 1, �� �� ������ �� ������� � ����������� ������ 
			}
		}
	}
	field[x][y] = number_mine + 0x30; //��������� ASCII
	return true;
}
bool shot_for_first_shot(int x, int y) { //���� ������������ (���� - "������� ���������", �� ���� - �������� �����)
	int number_mine = 0;
	field[x][y] = number_mine + 0x30;
		return false;
}
bool mark(int x, int y) {
	int l = 0;
	cout << "������� 0, ���� ������ ���������� �������� � 1, ���� ���� ���������� ��� �������" << endl;
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
		cout << endl << "������ ������� �� ��� ����: " << endl;
		cin >> x >> y;
		x = x - 65;
	} while (shot_for_first_shot(x,y));
	set_mine();
	cout << "�� ���� ��������� ���� = ����������� ����� �� ������� ����" << endl;
	do {
		do {
			show_field();
			cout << endl << "���� ����, ��������� �������, ���� �� ���������, �� ������� ��� ����." << endl;
			cin >> x >> y;
			x = x - 65;
		} 
		while (mark(x,y));
		show_field();
		cout << endl << "���������: " << endl;
		cin >> x >> y;
		x = x - 65; //�������������� �� ����� � �����, ��� 65 - ��� ����� '�'
	} 
	while (shot(x, y));
	cout << "�� ���������!" << endl;
	return 0;
}