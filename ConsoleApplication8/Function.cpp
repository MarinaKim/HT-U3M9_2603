#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include<stdlib.h>
#include "Header.h"

void generateDate(date *t)
{
	t->day = 1 + rand() % 30;
	t->month = 1 + rand() % 11;
	t->year = 1960 + rand() % 50;
}
void generateName(char *name)
{
	strcpy(name, "Number #");
	int a = 1 + rand() % 30;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}

void sortTovar(Tovar* a, int r)
{
	Tovar temp;
	for (int i = 0; i < r; i++)
	{
		for (int j = r - 1; j > i; j--)
		{
			if ((a + j - 1)->price > (a + j)->price)
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;

			}
					}
	}
}
