/***********************************************************/
/* This program is for swapping last and the first digit   */
/* of any given interger number                            */
/* Assumption : 1) Entered number is valid interger number */
/* Developer : Mishrak                                     */
/***********************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
   int   num         =  0;
   long  num_1       =  0;
   char  buffer[20]  = {0};
   char  temp        =  0;
   int   length      =  0;

   if ( argc != 2 )
   {
      printf("#######################################\n");
      printf("## Usage : <binary> <interger_value> ##\n");
      printf("#######################################\n");
      return -1;
   }
   strcpy(buffer, argv[1]);                              // Getting 1st argument into local buffer
   length = strlen(buffer);                              // Getting the length of the string
   temp = buffer[0];                                     /*                                                        */
   buffer[0] = buffer[length - 1];                       /* Logic for Swapping of 1st and last digit of the string */
   buffer[length - 1] = temp;                            /*                                                        */
   num_1 = strtol(buffer, NULL, 10);                     // Converting string to decimal formate
   printf("number = %ld\n", num_1);                      // Output
   return 0;
}
