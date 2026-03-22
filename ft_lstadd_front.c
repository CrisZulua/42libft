/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuluaga <czuluaga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 08:48:21 by czuluaga          #+#    #+#             */
/*   Updated: 2026/03/22 08:48:22 by czuluaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The ft_lstadd_front() function adds the node 'new' at the beginning
	of the list.
*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}
