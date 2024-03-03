#include <ctype.h>
#include <stddef.h>

char *string_toupper(char *s)
{
	int i;

	if (s == NULL)
		return NULL;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = toupper((unsigned char) s[i]);

	return (s);
}
