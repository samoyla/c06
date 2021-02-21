/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_progam_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 08:51:59 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/21 16:44:07 by msamoile         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;	
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
			i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_arg(char *tab[], int size)
{
	int i;
	int j;
	int swap;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int a;

	a = 1;
	ft_sort_arg(argv, argc);
	while (a < argc)
	{
		ft_putstr(argv[a]);
		a++;
		write(1, "\n", 1);
	}
	return (0);
}
