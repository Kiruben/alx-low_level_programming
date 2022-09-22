/**
 *_strcmp - prototype function
 *@s1: first string to be ccompared
 *@s2: second string to be compared
 *Description: compares two strings
 *Return: 0 if equal, negative if s1 < s2,
 *positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
if (s1[0] == s2[0])
{
return (0);
}
else
{
return (s1[0] - s2[0]);
}
}
