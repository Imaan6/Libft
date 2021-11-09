/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:40 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/09 12:32:09 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if(needle == NULL)
		return (char*)(haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && i + j < len )
		{
			if (needle[j + 1] == '\0')
				return (char*)(&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
