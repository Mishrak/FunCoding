/***********************************************************/
/* This file is a header file for common.c                 */
/* which can be use for making main function efficient     */
/* Developer : Mishrak                                     */
/***********************************************************/
/*************************************************************/
/*                      Header Files                         */
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*************************************************************/
/*                      Macros                               */
/*************************************************************/
#define SUCCESS 0
#define FAIL -1
#define MILI_SECOND_5   5
#define MILI_SECOND_20  20
#define MILI_SECOND_100 100
#define MILI_SECOND_200 200
#define MILI_SECOND_300 300

/*********************************************/
/*             Structor & Enum               */
/*********************************************/
typedef enum {

   MICRO_SECOND,
   MILI_SECOND,
   SECOND,
} delay;

/**************************************/
/*             Function               */
/**************************************/
int nap(long time, int num);
void display(char *a, int num);
void print_char(char x);
