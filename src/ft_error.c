/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:22:59 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/08 17:48:29 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*get_error(void)
{
	static int	status = 0;

	return (&status);
}

void	set_error(int new_status)
{
	int	*status;

	status = get_error();
	*status = new_status;
}
