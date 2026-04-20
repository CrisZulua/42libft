/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:51:13 by czuluaga          #+#    #+#             */
/*   Updated: 2026/04/20 11:35:01 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION:
	If c is a lowercase letter, toupper() returns its uppercase equivalent.
	If c is neither an unsigned char value nor EOF, the behavior  of  these
	functions is undefined.

	RETURN
	Lowercase equivalent.
*/
int	ft_toupper(int c)
{
	if (!ft_isalpha(c) || c < 97)
		return ((unsigned char)c);
	return ((unsigned char)c - 32);
}
