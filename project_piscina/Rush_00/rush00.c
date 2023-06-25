/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:22:16 by pehenri2          #+#    #+#             */
/*   Updated: 2023/05/28 19:46:19 by pehenri2         ###   ########.fr       */
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
	if ((h == 0 && w == 0) || (h == y - 1 && w == x - 1))
		ft_putchar('o');
	else if ((h == y - 1 && w == 0) || (h == 0 && w == x - 1))
		ft_putchar('o');
	else if (h == 0 || (h == y - 1))
		ft_putchar('-');
	else if (w == 0 || w == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}
