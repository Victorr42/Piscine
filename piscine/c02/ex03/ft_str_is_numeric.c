/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:40:16 by vly               #+#    #+#             */
/*   Updated: 2022/01/27 18:41:04 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}	
/*int main (void)
{
	char *s;
	int i;

	s = "abrg3";
	i = ft_str_is_numeric(s);
	if (i == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}*/
