#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed byt a new line, tothe standard error.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 0215-10-19\n", 59);
return (1);
}
