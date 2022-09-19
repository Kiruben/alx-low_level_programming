/**
 *swap_int - prototype function
 *@a: first integer to swap
 *@b: second integer to swap
 *Description: swaps the value of two integers
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp_a;
temp_a = *a;
*a=*b;
*b=temp_a;
}
