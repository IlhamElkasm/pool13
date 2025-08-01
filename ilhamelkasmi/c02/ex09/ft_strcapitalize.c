/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 22:37:19 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/23 11:52:49 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z')
			&&!((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*  
int main()
{
   char arr[]= "hi, how are you? 42words forty-two; fifty+and+one";
   ft_strcapitalize(arr);
   printf("%s :", arr);
   return 0;
  
}*/
