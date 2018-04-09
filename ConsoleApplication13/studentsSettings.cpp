#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "students.h"


void generateName(char*name)
{
	for (int i = 0; i < 15; i++)
	{
		name[i] = 97 + rand() % 26;

		if (i == 0 || i == 3 || i == 6)
			name[i] = toupper(name[i]);
		if (i == 1 || i == 4)
			name[i] = '.';
		if (i == 2 || i == 5)
			name[i] = ' ';
	}
}

void createName(char*a)
{
	char lName[10][30] = { "Лондон", "Роулинг", "Монгомерри", "Ланнистер", "Сноу", "Таргариен","Дарси", "Поттер", "Уизли", "Старк" };
	char name[10][5] = { "А.П.", "Г.П.", "С.К.", "В.М.", "Ц.О.", "С.Ж.","Ф.Х.", "У.Я.", "Г.Г.", "Д.С." };

	int rnd = rand() % 9;
	strcat(a, lName[rnd]);
	strcat(a, " ");
	rnd = rand() % 9;
	strcat(a, name[rnd]);
}

void generateDate(dates *date)
{
	date->day = 1 + rand() % 30;
	date->month = 1 + rand() % 12;
	date->year = 1980 + rand() % 20;
}

Gender genGender()
{
	//int  k = rand() % 2;
	return (Gender)(0 + rand() % 2);
}

void genSub(subject *sub)
{
	char subName[5];
	strcpy(sub->name, "subject #");
	itoa(rand()%30, subName, 10);
	strcat(sub->name, subName);

	sub->bal = rand() % 100;
}

void printInfoDate(students*man)
{
	printf("\t%d.%d.%d", man->date.day, man->date.month, man->date.year);
}

void printInfoGender(Gender m)
{
	if (m == male)
		printf("\tmale");
	else 
		printf("\tfemale");

}

void printInfo(students*man)
{
	printf("%s \t", man->name);
	printInfoDate(man);
	printInfoGender(man->gender);
	printf("\n");
}

void genStudents()
{
	char name[30];
	int randStud = 10 + rand() % 30;
	students *stud = (students*)calloc(randStud, sizeof(students));
	if (stud != 0)
	{
		for (int i = 0; i < randStud; i++)
		{
			createName(stud[i].name);
			generateDate(&stud[i].date);
			stud[i].gender = genGender();
			for (int j = 0;j < 10;j++)
			{
				genSub(&stud[i].sub[j]);
			}

			printInfo(&stud[i]);
		}
	}
}
