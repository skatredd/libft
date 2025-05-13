/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:52:00 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/17 10:59:59 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_l;
	size_t	dst_l;
	size_t	i;

	src_l = 0;
	while (src[src_l] != '\0')
	{
		src_l++;
	}
	dst_l = 0;
	while (dst_l < dstsize && dst[dst_l] != '\0')
	{
		dst_l++;
	}
	if (dstsize <= dst_l)
		return (src_l + dstsize);
	i = 0;
	while (i < dstsize - dst_l - 1 && src[i] != '\0')
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (src_l + dst_l);
}
