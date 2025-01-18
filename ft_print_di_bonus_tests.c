/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di_bonus_tests.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/18 16:18:45 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_di_bonus_test(const char *spec);
static void	ft_print_di_bonus_test_value(int n, const char *spec);

void	ft_print_di_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifiers 'd' and 'i' with bonus");

	ft_print_test_desc("Flags");
	ft_print_di_bonus_test("|%d|%#d|%0d|%-d|% d|%+d|");

	ft_print_test_desc("Field width (8) > Strlen (6)");
	ft_print_di_bonus_test("|%8d|%#8d|%08d|%-8d|% 8d|%+8d|");

	ft_print_test_desc("Strlen (6) > Field width (2)");
	ft_print_di_bonus_test("|%2d|%#2d|%02d|%-2d|% 2d|%+2d|");

	ft_print_test_desc("Precision (7) > Strlen (6)");
	ft_print_di_bonus_test("|%.7d|%#.7d|%0.7d|%-.7d|% .7d|%+.7d|");

	ft_print_test_desc("Strlen (6) > Precision (2)");
	ft_print_di_bonus_test("|%.2d|%#.2d|%0.2d|%-.2d|% .2d|%+.2d|");

	ft_print_test_desc("Field width (7) > Strlen (6) > Precision (3)");
	ft_print_di_bonus_test("|%7.3d|%#7.3d|%07.3d|%-7.3d|% 7.3d|%+7.3d|");

	ft_print_test_desc("Precision (7) > Strlen (6) > Field width (3)");
	ft_print_di_bonus_test("|%3.7d|%#3.7d|%03.7d|%-3.7d|% 3.7d|%+3.7d|");

	ft_print_test_desc("Strlen (6) > Precision (4) > Field width (3)");
	ft_print_di_bonus_test("|%3.4d|%#3.4d|%03.4d|%-3.4d|% 3.4d|%+3.4d|");

	ft_print_test_desc("Field width (8) > Precision (7) > Strlen (6)");
	ft_print_di_bonus_test("|%8.7d|%#8.7d|%08.7d|%-8.7d|% 8.7d|%+8.7d|");

	ft_print_test_desc("Precision (8) > Field width (7) > Strlen (6)");
	ft_print_di_bonus_test("|%7.8d|%#7.8d|%07.8d|%-7.8d|% 7.8d|%+7.8d|");

	ft_print_test_desc("Strlen (6) > Field width (3) > Precision (0)");
	ft_print_di_bonus_test("|%3.0d|%#3.0d|%03.0d|%-3.0d|% 3.0d|%+3.0d|");

	ft_print_test_desc("Strlen (6) > Precision (3) > Field width (0)");
	ft_print_di_bonus_test("|%0.3d|%#0.3d|%00.3d|%-0.3d|% 0.3d|%+0.3d|");

	ft_print_test_desc("Strlen (6) > Field width (0) > Precision (0)");
	ft_print_di_bonus_test("|%0.0d|%#0.0d|%00.0d|%-0.0d|% 0.0d|%+0.0d|");

	printf("\n\n");
}

static void	ft_print_di_bonus_test(const char *spec)
{
	ft_print_di_bonus_test_value(101010, spec);
	ft_print_di_bonus_test_value(-10101, spec);
	ft_print_di_bonus_test_value(0, spec);
}

static void	ft_print_di_bonus_test_value(int n, const char *spec)
{
	int		ret;

	printf("%s%s, %d%s\n", CYAN, spec, n, COLOR_RESET);
	ret = printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "ft_printf");
}
