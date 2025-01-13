/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:58:03 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_u_test(unsigned int n, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%u", n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%u", n);
	ft_print_return_value(ret, "ft_printf");
}

void	ft_print_u_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'u'");
	ft_print_u_test(1, "1");
	ft_print_u_test(16, "16");
	ft_print_u_test(42, "42");
	ft_print_u_test(12345678, "12345678");
	ft_print_u_test(-1, "-1");
	ft_print_u_test(-16, "-16");
	ft_print_u_test(-42, "-42");
	ft_print_u_test(-12345678, "-12345678");
	ft_print_u_test(0, "0");
	ft_print_u_test(INT_MAX, "INT_MAX");
	ft_print_u_test(INT_MIN, "INT_MIN");
	ft_print_u_test(UINT_MAX, "UINT_MAX");
	ft_print_u_test((unsigned int) LONG_MAX, "LONG_MAX");
	ft_print_u_test((unsigned int) LONG_MIN, "LONG_MIN");
	ft_print_u_test((unsigned int) ULONG_MAX, "ULONG_MAX");
	printf("\n\n");
}
