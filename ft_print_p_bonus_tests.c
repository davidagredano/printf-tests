/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/18 16:11:43 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_p_bonus_test(const char *spec);
static void	ft_print_p_bonus_test_value(void *p, const char *spec);
static void	ft_print_p_bonus_test_null(const char *spec);

void	ft_print_p_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'p' with bonus");

	ft_print_test_desc("Flags");
	ft_print_p_bonus_test("|%p|%#p|%0p|");
	ft_print_p_bonus_test("|%-p|% p|%+p|");

	ft_print_test_desc("Field width (16) > Strlen (12)");
	ft_print_p_bonus_test("|%16p|%#16p|%016p|");
	ft_print_p_bonus_test("|%-16p|% 16p|%+16p|");

	ft_print_test_desc("Strlen (12) > Field width (8)");
	ft_print_p_bonus_test("|%8p|%#8p|%08p|");
	ft_print_p_bonus_test("|%-8p|% 8p|%+8p|");

	ft_print_test_desc("Precision (16) > Strlen (12)");
	ft_print_p_bonus_test("|%.16p|%#.16p|%0.16p|");
	ft_print_p_bonus_test("|%-.16p|% .16p|%+.16p|");

	ft_print_test_desc("Strlen (12) > Precision (2)");
	ft_print_p_bonus_test("|%.2p|%#.2p|%0.2p|");
	ft_print_p_bonus_test("|%-.2p|% .2p|%+.2p|");

	ft_print_test_desc("Field width (16) > Strlen (12) > Precision (3)");
	ft_print_p_bonus_test("|%16.3p|%#16.3p|%016.3p|");
	ft_print_p_bonus_test("|%-16.3p|% 16.3p|%+16.3p|");

	ft_print_test_desc("Precision (16) > Strlen (12) > Field width (3)");
	ft_print_p_bonus_test("|%3.16p|%#3.16p|%03.16p|");
	ft_print_p_bonus_test("|%-3.16p|% 3.16p|%+3.16p|");

	ft_print_test_desc("Strlen (12) > Precision (9) > Field width (3)");
	ft_print_p_bonus_test("|%3.9p|%#3.9p|%03.9p|");
	ft_print_p_bonus_test("|%-3.9p|% 3.9p|%+3.9p|");

	ft_print_test_desc("Field width (16) > Precision (14) > Strlen (12)");
	ft_print_p_bonus_test("|%16.14p|%#16.14p|%016.14p|");
	ft_print_p_bonus_test("|%-16.14p|% 16.14p|%+16.14p|");

	ft_print_test_desc("Precision (16) > Field width (14) > Strlen (12)");
	ft_print_p_bonus_test("|%14.16p|%#14.16p|%014.16p|");
	ft_print_p_bonus_test("|%-14.16p|% 14.16p|%+14.16p|");

	ft_print_test_desc("Strlen (12) > Field width (6) > Precision (0)");
	ft_print_p_bonus_test("|%6.0p|%#6.0p|%06.0p|");
	ft_print_p_bonus_test("|%-6.0p|% 6.0p|%+6.0p|");

	ft_print_test_desc("Strlen (12) > Precision (6) > Field width (0)");
	ft_print_p_bonus_test("|%0.6p|%#0.6p|%00.6p|");
	ft_print_p_bonus_test("|%-0.6p|% 0.6p|%+0.6p|");

	ft_print_test_desc("Strlen (12) > Field width (0) > Precision (0)");
	ft_print_p_bonus_test("|%0.0p|%#0.0p|%00.0p|");
	ft_print_p_bonus_test("|%-0.0p|% 0.0p|%+0.0p|");

	ft_print_test_desc("NULL fit");
	ft_print_p_bonus_test_null("|%.0p|%.1p|%.2p|%.3p|%.4p|%.5p|%.6p|%.7p|");
	ft_print_p_bonus_test_null("|%0p|%1p|%2p|%3p|%4p|%5p|%6p|%7p|");

	printf("\n\n");
}

static void	ft_print_p_bonus_test(const char *spec)
{
	void	*p;

	p = "1";
	ft_print_p_bonus_test_value(p, spec);
	ft_print_p_bonus_test_value(NULL, spec);
}

static void	ft_print_p_bonus_test_value(void *p, const char *spec)
{
	int		ret;

	printf("%s%s, %p%s\n", CYAN, spec, p, COLOR_RESET);
	ret = printf(spec, p, p, p);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, p, p, p);
	ft_print_return_value(ret, "ft_printf");
}

static void	ft_print_p_bonus_test_null(const char *spec)
{
	int		ret;

	printf("%s%s, %p%s\n", CYAN, spec, NULL, COLOR_RESET);
	ret = printf(spec, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_print_return_value(ret, "ft_printf");
}
