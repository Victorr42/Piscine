/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:11:50 by vly               #+#    #+#             */
/*   Updated: 2022/01/26 20:19:59 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char	*dest,	char*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	a[] = {"dog"};
	char	b[8];
	char	*p;
	int	d;
	
	p = ft_strcpy(b, a);
	ft_putchar(p);
	return (0);
}*/
