#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}
int	indexInString(char target, char *str)
{
	int	i;
	
	while(str[i] != 0)
	{	
		if (str[i] == target)
			return (i);
		i ++;
	}
	return (-1);
}

int base_validation(char *str)
{
	// checks if base length is less than 2
	// checks if base characters contain '+' or '-'
	// checks if base characters contain duplicates

	int	i;
	int	j;
	
	i = 0;
	if (ft_strlen(str) < 2)
		return (1);
	while(str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while(str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	sign;
	int	base_from_len;
	int	index;
	int	total;

	i = 0;
	sign = 1;
	if (base_validation(base_from) + base_validation(base_to) != 0)
		return (NULL);
	while (nbr[i] == ' ' || nbr[i] == '+' || nbr[i] == '-')
	{
 		if (nbr[i] == '-')
			sign *= -1;	
		i ++;
	}
	base_from_len = ft_strlen(base_from);
	index = indexInString(nbr[i], base_from);
	printf("%d\n", base_from_len);
	//intf("%d\n", ft_strlen(
	printf("%d\n", index);
	while (index != -1)
	{
		total = total * base_from_len + index;
		i ++;
		index = indexInString(nbr[i], base_from);
	}
	printf("%d", total);
	return ("hello");
}

int	main(void)
{
	ft_convert_base("B2A", "0123456789ABCDEF", "0123456789");	
	return (0);
}
