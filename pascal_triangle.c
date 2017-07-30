/***********************************************************/
/* This program is for showinf the pattern                 */
/* of Pascal Triangle                                      */
/* Assumption : 1) Entered number is valid interger number */
/* Developer : Mishrak                                     */
/***********************************************************/

#include <stdio.h>
int main(int argc, char *argv[])
{
   int   num   =  0;
   int   i     =  0;
   int   j     =  0;
   int   a[20] =  {0};
   int   b[20] =  {0};
   printf("Enter any number\n");
   scanf("%d",&num);
   for (i=0;i<num;i++)
   {
      a[0] = a[i] = b[0] = b[i] = 1;

      for (j=0;j<=i;j++)
      {
         if ( i==0 || i==j )
         {
            b[j] = a[j];
            printf("%d ", a[j]);
         }
         else
         {
            a[j] = b[j - 1] + b[j];
            printf("%d ", a[j]);
         }
      }
      for (j=0;j<=i;j++)
         b[j] = a[j];
      printf("\n");
   }

   return 0;
}
