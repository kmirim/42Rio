/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:48:31 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/06 00:07:15 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{	
int	num1 = 100;
int	num2 = 20;
int	result_div = num1 / num2;
int	resto_da_div = num1 % num2;
ft_div_mod(num1, num2, &result_div, &resto_da_div);	
printf("resultado da divisão %i, resto da divisão %i", result_div, resto_da_div);
return (0);
}*/
