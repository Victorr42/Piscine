/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:06:44 by vly               #+#    #+#             */
/*   Updated: 2022/01/16 14:56:18 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num1, char num2, char num3)
{	
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (num1 < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{	
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1, num2, num3);
				num3++;
			}
		num2++;
		}
			num1++;
	}
}

int	main(void)

{
	ft_print_comb();
}
