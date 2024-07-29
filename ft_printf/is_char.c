/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:17:27 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/27 14:57:37 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_char(int c, int *check)
{
	if (*check == -1)
		return (-1);
	if (write(1, &c, 1) == -1)
	{
		*check = -1;
		return (-1);
	}
	return (1);
}
