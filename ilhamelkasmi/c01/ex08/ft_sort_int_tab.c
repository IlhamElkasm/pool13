/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:13:48 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/20 22:20:59 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
/*  
int main(void) 
{
      int arr[] = {42, 7, 5, 88, 3, 15};
      int size = sizeof(arr) / sizeof(arr[0]);
  
      ft_sort_int_tab(arr, size);
  
      printf("\n  ");
      for (int i = 0; i < size; i++)
          printf("%d ", arr[i]);
  
      printf("\n");
      return 0;
}
*/
