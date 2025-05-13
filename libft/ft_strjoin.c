/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:12:09 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/14 15:33:56 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*cs;
	unsigned int	s1_l;
	unsigned int	s2_l;
	size_t			i;
	size_t			j;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	cs = malloc(s1_l + s2_l + 1);
	if (!cs)
		return (NULL);
	i = 0;
	while (i < s1_l)
	{
		cs[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_l)
	{
		cs[i + j] = s2[j];
		j++;
	}
	cs[i + j] = '\0';
	return (cs);
}
