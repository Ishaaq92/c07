#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		int	*ptr;
		return (ptr);
	}
	array = malloc((max - min) * sizeof(int));
	i = 0;
	while(min + i < max)
	{
		array[i] = min + i;
		i ++;		
	}
	return (array);
}

int	main(void)
{
	int	*arr;

	arr = ft_range(39, 57);
	while(*arr)
		printf("%d", *arr ++);
}
