/**
 * _islower - Check if is lower case or not
 * @c:  The number to be check
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
