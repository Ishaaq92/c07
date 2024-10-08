#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*duplicate;
	int	src_len; 
	
	i = 0;
	src_len = ft_strlen(src);
	
	duplicate = malloc(src_len * sizeof(char));

	while(i < src_len)
	{
		duplicate[i] = src[i];
		i ++;		
	}
	return (duplicate);
}

int	main(void)
{
	char*	str = "testing:))";
	char*	dup = ft_strdup(str);
	printf("%s", dup);
}
