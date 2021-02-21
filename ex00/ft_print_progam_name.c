/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_progam_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 08:51:59 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/21 09:42:49 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
		write(1, &str[i], 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
