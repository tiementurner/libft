/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblanker <tblanker@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 11:18:22 by tblanker       #+#    #+#                */
/*   Updated: 2019/11/06 15:22:31 by tblanker      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c -= 65;
		c += 97;
		return (c);
	}
	else
		return (c);
}
