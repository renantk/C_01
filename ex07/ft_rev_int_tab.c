/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:38:35 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/18 02:26:12 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index_cres;
	int	index_decres;

	index_cres = 0;
	index_decres = size - 1;
	while (index_cres < size / 2)
	{
		ft_swap2(tab + index_cres, tab + index_decres);
		index_cres++;
		index_decres--;
	}
}
