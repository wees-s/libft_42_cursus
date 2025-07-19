#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (NULL);
	while(i <= len)
	{
		while (haystack[i] == needle[j])
		{
			if (j >= ft_strlen(needle) && i <= len)
				return ((char *)&haystack[ft_strlen(haystack) - ft_strlen(needle)]);
			if (i >= len)
				break ;
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
