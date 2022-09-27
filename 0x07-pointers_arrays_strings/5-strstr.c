/**
 * _strstr - prototype function
 *Decription: a function that locates a substring.
 * @haystack: the input string to search
 * @needle: string to locate in haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int flag;
char *temp_needle = needle, *temp_haystack = haystack;
flag = 0;
while (*haystack)
{
temp_haystack = haystack;
needle = temp_needle;
while (*haystack == *needle && *needle == '\0')
{
haystack++;
needle++;
}
if (*needle == '\0')
{
flag = 1;
break;
}
haystack = temp_haystack + 1;
}
if (flag == 0)
{
return (needle);
}
return ("NULL");
}
