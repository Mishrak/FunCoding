#include "birthday.h"


void print_char(char x)
{
   printf("%c", x);
   fflush(stdout);
}

void terminate()
{
   int i, j;
   int n = 34;
   system("clear");

   display("===============>>>>>>>>>>    THANK YOU    <<<<<<<<<<===============\n",MILI_SECOND_100);
   for(i=n/2; i<=n; i+=2)
   {
      for(j=1; j<n-i; j+=2)
      {
         display(" ",MILI_SECOND_5);
      }

      for(j=1; j<=i; j++)
      {
         display("*",MILI_SECOND_5);
      }

      for(j=1; j<=n-i; j++)
      {
         display(" ",MILI_SECOND_5);
      }

      for(j=1; j<=i; j++)
      {
         display("*",MILI_SECOND_5);
      }

      display("\n",MILI_SECOND_5);
   }

   for(i=n; i>=1; i--)
   {
      for(j=i; j<n; j++)
      {
         display(" ",MILI_SECOND_5);
      }

      for(j=1; j<=(i*2)-1; j++)
      {
         display("*",MILI_SECOND_5);
      }

      display("\n",MILI_SECOND_5);
   }
   exit(0);
}

void display(char *a, int num)
{
   int i = 0;
   for(i=0; a[i]; i++)
   {
      print_char(a[i]);
      nap(num,MILI_SECOND);
   }
}
void not_in_the_list()
{
   system("clear");
   printf("##################################################################\n");
   display("## You have not selected any Wish from Birthday Wishes Box.\t##\n",MILI_SECOND_100);
   display("## But you are very special for me.\t\t\t\t##\n",MILI_SECOND_100);
   display("## Hence this one is for you my L",MILI_SECOND_100);
   nap(1, SECOND);
   display("ioness\t\t\t\t##\n",MILI_SECOND_100);
   printf("##################################################################\n");
   printf("\n\n\n\n\n\n\n");
   printf("#############################################################################\n");
   system("figlet HAPPY\ BIRTHDAY\ DEAR\ YESHA");
   printf("#############################################################################\n");
   printf("\nHAPPY BIRTHDAY DEAR YESHA\n");
   printf("\n\n\n\n\n\n\n\n");
   sleep(8);
}
