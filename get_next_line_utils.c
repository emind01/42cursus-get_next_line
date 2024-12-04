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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*fstr;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	fstr = malloc(len);
	if (!fstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		fstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		fstr[i + j] = s2[j];
		j++;
	}
	fstr[i + j] = '\0';
	return (fstr);
}
