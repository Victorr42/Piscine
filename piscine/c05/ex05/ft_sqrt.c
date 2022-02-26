/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:18:30 by vly               #+#    #+#             */
/*   Updated: 2022/02/01 15:40:13 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i < 46341)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(49));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(9));
}*/
