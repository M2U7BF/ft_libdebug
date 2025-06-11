/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libdebug.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamei <kkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:48:45 by kkamei            #+#    #+#             */
/*   Updated: 2025/06/11 11:48:43 by kkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include <stdio.h>
# include <string.h>

// put_debug.c
void	put_strarr(char **str);
int		put_strarr_compare(char **str, char **exp);

void	put_strarr(char **str);

#endif
