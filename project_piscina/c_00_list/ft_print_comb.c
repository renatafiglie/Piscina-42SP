/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrenata- <mrenata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:06:13 by mrenata-          #+#    #+#             */
/*   Updated: 2023/06/05 14:13:13 by mrenata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	ctn;
	char	dzn;
	char	und;

	ctn = '0';
	dzn = '1';
	und = '2';
	while (ctn <= '7')
	{
		dzn = ctn + 1;
		while (dzn <= '8')
		{
			und = dzn + 1;
			while (und <= '9')
			{
				ft_putchar2(ctn, dzn, und);
			und++;
			}
		dzn++;
		}
	ctn++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
