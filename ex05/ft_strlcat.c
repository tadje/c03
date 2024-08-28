/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:17:45 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/28 21:48:39 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	/*int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);*/
	return ((unsigned int)0);
}
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char	dest[] ="hello";
	char	dest1[] = "hello";
	char	src[] = "good";
	printf("ft_strlcat %d :%s\n",ft_strlcat(dest, src, 2), dest);
	printf("strlcat %d :%s\n", (int)strlcat(dest1, src, 8), dest1);
	printf("%s\n", dest1);
	return (0);
}
