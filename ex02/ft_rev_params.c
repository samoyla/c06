/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:03:30 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/21 11:50:56 by msamoile         ###   ########.fr       */
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

	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		n--;
		write(1, "\n", 1);
	}
	return (0);
}
