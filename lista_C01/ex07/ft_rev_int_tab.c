/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:23:01 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/07 14:15:11 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	while (index < size / 2)
	{
		swap = tab [index];
		tab [index] = tab [size - index - 1];
		tab [size - index - 1] = swap;
		index = index + 1;
	}
}
