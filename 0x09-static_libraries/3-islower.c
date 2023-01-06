#include "main.h"

/**
* _islower - check for lower case letter
* @c : character to check the case
* Return: 1 if c is lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
