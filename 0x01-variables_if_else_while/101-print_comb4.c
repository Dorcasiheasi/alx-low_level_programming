
#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int f_d;
	int m_d;
	int 1_d;

	while (c <= 999)
	{
		f_d = (c / 100 + '0');
		m_d = (c / 10 % 10 + '0')
		1_d = (c % 10 + '0');

		if ((f_d < m_d) && (m_d < 1_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(1_d);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
