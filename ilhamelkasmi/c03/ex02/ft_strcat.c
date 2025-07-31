/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:00:27 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/26 14:22:10 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	while(dest[i])
		i++;

	while(src[j])
	{
		dest[i] = src[j];
			j++;
			i++;
	}
	dest[i] = '\0';
	return(dest);
}
int	main()
{
	char arr[] = "achraf";
	char dest[100] = "hammouc";
	ft_strcat(dest, arr);
	printf("%s :", dest);
}
