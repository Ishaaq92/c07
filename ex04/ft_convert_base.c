#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	indexInString(char target, char *str);
int	base_validation(char *str);
char    *ft_putnbr_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	sign;
	int	base_from_len;
	int	base_to_len;
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
	base_to_len = ft_strlen(base_to);
	total = 0;
	
	while (indexInString(nbr[i], base_from) != -1)
	{
//		printf("%d\n", indexInString(nbr[i], base_from));
		total = (total * base_from_len) + indexInString(nbr[i], base_from); 
		i ++;	
		printf("%d\n", total);
		printf("This is the char passed in: %c\n", nbr[i]);
		printf("This is the indexInString: %d\n", indexInString(nbr[i], base_from));
	}
	return (ft_putnbr_base(total, base_to)); 
}

int	main(void)
{
	printf("%s\n", ft_convert_base("300", "0123456789ABCDEF", "0123456789"));	
	return (0);
}
