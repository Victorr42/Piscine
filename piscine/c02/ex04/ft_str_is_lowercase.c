/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:44:50 by vly               #+#    #+#             */
/*   Updated: 2022/01/27 16:37:30 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a') && (str[i] <= 'z'))
			return (0);
			i++;
	}
	return (1);
}
/*int main(void)
{
	char *str;
	int i;

	str = "asAa";
	i = ft_str_is_lowercase(str);
	printf("i = %d\n", i);
}*/
