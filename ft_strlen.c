/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:50:38 by czuluaga          #+#    #+#             */
/*   Updated: 2026/03/22 08:50:38 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The ft_strlen() function calculates the length of the string
	pointed to by s, excluding the terminating null byte ('\0').

	RETURN
	The ft_strlen() function returns the number of bytes in the
	string pointed to by s.
*/
size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
