/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/10 14:02:37 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_char(int c)
{
	char std[2];
	//char mine[2];

	int	ret_std = printf("%c", c);
	sprintf(std, "%c", c);
	ft_putstr("ft_print_char: expect=");
	ft_putstr(std);
	ft_putstr(", mine=");
	int	ret_mine = ft_print_char(c);
	ft_putstr(", expect ret=");
	ft_putnbr_fd(ret_std, STDOUT_FILENO);
	ft_putstr(", ret mine=");
	ft_putnbr_fd(ret_mine, STDOUT_FILENO);
	ft_putstr("\n");
}

int	main(void)
{	
	test_print_char((int) 'a');
	test_print_char((int) '\0');
	test_print_char((int) '6');
	test_print_char((int) 200);
	test_print_char((int) '0');
	test_print_char((int) 0);
	test_print_char((int) '1');
}
