#define lenght 30

enum Gender
{
	male = 0, 
	female = 1
};

struct dates
{
	int day;
	int month;
	int year;
};

struct subject
{
	char name[lenght];
	unsigned short  int bal;
};

struct students
{
	char name[lenght];
	dates date;
	Gender gender;
	subject sub[10];
};