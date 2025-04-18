/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:22:06 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 18:38:06 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <unistd.h>
int main(void)
{
    int num;                
    int *p1 = &num;        
    int **p2 = &p1;       
    int ***p3 = &p2;       
    int ****p4 = &p3;     
    int *****p5 = &p4;    
    int ******p6 = &p5;    
    int *******p7 = &p6;  
    int ********p8 = &p7;  
    int *********p9 = &p8; 

    ft_ultimate_ft(p9);    

    char digit1 = (num / 10) + '0';  // '4'
    char digit2 = (num % 10) + '0';  // '2'
    write(1, &digit1, 1);
    write(1, &digit2, 1);
    write(1, "\n", 1);

    return (0);
}