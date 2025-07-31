/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:21:09 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/26 17:23:35 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main()
{
  char arr[]= "heloooooooo";
  char dest[20];
  unsigned int result = ft_strlcpy(dest, arr, 20);
  printf("the word :%s \n", dest);
  printf("the length :%d ", result);
  return 0;

}*/
