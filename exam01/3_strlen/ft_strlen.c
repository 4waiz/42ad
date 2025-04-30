int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return(i);
}

#include <stdio.h>

int main(void)
{
	char *str = "Hello 42";
	int length;

	length = ft_strlen(str);
	printf("String: %s\n Length: %d\n", str, length);
}	
