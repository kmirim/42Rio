/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:50:55 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/14 18:26:21 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			j = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>

int main ()
{
	char a[] = "vamo que vamo";
	char find[] = "que";
	printf("%s", ft_strstr(a, find));
	return 0;
}*/
