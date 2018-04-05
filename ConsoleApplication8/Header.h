struct date {
	int year;
	int day;
	int month;
};


struct NOTE1
{
	char *name;
	char *phone;
	date *age;
};

struct Tovar
{
	char *name;
	int * qnt;
	int *price;
	date *date;
};
void generateDate(date *t);
void generateName(char *name);
void sortTovar(Tovar* a, int r);

