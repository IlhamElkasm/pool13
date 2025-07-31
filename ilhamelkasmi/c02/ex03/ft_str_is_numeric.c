/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:12:41 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/26 17:18:45 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' )
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
  char arr[] = "he2llo";
  printf("%d: ", ft_str_is_alpha(arr));
  return 0;
}*/
