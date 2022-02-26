/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:20:52 by vly               #+#    #+#             */
/*   Updated: 2022/01/26 20:56:52 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
/*int	main(void)
{
	char str1[] = "123456";
	char str2[] = "123456";
	int	ret;

	ret = ft_strcmp(str1, str2);
	if( ret == 0)
	{
		printf("same");
	}	
	else
	{
		printf("diff");
	}
}*/
