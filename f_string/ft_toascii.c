/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:49:40 by WSeegers          #+#    #+#             */
/*   Updated: 2018/05/23 20:59:52 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toascii(int c)
{
	return (c & 0x7f);
}
