#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_comb(int d[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        ft_putchar(d[i] + '0');
    }
    
    if (d[0] != 10 - n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_combn(int n)
{
    int d[10];
    int i;
    
    for (i = 0; i < n; i++)
    {
        d[i] = i;
    }
    
    while (d[0] <= (10 - n))
    {
        print_comb(d, n);
     
        i = n - 1;
        while (i >= 0 && d[i] == (10 - n + i))
        {
            i--;
        }
        
        if (i < 0)
            break;
            
        d[i]++;
        for (int j = i + 1; j < n; j++)
        {
            d[j] = d[j - 1] + 1;
        }
    }
}

int main(void) 
{
	ft_print_combn(1);
	write(1,"\n",1);
}
