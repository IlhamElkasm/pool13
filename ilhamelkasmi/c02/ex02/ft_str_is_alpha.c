/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:18:34 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/26 15:39:15 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
int	main()
{
  char arr[] = "{}he2llo";
  printf("%d: ", ft_str_is_alpha(arr));
  return 0;
}*/
