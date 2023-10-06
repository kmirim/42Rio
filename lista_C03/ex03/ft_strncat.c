/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:14:47 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/14 21:01:12 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char a[20] = "aiaiaiaierfwrfe";
	char b[5] = "kkk";
	printf("%s\n", ft_strncat(a, b, 15));
//	printf("%s\n", strncat(a, b, 15));
	return 0;
}*/
