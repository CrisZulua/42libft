/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:48:28 by czuluaga          #+#    #+#             */
/*   Updated: 2026/03/22 08:48:29 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The ft_lstdelone() function takes the node 'lst' and frees its content
	using the function 'del'. Finally Freeing the node itself.
*/
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return;
	(*del)(lst->content);
	free(lst);
}
