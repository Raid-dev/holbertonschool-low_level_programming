#include <ctype.h>
#include <stddef.h>

char *string_toupper(char *s)
{
	if (s == NULL)
		return NULL;

	for (size_t i = 0; s[i] != '\0'; i++)
	{
		s[i] = toupper((unsigned char) s[i]);
	}

	return (s);
}
