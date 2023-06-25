/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrenata- <mrenata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:39:01 by mrenata-          #+#    #+#             */
/*   Updated: 2023/06/12 13:38:10 by mrenata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf ("Variavel A sem swap: %d\n", a);
	printf ("Variavel B sem swap: %d\n", b);
	ft_swap(&a, &b);
	printf ("Variavel A com swap: %d\n", a);
	printf ("Variavel B com swap: %d\n", b);
}
