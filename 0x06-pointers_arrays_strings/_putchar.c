#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD

int _putchar(char c)
{
	return (write(1, &c, 1));
=======
int _putchar(char c)
{
  return (write(1, &c, 1));
>>>>>>> aa79b9b5097fabf6c58c52762f06627db84c7012
}
