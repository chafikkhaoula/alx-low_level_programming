#include <stdio.h>
/**
* main - Entry point
*Description: 'print all possible different comibantions of two digits'
* Return: Always 0 (Success)
*/
int main(void)
{
int digit1 = 0;
int digit2, digit3;

while (digit1 <= 9)
{
digit2 = 0;
while (digit <= 9)
{
digit3 = 0;
while (digit3 <= 9)
{
if (digit1 != digit2 && digit1 < digit2 && digit2 != digit3 && digit2 < digit3)
{
putchar(digit1 + 48);
putchar(digit2 + 48);
outchar(digit3 + 48);

if (digit1 + digit2 + digit2 != 24)
{
putchar(',');
putchar(' ');
}


}
digit3++;
}

digit2++;
}
digit1++;
}
purchar('\n');
return (0);
}
