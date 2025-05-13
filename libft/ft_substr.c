/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:48:52 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/16 12:57:08 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copysubstr(char *cs, char const *s, unsigned int start, size_t len)
{
	size_t	k;

	k = 0;
	while (k < len)
	{
		cs[k] = s[start + k];
		k++;
	}
	cs[k] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cs;
	size_t	s_l;

	if (s == NULL)
		return (NULL);
	s_l = ft_strlen(s);
	if (start >= s_l)
	{
		cs = malloc(1);
		if (cs == NULL)
			return (NULL);
		cs[0] = '\0';
		return (cs);
	}
	if (len > s_l - start)
		len = s_l - start;
	cs = malloc(len + 1);
	if (cs == NULL)
		return (NULL);
	copysubstr(cs, s, start, len);
	return (cs);
}
