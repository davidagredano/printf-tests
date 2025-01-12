/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 16:55:08 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(void)
{
	int	ret;

	ret = printf("%%");
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(void)
{
	int	ret;

	ret = ft_printf("%%");
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_percent(void)
{
	ft_print_test_desc("%");
	ft_print_expected_value();
	ft_print_return_value();
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier '%'");
	test_print_percent();
}
