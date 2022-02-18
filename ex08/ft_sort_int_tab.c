/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:58:49 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/18 02:41:59 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap3(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	anterior;
	int	posterior;

	anterior = 0;
	while (anterior < size)
	{
		posterior = anterior + 1;
		while (posterior < size)
		{
			if (tab[anterior] > tab[posterior])
				ft_swap3(&tab[anterior], &tab[posterior]);
			posterior++;
		}
		anterior++;
	}
}
