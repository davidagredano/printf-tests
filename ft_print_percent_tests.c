/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:58:45 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_percent_test(void)
{
	int	ret;

	ft_print_test_desc("%");
	ret = printf("%%");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%%");
	ft_print_return_value(ret, "ft_printf");
}

void	ft_print_percent_tests(void)
{
	ft_print_test_header("Unit tests for specifier '%'");
	ft_print_percent_test();
	printf("\n\n");
}
