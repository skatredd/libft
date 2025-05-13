/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:43:17 by skatredd          #+#    #+#             */
/*   Updated: 2025/03/15 15:20:43 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cs;
	size_t	i;

	cs = malloc(ft_strlen(s) + 1);
	if (cs == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		cs[i] = f(i, s[i]);
		i++;
	}
	cs[i] = '\0';
	return (cs);
}
