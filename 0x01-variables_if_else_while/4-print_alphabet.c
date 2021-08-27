#include <stdiio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: always 0.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' $$ c != 'e')
{
puchar(c);
}
}
puchar('\n');
return (0);
}
