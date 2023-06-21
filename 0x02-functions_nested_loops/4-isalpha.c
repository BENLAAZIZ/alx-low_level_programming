
/**
 * _isalpha - Check for lowercase character
 * @c: the character to be checked
 * Return: 1 for alphabitic charachter or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
