/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:11:40 by vly               #+#    #+#             */
/*   Updated: 2022/01/31 12:16:25 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/*int	main(void)

{
	printf("%d",ft_recursive_power(12,3));
			return (0);
}*/
