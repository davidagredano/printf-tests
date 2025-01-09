/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 10:55:42 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_int(int n)
{
	ft_putstr_fd("ft_print_int: param=", STDOUT_FILENO);
	ft_putnbr_fd(n, STDOUT_FILENO);
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_int(n);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	test_print_int((int) 1);
	test_print_int((int) 123);
	test_print_int((int) 392485);
	test_print_int((int) 0);
	test_print_int((int) INT_MAX);
	//test_print_int((int) INT_MAX + 1);
	test_print_int((int) INT_MIN);
	//test_print_int((int) INT_MIN - 1);
}
