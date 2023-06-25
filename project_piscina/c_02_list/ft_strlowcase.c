/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrenata- <mrenata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:53:26 by mrenata-          #+#    #+#             */
/*   Updated: 2023/06/14 14:41:42 by mrenata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str [i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main (void)
// {
// 	char str[] = "AIII CALICA";

// ft_strlowcase(str);
// printf ("%s\n", ft_strlowcase(str));
// return (0);
// }
