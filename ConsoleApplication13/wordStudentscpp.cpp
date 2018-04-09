#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "students.h"
#include "studentsSettings.h"



FILE * file = NULL;

void CreateFileForStudents(char * fileName, char * mode)
{
	genStud();

	if ((file = fopen("students.txt", "w") != NULL))
	{

	}
}

