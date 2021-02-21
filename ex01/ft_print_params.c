/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:17:19 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/21 11:38:42 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return (0);
}

int	main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
