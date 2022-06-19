#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

/*********************************************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and applying the concepts 
learned. I have constructed the functions and their respective algorithms and corresponding code by myself. The 
program was run, tested, and debugged by my own efforts. I further certify that I have not copied in part or whole or 
otherwise plagiarized the work of other students and/or persons.
<your full name>, DLSU ID# <number>
*********************************************************************************************************/
#ifndef INCLUDE_H
#define INCLUDE_H
#define MAX_CHAR 1000

typedef char data[MAX_CHAR];

typedef struct 
{
    int life;
	data name;
} NovelData;

//Function Prototypes
void promptName (NovelData *story);
int randomizer (int nNum);
int nLifeCounter (int *nLife);
void Introduction ();
void NameSelection (NovelData *story);
void Hall ();
int HallChoice ();
void Classroom ();

#endif 