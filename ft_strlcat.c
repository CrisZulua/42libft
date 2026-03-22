/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:50:31 by czuluaga          #+#    #+#             */
/*   Updated: 2026/03/22 08:50:31 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The strlcat() function appends the NUL-terminated string
	src to the end of dst. It will append at most
	dsize - strlen(dst) - 1 bytes, NUL-terminating the result.

	RETURN
	The function ft_strlcat() returns the total length of the
	string it tried to create. That means the initial length
	of dst plus the length of src.
*/
size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t slen;
	size_t dlen;
	size_t i;

	slen = ft_strlen(src);
	dlen = ft_strlen((const char *)dst);
	if (!src || !dst)
		return (slen + dlen);
	i = 0;
	while (i < (dsize - dlen - 1) && *src)
	{
		*(dst + dlen + i) = *(src + i);
		i++;
	}
	*(dst + dlen + i) = 0;
	return (slen + dlen);
}
