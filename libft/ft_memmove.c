/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:36:39 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/16 12:08:46 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(unsigned char *cdst, const unsigned char *csrc,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		cdst[i] = csrc[i];
		i++;
	}
}

static void	copy_backward(unsigned char *cdst, const unsigned char *csrc,
		size_t len)
{
	while (len > 0)
	{
		len--;
		cdst[len] = csrc[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (unsigned char *)dst;
	csrc = (const unsigned char *)src;
	if (cdst > csrc)
		copy_backward(cdst, csrc, len);
	else
		copy_forward(cdst, csrc, len);
	return (cdst);
}
