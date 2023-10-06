/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:09:31 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/07 03:21:53 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main ()
{
int	num1 = 100;	
int	num2 = 5;
int	*pnum1 = &num1;
int	*pnum2 = &num2;

ft_ultimate_div_mod(pnum1, pnum2);
printf("resultado da divisao é %d e o resto é %d", num1, num2);
return 0;
}
*/
