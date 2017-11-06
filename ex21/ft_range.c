/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:17:19 by fpetras           #+#    #+#             */
/*   Updated: 2017/11/06 16:29:50 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = 0;
	return (tab);
}
