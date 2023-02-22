#include "main.h"
#include <unistd.h>
/**
* _putchar - write the character c to standout
* @c: the character to print
*
* Return: On success 1.
* On error, -1 is returned, and error is set appropratily.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
