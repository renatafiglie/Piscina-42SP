/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrenata- <mrenata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:08:03 by mrenata-          #+#    #+#             */
/*   Updated: 2023/06/11 15:51:12 by mrenata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *div, int *mod)
{
	int	a;
	int	b;

	a = *div;
	b = *mod;
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 15;
// 	num2 = 3;
// 	ft_ultimate_div_mod(&num1, &num2);
// 	printf ("Resultado da divisao e: %d\n", num1);
// 	printf ("Resto da divisao e: %d\n", num2);
// 	return (0);
// }
