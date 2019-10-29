/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksymy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 19:19:05 by smaksymy          #+#    #+#             */
/*   Updated: 2017/03/30 15:38:00 by smaksymy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H
# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 666

typedef struct s_file	t_file;

struct	s_file
{
	int				fd;
	t_file			*next;
	char			*str;
	char			prev[BUFF_SIZE + 1];
};

int		get_next_line(const int fd, char **line);

#endif
