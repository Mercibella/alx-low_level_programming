#include <stdio.h>
/**
* main - Entry point
*
* Description: "Prints all combinations of single-digit numbers"
* Return: Always 0 (success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
/**
* Description: "Prints combination of single-digit numbers to 9"
* Return: Always (Succes)
*/
if (num == 9)
	/**
	 * Description: "Prints combination of single-digit numbers"
	 */
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
