#include <stdio.h>
#include <stdlib.h>

//GLOBAL VARIABLE
int shika = 0;
int no = 1;
int ko = 2;

//RECURSIVE FUNCTION
int awesomemachine(int nice) {
   int great = 0;
   printf("%p \n", &great);
   if (nice > 0) {
      awesomemachine(nice-1);
   }
   return 0;
}

int main() {
   //MALLOC
   int *help = malloc(sizeof(int) * 3);
   int *me = malloc(sizeof(int) * 3);
   int *please = malloc(sizeof(int) * 3);

   //GLOBAL ADDRESS
   printf("DATA:\n");
   printf("%p \n", &shika); 
   printf("%p \n", &no);
   printf("%p \n", &ko);

   //LOCAL ADDRESS
   printf("\nSTACK:\n");
   awesomemachine(2);

   //MALLOC ADDRESS
   printf("\nHEAP:\n");
   printf("%p \n", help); 
   printf("%p \n", me);
   printf("%p \n", please);

   free(help);
   free(me);
   free(please);
   return 0;
}
