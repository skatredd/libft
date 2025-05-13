/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:07:28 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/16 12:16:09 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	int				i;
	const char		*j;

	cc = (unsigned char)c;
	i = 0;
	j = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			j = &s[i];
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return ((char *)j);
}
