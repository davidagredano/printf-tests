/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/18 16:20:05 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_u_bonus_test(const char *spec);
static void	ft_print_u_bonus_test_value(unsigned n, const char *spec);

void	ft_print_u_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'u' with bonus");

	ft_print_test_desc("Flags");
	ft_print_u_bonus_test("|%u|%#u|%0u|%-u|% u|%+u|");

	ft_print_test_desc("Field width (8) > Strlen (6)");
	ft_print_u_bonus_test("|%8u|%#8u|%08u|%-8u|% 8u|%+8u|");

	ft_print_test_desc("Strlen (6) > Field width (2)");
	ft_print_u_bonus_test("|%2u|%#2u|%02u|%-2u|% 2u|%+2u|");

	ft_print_test_desc("Precision (7) > Strlen (6)");
	ft_print_u_bonus_test("|%.7u|%#.7u|%0.7u|%-.7u|% .7u|%+.7u|");

	ft_print_test_desc("Strlen (6) > Precision (2)");
	ft_print_u_bonus_test("|%.2u|%#.2u|%0.2u|%-.2u|% .2u|%+.2u|");

	ft_print_test_desc("Field width (7) > Strlen (6) > Precision (3)");
	ft_print_u_bonus_test("|%7.3u|%#7.3u|%07.3u|%-7.3u|% 7.3u|%+7.3u|");

	ft_print_test_desc("Precision (7) > Strlen (6) > Field width (3)");
	ft_print_u_bonus_test("|%3.7u|%#3.7u|%03.7u|%-3.7u|% 3.7u|%+3.7u|");

	ft_print_test_desc("Strlen (6) > Precision (4) > Field width (3)");
	ft_print_u_bonus_test("|%3.4u|%#3.4u|%03.4u|%-3.4u|% 3.4u|%+3.4u|");

	ft_print_test_desc("Field width (8) > Precision (7) > Strlen (6)");
	ft_print_u_bonus_test("|%8.7u|%#8.7u|%08.7u|%-8.7u|% 8.7u|%+8.7u|");

	ft_print_test_desc("Precision (8) > Field width (7) > Strlen (6)");
	ft_print_u_bonus_test("|%7.8u|%#7.8u|%07.8u|%-7.8u|% 7.8u|%+7.8u|");

	ft_print_test_desc("Strlen (6) > Field width (3) > Precision (0)");
	ft_print_u_bonus_test("|%3.0u|%#3.0u|%03.0u|%-3.0u|% 3.0u|%+3.0u|");

	ft_print_test_desc("Strlen (6) > Precision (3) > Field width (0)");
	ft_print_u_bonus_test("|%0.3u|%#0.3u|%00.3u|%-0.3u|% 0.3u|%+0.3u|");

	ft_print_test_desc("Strlen (6) > Field width (0) > Precision (0)");
	ft_print_u_bonus_test("|%0.0u|%#0.0u|%00.0u|%-0.0u|% 0.0u|%+0.0u|");

	printf("\n\n");
}

static void	ft_print_u_bonus_test(const char *spec)
{
	ft_print_u_bonus_test_value(101010, spec);
	ft_print_u_bonus_test_value(0, spec);
}

static void	ft_print_u_bonus_test_value(unsigned n, const char *spec)
{
	int		ret;

	printf("%s%s, %u%s\n", CYAN, spec, n, COLOR_RESET);
	ret = printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "ft_printf");
}
