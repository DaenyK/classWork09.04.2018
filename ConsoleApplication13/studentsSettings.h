#include "students.h"
#define lenght 30

void generateName(char*name);
void createName(char*a);
void generateDate(dates *date);
Gender genGender();
void genSub(subject *sub);
void printInfoDate(students*man);
void printInfoGender(Gender m);
void printInfo(students*man);
void genStudents();

void CreateFileForStudents(students*people, char * fileName);
