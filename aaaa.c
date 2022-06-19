#include <stdio.h>
#include <string.h>

struct Puzzles
{
   char question[1000];
   int answer;
   char choices[1000];
};

int main()
{
    struct Puzzles puzzle1.question = {"if one year for Onis is equivalent to seven human years.\nHow long has an Oni been haunting a 37 year old human\nconsidering the Oni has been haunting since birth, in Oni years?\n", 3,"[1]37 years\n[2]1 year\n[3]259 years\n[4]None of the above\n"};
    struct Puzzles puzzle2.question = {"The person who built it sold it. The person who bought it never used it.\nThe person who used it never saw it. What is it?\n", 2,"[1]A car\n[2]A house\n[3]A coffin\n[4]All of the above\n"};
    struct Puzzles puzzle3.question = {"If a pumpkin pie weighs four pounds and is sliced in half while each half is\nsliced into thirds, what is the weight, in ounces, of each slice?\n(HINT: a pound equals sixteen ounces)\n", 4,"64[1]4\n2]16\n[3]8\n[4]None of the above\n"};
 

    Puzzles puzzles[] = {puzzle1, puzzle2, puzzle3};

   for(int i = 0; i < sizeof(puzzles)/sizeof(puzzles[0]); i++)
   {
      printf("%s", puzzles[i].question);
      printf("%d", puzzles[i].answer);
      printf("%s", puzzles[i].choices);
   }

   return 0;
}
