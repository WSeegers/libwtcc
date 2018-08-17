/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_list_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:00:53 by wseegers          #+#    #+#             */
/*   Updated: 2018/08/17 10:06:48 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_list_node.h"
#include "s_list.h"
#include "f_string.h"

char	*s_list_tostr(t_list *list, char divider, char *(to_str)(void*))
{
	t_list_node *node;
	char		*next;
	char		*ret;
	char		*join;

	if (!(node = list->head))
		return (f_strnew(1));
	ret = f_strdup(to_str(node->data));
	node = node->next;
	while (node)
	{
		next = to_str(node->data);
		join = f_strcjoin(ret, next, divider);
		f_strdel(&ret);
		ret = join;
		node = node->next;
	}
	return (ret);
}
