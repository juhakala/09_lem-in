/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhakala <jhakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:59:15 by jhakala           #+#    #+#             */
/*   Updated: 2020/07/08 23:10:17 by jhakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int		reset_weights(t_mem *mem)
{
	int i;

	i = 0;
	while (i < mem->n_rooms)
		mem->rooms[i++].w = 0;
	return (1);
}