/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:22:16 by pehenri2          #+#    #+#             */
/*   Updated: 2023/05/28 20:01:20 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	draw(int x, int y, int w, int h);

void	rush(int x, int y)
{
	int	w;
	int	h;

	if (x > 0 && y > 0)
	{
		h = 0;
		while (h < y)
		{
			w = 0;
			while (w < x)
			{
				draw(x, y, w, h);
				w++;
			}
			ft_putchar('\n');
			h++;
		}
	}
}

void	draw(int x, int y, int w, int h)
{
	if ((w == 0 && h == 0) || (w == 0 && h == y - 1))
		ft_putchar('A');
	else if (w == x - 1 && (h == y - 1 || h == 0))
		ft_putchar('C');
	else if (w == 0 || h == 0 || w == x - 1 || h == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
