#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include<stdlib.h>
#include "Header.h"

#define size 20
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	do
	{
		printf("������� ����� �������: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {
/*1.	������� ��������� � ������ NOTE1, ���������� ����: 
a.	Name � ������� � ��������
b.	TELE � ����� ��������
c.	DATE � ���� �������� (���, �����, �����)

�������� ���������, �����������:
�	���� � ���������� ������ � ������ BLOCK, ��������� �� 9 ��������� ���� NOTE1, ������ ������ ���� ����������� �� ���������;
�	����� �� ����� ���������� � �����, ��� ��� �������� ���������� �� �����, �������� �������� ������� � ����������; 
���� ������ �������� ��� � ������ ���������.
*/
		case 1: {

		}break;

			/*2.	������� ��������� � ������ TOVAR, ���������� ����:
a.	�������� ������; 
b.	���������� ������ ������; 
c.	��������� ������; 
d.	���� ����������� ������ � ���� ��������� (���, �����, ����).

�������� �������:
�	�������� ������� SPISOK �� ����� ��� �� 10 ������� (��������) ������ � ������� (���� ������ � ����������);
�	���������� ������� ��������� ������;
�	������������ ������� �� ����������� ��������� �������;
�	������ �������� � �������, ����������� ����� 10 ������� �����.

��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������. ������������� ���������� ���������� �� �����������. ������� ������, ������� ������������� ������ ���� �������
*/
		case 2: {
			int count = 5 + rand() % 5;
			Tovar *products = NULL;
			int sum = 0;
			products = (Tovar*)malloc(count * sizeof(Tovar));
			if (products != 0)
			{
				for (int i = 0;i < count;i++)
				{
					
					(products + i)->name = (char*)malloc(12 * sizeof(char));
					generateName((products + i)->name);

					int k = (0 + rand() % 10);
					(products + i)->qnt= (int*)calloc(k, sizeof(int));

					int k1 = (0 + rand() % 1000);
					(products + i) ->price= (int*)calloc(k1, sizeof(int));
					sum +=(products + i)->price;

					(products + i)->date= (date*)malloc(12 * sizeof(date));
					generateDate((products + i)->date);

					printf("# %d \t %s \t %d.%d.%d\t %d \t %d\n", i + 1, (products + i)->name, (products + i)->date->day, (products + i)->date->month, (products + i)->date->year,k,k1);

				}
				sortTovar(products, 8);

				printf("\n������� ��������� �������: %d\n", sum / 8);
			}
		}break;

			/*3.	������� ��������� � ������ MARSHRUT, ���������� ����: 
a.	����� ��������; 
b.	��������� ����� ��������; 
c.	�������� ����� ��������; 
d.	����� ��������.
�������� �������:
�	�������� ������� �� ����� ��� �� 10 ������� (��������) �������� � ��������� (���� ������ � ����������);
�	����������� �������� � ������������ ������;
�	������������ ������� �� ����������� ������� ���������;
�	������ �������� � ���������, ������� ���������� ��� ������������� � ������, �������� �������� �������� � ����������.

��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������. ������������� ���������� ���������� �� �����������. ������� ������, ������� ������������� ������ ���� �������.
*/
		case 3: {
		}break;

			/*4.	������� ��������� � ������ ABON, ���������� ����:
a.	������� � �������� ��������;
b.	����� ��������;
c.	���� ����������� �������� � ���� ��������� (���, �����, ����);
d.	����������� ����� ������;
e.	����� �� ����� ��������
�������� �������:
�	�������� ������� �� ����� ��� �� 12 ������� (��������) ������ �� ��������� (���� ������ � ����������);
�	������������ ������� �� �������� (� ������ ��������� ��� ��������� � ����������� ���������;
�	�������� 20 ��. �� ����� ���������, ������� ���������� ����� 10 ��� �����;
�	������ �������� �� ���������, � ������� ����� �� ����� ������������� ����� ������ ����������;
�	������ �������� �� ��������, ����� �������� �������� �������� � ����������

��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������. ������������� ���������� ���������� �� �����������. ������� ������, ������� ������������� ������ ���� �������.
*/
		case 4: {
		}break;
		}
	} while (n > 0);
}