size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
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
