/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:17:25 by vly               #+#    #+#             */
/*   Updated: 2022/01/31 16:17:51 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	else if (index == 0 || index == 1)
	{
		return (index);
	}
	return (-1);
}

/*int main(void)
{
	printf("%d", ft_fibonacci(7));
			return (0);
}*/
