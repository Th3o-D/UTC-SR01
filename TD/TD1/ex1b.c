/* ex1b.c*/

#include <stdio.h>

int main ()

   {

   int i;

   for (i=48 ; i<=57 ; i++)
       printf("|%3d | %c | \n",i,i);

   for (i=97 ; i<=122 ; i++)
       printf("|%3d | %c | \n",i,i);

   for (i=65 ; i<=90 ; i++)
       printf("|%3d | %c | \n",i,i);


   return 0;

   }
