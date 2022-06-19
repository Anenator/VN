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
#define IS_VALID(x) (((x >= 'a' &&  x <= 'z') || (x >= 'A' && x <= 'Z')) ? TRUE : FALSE)



typedef char data[MAX_CHAR];

typedef struct 
{
    int life;
	data name;
} NovelData;

//Function Prototypes 
void promptName (NovelData *story);
int randomizer (int nNum);
void showLife (NovelData *story);
void Introduction ();
void NameSelection (NovelData *story);
void Hall ();
int HallChoice ();
void Classroom ();
int InvestigateLockers ();
int InvestigateLockerA ();
int InvestigateLockerB ();
int Library (NovelData *story);
int CheckBookshelves ();
void Light (NovelData *story);
int PickUp (int nChoice);
int InvestigateLockerATRUE(NovelData *story);
int InvestigateBookShelvesTRUE(NovelData *story);
int nNameChecker (); 
int nFirstLogicalPuzzle (NovelData *story);
int nSecondArithmeticPuzzle (NovelData *story);

int nFirstArithmeticPuzzle (NovelData *story);
int nQuiz (NovelData *story);
int GoodEnding (NovelData *story);
int TragicEnding (NovelData *story);
int BestEnding (NovelData *story);
int BadEnding4 (NovelData *story);
int BadEnding3 (NovelData *story);
int BadEnding2 (NovelData *story);
int BadEnding1 (NovelData *story);

int OkEnding3 (NovelData *story);
int OkEnding2 (NovelData *story);
#endif 