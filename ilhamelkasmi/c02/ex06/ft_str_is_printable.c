/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:47:18 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/26 15:13:51 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h/>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main()
{
  char arr[] = "he{}2llo";
  printf("%d: ", ft_str_is_printable(arr));
  return 0;
}
*/
