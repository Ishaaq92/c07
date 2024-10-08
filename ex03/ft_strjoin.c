#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	total_length(char size, char **strs, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
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
	int	sep_index;

	
	if (size == 0)
		return (malloc(0));
	string = malloc((total_length(size, strs, sep)+1) * sizeof(char)); 
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
		if (i != (size - 1))
		{
			sep_index = 0;
			while (sep[sep_index] != 0)
			{
				string[index + sep_index] = sep[sep_index];
				sep_index ++;
			}
			index += ft_strlen(sep);
		}
		
		i ++;	
	}
	string[index++] = 0;
	return (string);
}

int	main(void)
{
	char	*strs[] = {"test0", "test1", "test2"};
	char	*string = ft_strjoin(3, strs, " ");
	printf("%s", string);
	return (0);
}
