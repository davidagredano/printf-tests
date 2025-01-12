/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:19:28 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	test_print_percent(void)
{
	int	ret;

	ft_print_test_desc("%");
	ret = printf("%%");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%%");
	ft_print_return_value(ret, "ft_printf");
}


int	main(void)
{
	ft_print_test_header("Unit tests for specifier '%'");
	test_print_percent();
}
