/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:20:22 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/13 13:05:58 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cb;

	cb = (unsigned char *)b;
	while (len > 0)
	{
		*cb = (unsigned char)c;
		cb++;
		len--;
	}
	return (b);
}
