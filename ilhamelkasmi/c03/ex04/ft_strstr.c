/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:01:07 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/27 12:20:42 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
 	int	i;
	int	j;
  
	i = 0;
	j = 0;
	while(str[i])
	{
		while(to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if(to_find[j] == '\0')
        	return &str[i];
		i++;
    		j = 0;
	}
	return (str);
}
/*
int main()
{
  char text[] = "";
  char find[] = "";
  char *result = ft_strstr(text, find);
  if(result)
    printf( "found : %s", result);
  return 0;
}*/
