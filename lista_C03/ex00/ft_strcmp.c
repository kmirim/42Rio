/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:34:00 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/14 15:51:04 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char array_a[] = "bbbbb";
	char array_b[] = "bbbbb";
	printf("resultado %d", ft_strcmp(array_a, array_b));
	return(0);
}*/
