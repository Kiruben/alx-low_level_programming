/**
 *_isalpha(int c) - prototype function
 *@c: character to evaluate
 *Description: evaluate character to check if it
 *is a alphabet lowercase or uppercase
 *Return: 1 if is a letter 0 anything else
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
