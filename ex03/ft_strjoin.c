#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	while (*str != 0)
		i++;
	return (i);
}

int	total_length(char size, char **strs, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (strs[i] != 0)
	{
		count += ft_strlen(strs[i]);
		i ++;
	}
	count += (size - 1) * ft_strlen(sep); 
	return (count);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char	*string;
	int	index;
	
	if (size == 0)
		return (malloc(0));
	string = malloc(total_length(size, strs, sep) * sizeof(char)); 
	i = 0;
	j = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while(strs[i][j] != 0)
		{
			string[index] = strs[i][j];
			index ++;
			j ++;
		}
		
		i ++;	
	}
	return (string);
}

int	main(void)
{
	char	*strs[] = {"test0", "test1", "test2"};
	printf("%s", ft_strjoin(0, strs, " "));

	return (0);
}
