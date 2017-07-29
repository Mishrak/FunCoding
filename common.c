/********************************************************************************/
/* Before using any function read the instructions written above that fucntion  */
/* Modify according to your need and enjoy coding                               */
/********************************************************************************/

#include "common.h"

/***************************************************************/
/* Description : This Function is printing only one character  */
/* Linked      : Linked with display function                  */
/* argument    : char x    : one character                     */
/* return      : void      : nothing                           */
/***************************************************************/
void print_char(char x)
{
   printf("%c", x);
   fflush(stdout);
}

/***************************************************************/
/* Description : This fucntion is for providing delay          */
/*               in second, mili second or micro second        */
/* Linked      : None                                          */
/* argument    : time      : number i.e 1, 2, etc ...          */
/*               num       : unit of delay(use MACRO)          */
/*                         : i.e MICRO_SECOND,MILI_SECOND,etc..*/
/* return      : int       : status : PASS or FAIL             */
/***************************************************************/

int nap(long time, int num) {
   int status        =  SUCCESS;
   switch(num) {
      case MICRO_SECOND:
         usleep(time);
         break;
      case MILI_SECOND:
         usleep(time * 1000);
         break;
      case SECOND:
         sleep(time);
         break;
      default:
         status = FAIL;
         break;
   }
   return status;
}

/***************************************************************/
/* Description : This fucntion is for printing string character*/
/*               After perticular interval of time.            */
/* Linked      : None                                          */
/* argument    : char *a   : Input String                      */
/*               delay     : delay in mili second              */
/* return      : void      : nothing                           */
/***************************************************************/
void display(char *a, int delay)
{
   int i = 0;
   for(i=0; a[i]; i++)
   {
      print_char(a[i]);
      nap(delay,MILI_SECOND);
   }
}
