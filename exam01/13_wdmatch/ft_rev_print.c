#include <unistd.h>

char	*ft_rev_print(char	*str)
{
	int i;
	
	i = 0;
	int last;
	char temp;
	while(str[i])
	{
		i++;
	}
	last = i - 1;
	while(last >= 0)
	{
		write(1, &str[last], 1);
		last--;
	}
	write(1, "\n", 1);
	return (str);
}
