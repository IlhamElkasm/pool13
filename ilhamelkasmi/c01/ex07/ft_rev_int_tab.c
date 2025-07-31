/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:39:05 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/21 12:20:55 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = 5;

	ft_sort_int_tab(arr, size);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/
