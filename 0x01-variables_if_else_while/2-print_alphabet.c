#include <stdio.h>
#include <ctype.h>
/**
 * main - print an alphabet on lowercase
 *
 * Return:0 shows the success of the program
 **/
int main(void)
{
char c = ' ';

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(tolower(c));
}
putchar('\n');
return (0);
}
