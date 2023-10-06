/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:47:10 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/14 04:56:09 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main()
{
	char array[] = "aiaiai";
	printf("%d\n", ft_strlen(array));
	return 0;
}
*/
