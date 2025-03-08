/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:22:59 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/08 17:39:10 by apregitz         ###   ########.fr       */
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

int	ft_putchar_er(char c)
{
	int	status;

	if (!get_error)
	{
		if (write(1, &c, 1) < 1)
			set_error(1);
	}
	return (1);
}

int	ft_putchar_str(char *s)
{
	int	count;

	count = -1;
	while (s[++count])
		ft_putchar_er(s[count]);
	return (count);
}
