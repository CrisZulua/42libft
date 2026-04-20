/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:51:06 by czuluaga          #+#    #+#             */
/*   Updated: 2026/04/20 16:01:17 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	Allocates memory and returns a substrung from the string s.
	The substring starts at index 'start' and has a maximum
	length of 'len'.

	RETURN
	A pointer to the substring.
	NULL if the allocation fails
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
