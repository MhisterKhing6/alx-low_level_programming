#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - files first n values of a buffer with char
 * @a: A string to print
 */

void print_chessboard(char (*a)[8])
{
int row = 8;
int coloumn = 8;
int i = 0; 
int j = 0;
for (; i < row; i++)
{
for(; j < coloumn; j++)
putchar(a[i][j]);
if (i != 7)
putchar('\n');
j = 0;
}
}
