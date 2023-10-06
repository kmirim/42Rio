/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:56:48 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/07 03:35:24 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}	
	return (count);
}

/*int main ()
{
	int	len = ft_strlen("TESTE");
	printf("%i", len);
	return 0;
}*/	
