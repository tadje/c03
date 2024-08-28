/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:11:10 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/28 19:46:44 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < (int) nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "66bcd";
	char src1[] = "8bcd"; 
	char dest[] = "123456789";
	char dest1[] = "123456789";
	ft_strncat(dest, src, 1);
	printf("ft_strncat : %s\n", dest);
	strncat(dest1, src1, 1);
	printf("strncat : %s \n", dest1);
	return (0);
}
*/
