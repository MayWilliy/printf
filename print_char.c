/**
 * _putch - Prints characters
 * @ch: Character to be printed
 * Return: Printed characted
 */
int _putch(char ch)
{
	return (write(1, &ch, 1));
}
