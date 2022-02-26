/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:43:24 by vly               #+#    #+#             */
/*   Updated: 2022/02/01 10:21:15 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb)

{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
/*int main(void)
{
	printf("Factorual 4 = %d\n", ft_iterative_factorial(8));
	printf("Factorial 1 = %d\n", ft_iterative_factorial(12));
	printf("Factorial 0 = %d\n", ft_iterative_factorial(0));
	return (0);
}*/
