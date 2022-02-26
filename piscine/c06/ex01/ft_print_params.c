/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:25:26 by vly               #+#    #+#             */
/*   Updated: 2022/02/02 11:29:50 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	count = 1;
	while (count < argc)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
