/**
 *_islower - prototype function
 *@c: character to check
 *Description: returns 1 if lowercase returns
 *0 for anything else
 *Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
