/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrenata- <mrenata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:36:34 by mrenata-          #+#    #+#             */
/*   Updated: 2023/06/11 15:50:43 by mrenata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 10;
// 	b = 3;
// 	ft_div_mod (a, b, &div, &mod);
// 	printf ("Valor de A = %d\n ", a);
// 	printf ("Valor de B = %d\n ", b);
// 	printf ("Resultado da divisao = %d\n", div);
// 	printf ("Resto da divisao = %d\n", mod);
// 	return (0);
// }
