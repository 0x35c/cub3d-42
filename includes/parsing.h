/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:28:42 by adamiens          #+#    #+#             */
/*   Updated: 2023/02/16 09:04:45 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "cub3d.h"

void		extension_check(char *av);
void		parsing(int ac, char **av);
void		print_error_exit(char *error);
void		map_check(char *map);
long long	atoi_protect(char *str);
t_texture	init_texture(void);
void		free_texture_exit(t_texture config, char *buf, int fd);
int			convert_str_rgb_to_int(char **colors,
				t_texture config, char *buf, int fd);
void		get_map(t_texture *config, char *buf, t_map *map, int i);

#endif