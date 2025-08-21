/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipeline.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 02:28:19 by vnicoles          #+#    #+#             */
/*   Updated: 2025/08/15 16:01:38 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

typedef struct s_pipeline
{
	t_ast_node	**commands;
	int			*pipefds;
	pid_t		*pids;
	int			count;
}				t_pipeline;
