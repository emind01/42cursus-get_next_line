#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2, size_t s1_len, size_t s2_len)
{
    char *str;
    size_t i = 0;
    size_t j = 0;

    str = malloc(s1_len + s2_len + 1);
    if (!str)
        return (NULL);
    while (i < s1_len)
        str[i++] = s1[i];
    while (j < s2_len)
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}
