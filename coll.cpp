#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int random(int N){
	return rand()%N;
}
// ������� ������� ����������
void quickSort(int *numbers, int left, int right)
{
  int pivot; // ����������� �������
  int l_hold = left; //����� �������
  int r_hold = right; // ������ �������
  pivot = numbers[left];
  while (left < right) // ���� ������� �� ���������
  {
    while ((numbers[right] >= pivot) && (left < right))
      right--; // �������� ������ ������� ���� ������� [right] ������ [pivot]
    if (left != right) // ���� ������� �� ����������
    {
      numbers[left] = numbers[right]; // ���������� ������� [right] �� ����� ������������
      left++; // �������� ����� ������� ������ 
    }
    while ((numbers[left] <= pivot) && (left < right))
      left++; // �������� ����� ������� ���� ������� [left] ������ [pivot]
    if (left != right) // ���� ������� �� ����������
    {
      numbers[right] = numbers[left]; // ���������� ������� [left] �� ����� [right]
      right--; // �������� ������ ������� ������ 
    }
  }
  numbers[left] = pivot; // ������ ����������� ������� �� �����
  pivot = left;
  left = l_hold;
  right = r_hold;
  if (left < pivot) // ���������� �������� ���������� ��� ����� � ������ ����� �������
    quickSort(numbers, left, pivot - 1);
  if (right > pivot)
    quickSort(numbers, pivot + 1, right);
}
int main()
{
  int a[60000],col;
  // ���������� ������� ���������� �������
  scanf("%d",&col);
  clock_t time;
	time = clock();
  for (int i = 0; i<col; i++)
    a[i] = random(col);
  quickSort(a, 0, col-1); // ����� ������� ����������
            // ����� ��������� ������� ����� ����������

  for (int i = 0; i<col; i++)
    printf("%4d \n", a[i]);
  time=clock()-time;
	printf("%f", (double)time/CLOCKS_PER_SEC);
  return 0;
}
