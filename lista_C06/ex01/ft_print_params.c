/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:38:47 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/17 03:13:56 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	(void)argc;
	while (argv[i])
	{
		ft_putstr (argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
