#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int     indexInString(char target, char *str)
{
        int     i;

        while(str[i] != '0')
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

        int     i;
        int     j;

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

char    *append_char(char *string, char c)
 {
         char    *s;
         int     i;
         int     s_len;

         s_len = ft_strlen(string);
         s = malloc((s_len + 2) * sizeof(char));
         s[0] = c;
         i = 1;
         while (i <= s_len)
         {
                 s[i] = string[i-1];
                 i ++;
         }
         s[i] = 0;
         free(string);
         return (s);
 }
 
char	*ft_putnbr_base(int nbr, char *base)
 {
         int     base_len;
         char    *string;

	if (base_validation(base) == 1)
        	return " ";
	base_len = ft_strlen(base);
        string = malloc(1 * sizeof(char));
        while (nbr > 0)
	{ 
		string = append_char(string, base[nbr % base_len]); 
        	nbr = nbr / base_len;
        }
         //write(1, &base[nbr % base_len], 1);
         //write(1, string, ft_strlen(string));
        return (string);
}

