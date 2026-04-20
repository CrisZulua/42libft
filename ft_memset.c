/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:49:34 by czuluaga          #+#    #+#             */
/*   Updated: 2026/04/20 11:37:29 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The ft_memset() function fills the first n bytes of the memory area pointed
	to by s with the constant byte c.

	RETURN
	The ft_memset() returns a pointer to s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (s);
	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}
