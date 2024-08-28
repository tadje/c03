/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:31:58 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/19 11:12:53 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			break ;
		i++;
	}
	return (str + i);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "missing tabs uinction finds the first occurrence of";
	char to_find[] = "tabs";
	printf("%s\n",ft_strstr(str,to_find));
	return (0);
}
*/
