/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:30:18 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/18 15:23:14 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count = 1;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				i;
	int				j;
	unsigned int	num;
	char			*c;

	i = ft_count(n);
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	c[i] = '\0';
	if (n < 0)
		num = (unsigned int)-n;
	else
		num = n;
	j = i - 1;
	while (j >= 0)
	{
		c[j] = (num % 10) + '0';
		num = num / 10;
		if (n < 0 && j == 0)
			c[j] = '-';
		j--;
	}
	return (c);
}
