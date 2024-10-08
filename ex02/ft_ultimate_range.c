#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	size = max - min;	
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while(min + i < max)
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (size);	
}

int	main(void)
{
	int	*range;

	int	check = ft_ultimate_range(&range, 2, 8);
	printf("%d", check);
}
