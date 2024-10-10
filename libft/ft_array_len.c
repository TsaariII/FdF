/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:59:02 by nzharkev          #+#    #+#             */
/*   Updated: 2024/10/07 11:59:06 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_array_len(char **str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
