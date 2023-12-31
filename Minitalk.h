/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:34:20 by woosekim          #+#    #+#             */
/*   Updated: 2023/07/11 08:30:34 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define SLEEP_TIME 80
# include <signal.h>
# include "./libft/libft.h"

void	ft_s_handler(int signal);
void	ft_send_char_client(int pid, char c);
int		ft_check_input_client(int argc, char **argv);

#endif