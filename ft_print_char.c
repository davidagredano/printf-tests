/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 15:56:46 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_char(int c)
{
	ft_putstr_fd("ft_print_int: param=", STDOUT_FILENO);
	ft_putchar_fd(c, STDOUT_FILENO);
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_char(c);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	test_print_char((int) 'a');
	test_print_char((int) '\0');
	test_print_char((int) '6');
	test_print_char((int) 200);
}
