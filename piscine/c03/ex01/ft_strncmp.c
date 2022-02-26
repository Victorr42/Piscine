/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:58:31 by vly               #+#    #+#             */
/*   Updated: 2022/01/29 15:56:10 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char str1[] = "13232";
	char str2[] = "5113223";
	int ret;


	ret = ft_strncmp(str1, str2, 1);
	if( ret == 0)
	{
		printf("same");
	}
	else
	{
		printf("diff");
	}
}*/
