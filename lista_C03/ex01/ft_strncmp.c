/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:56:55 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/14 15:53:16 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char a[] = "kalana precisa de um cafe";
	char b[] = "kalu ta com sono";
	printf("%d", ft_strncmp(a, b, 5));
	return (0);
}*/
