/**
 *rev_string -prototype function
 *@s: string to be reversed
 *Description: Reverses a string (s)
 *Return: void
 */
void rev_string(char *s)
{
char temp_char;
int temp_size;
int size;
size = 0;
temp_size = 0;
while (s[size] != '\0')
{
size++;
}
while (temp_size < size--)
{
temp_char = s[temp_size];
s[temp_size++] = s[size];
s[size] = temp_char;
}
}
