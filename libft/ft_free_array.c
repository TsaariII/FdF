/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:04:07 by nzharkev          #+#    #+#             */
/*   Updated: 2024/09/04 13:49:29 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **array)
{
	int	a;

	a = 0;
	if (!array)
		return ;
	while (array[a] != NULL)
	{
		free(array[a]);
		a++;
	}
	free(array);
}
