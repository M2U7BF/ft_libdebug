/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_debug.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamei <kkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:48:35 by kkamei            #+#    #+#             */
/*   Updated: 2025/06/11 11:48:18 by kkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdebug.h"

void	put_strarr(char **str)
{
	int	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		printf("[%d] \"%s\",\n", i, str[i]);
		i++;
	}
}

int	put_strarr_compare(char **str, char **exp)
{
	int	i;
	int	is_not_all_equal;
  int is_different;

	if (str == NULL)
		return (-1);
	i = 0;
	is_not_all_equal = 0;
	while (str[i])
	{
    is_different = strncmp(str[i], exp[i], strlen(exp[i]) + 1);
		if (is_different != 0)
			is_not_all_equal = 1;
    if (is_different)
		  printf("[%d] [❌] result:\"%s\", expected:\"%s\"\n", i, str[i], exp[i]);
    else
      printf("[%d] [⭕] result:\"%s\", expected:\"%s\"\n", i, str[i], exp[i]);
		i++;
	}
	return (is_not_all_equal);
}
