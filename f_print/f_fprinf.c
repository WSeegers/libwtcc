/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_fprinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:11:58 by wseegers          #+#    #+#             */
/*   Updated: 2018/08/24 21:34:35 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "f_print.h"

int		f_vfprintf(t_file *file, const char *format, va_list ap)
{
	return (f_vdprintf(file->fd_out, format, ap));
}

int		f_fprintf(t_file *file, const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	return (f_vfprintf(file, format, ap));
}
