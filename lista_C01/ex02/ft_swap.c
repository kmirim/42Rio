/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:43:20 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/07 14:16:24 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*int main(void)
{
	int	num1 = 10;
	int	num2 = 20;

	ft_swap(&num1,&num2);
	printf ("%d e %d", num1, num2);
	return (0);
}*/
