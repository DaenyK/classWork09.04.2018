#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "studentsSettings.h"


void CreateFileForStudents(students*people,char * fileName)// char * mode)

{
	FILE * file = NULL;

	if ((file = fopen(fileName, "w")) != NULL)
	{
		char * str = "hello\n"; 
		bool result = fputs(str, file); 
		fprintf(file, "%s","hello\t");

		if (!result) 
			printf("DONE\n");
	}
	else
	{
		printf("error\n");
		exit(1);
	}
	fclose(file);
}

