/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:50:56 by czuluaga          #+#    #+#             */
/*   Updated: 2026/03/22 08:50:56 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_chrinset(const char *c, char const *set)
{
	while (*set)
	{
		if (*c == *set)
			return (1);
		set++;
	}
	return (0);
}

/*
	DESCRIPTION
	Allocates memory and returns a copy of 's1' with
	characters from 'set' removed from the beginning
	and the end.

	RETURN
	A pointer to the trim string.
	NULL if the allocation fails.
*/
char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t start;
	size_t end;
	char *trim_str;

	start = 0;
	end = ft_strlen(s1);
	while (ft_chrinset(&s1[start], set))
		start++;
	if (start >= end)
		return ((char *)ft_calloc(1, sizeof(char)));
	end--;
	while (ft_chrinset(&s1[end], set))
		end--;
	trim_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trim_str)
		return (NULL);
	i = 0;
	while (i <= end - start)
	{
		trim_str[i] = s1[start + i];
		i++;
	}
	trim_str[i] = 0;
	return (trim_str);
}
