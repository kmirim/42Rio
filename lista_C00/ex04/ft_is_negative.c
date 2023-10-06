/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:19:13 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/08/31 16:20:39 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	if (n < 0)
	{
		r = 'N';
	}
	else
	{
		r = 'P';
	}
	write(1, &r, 1);
}
//int main ()
//{
//	int n = 10;
//
//	ft_is_negative(n);
//	return 0;
//}
