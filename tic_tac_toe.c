#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char  arr[10]  = {'1','2','3','4','5','6','7','8','9'};
int   count    =  1;

typedef enum __STATUS
{
   SUCCESS_STATUS,
   FAILURE_STATUS,
   INVALID_INPUT,
   STATUS_WINNER
}STATUS;

int draw_board()
{
   system("clear");
   printf("\n\t\t\t\t\t==========================================\n");
   printf("\t\t\t\t\t|Welcome to my Application of Tic Tac Toe|\n");
   printf("\t\t\t\t\t==========================================\n\n\n");
   printf("\t\t\t\t1. Player 1 (X)\t\t\t\t\t2. Player 2 (0)\n\n\n");
   printf("\t\t\t\t\t\t\t%c | %c | %c\n", arr[0], arr[1], arr[2]);
   printf("\t\t\t\t\t\t\t----------\n");
   printf("\t\t\t\t\t\t\t%c | %c | %c\n",arr[3], arr[4], arr[5]);
   printf("\t\t\t\t\t\t\t----------\n");
   printf("\t\t\t\t\t\t\t%c | %c | %c\n", arr[6], arr[7], arr[8]);
   return 0;
}

int check_winner(char input, char *player1, char *player2)
{
   STATUS   status   =  SUCCESS_STATUS;
   int      winner   =  0;

   do
   {
      //Checking Rows
      if (((arr[0] == arr[1]) && (arr[0] == arr[2]))
            || ((arr[3] == arr[4]) && (arr[3] == arr[5]))
            || ((arr[6] == arr[7]) && (arr[6] == arr[8])))
      {
         winner = 1;
      }
      //Checking Columns
      else if (((arr[0] == arr[3]) && (arr[0] == arr[6]))
            || ((arr[1] == arr[4]) && (arr[1] == arr[7]))
            || ((arr[2] == arr[5]) && (arr[2] == arr[8])))
      {
            winner = 1;
      }
      //Checking Diagonal
      else if (((arr[0] == arr[4]) && (arr[0] == arr[8]))
            || ((arr[2] == arr[4]) && (arr[2] == arr[6])))
      {
            winner = 1;
      }
      if (winner == 1)
      {
         draw_board();
         if (input == 'X')
            printf("%s is winner\n", player1);
         else if (input == 'O')
            printf("%s is winner\n", player2);
         status = STATUS_WINNER;
         break;
      }

   }while(0);
   return status;
}

int mark_board(int choice, char* player1, char* player2)
{
   char     input          =  '0';
   STATUS   status         =  SUCCESS_STATUS;

   do
   {
      choice -= 1;
      if ((arr[choice] == 'X') || (arr[choice] == 'O') || (choice >= 9) || (choice < 0))
      {
         printf("Invalid Input\n");
         sleep (2);
         status = INVALID_INPUT;
         break;
      }

      input =  ((count%2) == 1) ? 'X' : 'O';
      arr[choice] = input;
      count++;
      if (STATUS_WINNER == check_winner(input, player1, player2))
      {
         status = STATUS_WINNER;
         break;
      }
      if (count >= 10)
      {
         status = FAILURE_STATUS;
         break;
      }
   }while(0);
   return status;
}
int main()
{
   int      choice         =  0;
   STATUS   status         =  SUCCESS_STATUS;
   char     player1[10]    =  {0};
   char     player2[10]    =  {0};

   printf("Enter the name of Player 1 = \n");
   scanf("%s", player1);
   printf("Enter the name of Player 2 = \n");
   scanf("%s", player2);
   do
   {
      draw_board();
      ((count%2) == 1) ? (printf("Enter Your choice %s (X)\n", player1)) : (printf("Enter your choice %s(O)\n", player2));
      scanf("%d", &choice);
      status = mark_board(choice, player1, player2);
      if (STATUS_WINNER == status)
         break;
      else if (FAILURE_STATUS == status)
      {
         draw_board();
         printf("Match is Draw. Thanks for Playing\n");
         break;
      }
   }while(1);

   return status;
}
