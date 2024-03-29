#include "main.h"

/**
 * jack_bauer - It prints every minute of the day "00:00-23:59" of Jack Baur
 *
 * Return: nothing on success
 */

void jack_bauer(void)
{
	int s = 0, e = 23, s2 = 0, e2 = 59;

	while (s <= e)
	{
		while (s2 <= e2)
		{
			_putchar(s < 9 ? 0 + '0' : s / 10 + '0');
			_putchar(s < 9 ? s + '0' : s % 10 + '0');
			_putchar(':');
			_putchar(s2 < 9 ? 0 + '0' : s2 / 10 + '0');
			_putchar(s2 < 9 ? s2 + '0' : s2 % 10 + '0');
			_putchar('\n');

			s2++;
		}
		s2 = 0;
		s++;
	}
}
