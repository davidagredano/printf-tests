/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/16 13:20:58 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_p_bonus_test(const char *spec, const char *desc)
{
	int		ret;
	char	*full_desc;
	void	*p;

	p = "1";
	full_desc = ft_strjoin(spec, desc);
	ft_print_test_desc(full_desc);
	ret = printf(spec, p, p, p);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, p, p, p);
	ft_print_return_value(ret, "ft_printf");
	free(full_desc);
}

void	ft_print_p_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'p' with bonus");
	ft_print_p_bonus_test("|%p|%#p|%0p|", " // Flags");
	ft_print_p_bonus_test("|%-p|% p|%+p|", " // Flags");

	ft_print_p_bonus_test("|%16p|%#16p|%016p|", " // Field width 16 > strlen 12");
	ft_print_p_bonus_test("|%-16p|% 16p|%+16p|", " // Field width 16 > strlen 12");

	ft_print_p_bonus_test("|%8p|%#8p|%08p|", " // Strlen 12 > Field width 8");
	ft_print_p_bonus_test("|%-8p|% 8p|%+8p|", " // Strlen 12 > Field width 8");

	ft_print_p_bonus_test("|%.16p|%#.16p|%0.16p|", " // Precision 16 > Strlen 12");
	ft_print_p_bonus_test("|%-.16p|% .16p|%+.16p|", " // Precision 16 > Strlen 12");

	ft_print_p_bonus_test("|%.2p|%#.2p|%0.2p|", " // Strlen 12 > Precision 2");
	ft_print_p_bonus_test("|%-.2p|% .2p|%+.2p|", " // Strlen 12 > Precision 2");

	ft_print_p_bonus_test("|%16.3p|%#16.3p|%016.3p|", " // Field width 16 > Strlen 12 > Precision 3");
	ft_print_p_bonus_test("|%-16.3p|% 16.3p|%+16.3p|", " // Field width 16 > Strlen 12 > Precision 3");

	ft_print_p_bonus_test("|%3.16p|%#3.16p|%03.16p|", " // Precision 16 > Strlen 12 > Field width 3");
	ft_print_p_bonus_test("|%-3.16p|% 3.16p|%+3.16p|", " // Precision 16 > Strlen 12 > Field width 3");

	ft_print_p_bonus_test("|%3.9p|%#3.9p|%03.9p|", " // Strlen 12 > Precision 9 > Field width 3");
	ft_print_p_bonus_test("|%-3.9p|% 3.9p|%+3.9p|", " // Strlen 12 > Precision 9 > Field width 3");

	ft_print_p_bonus_test("|%16.14p|%#16.14p|%016.14p|", " // Field width 16 > Precision 14 > Strlen 12");
	ft_print_p_bonus_test("|%-16.14p|% 16.14p|%+16.14p|", " // Field width 16 > Precision 14 > Strlen 12");

	ft_print_p_bonus_test("|%15.6p|%#15.6p|%015.6p|", " // Field width 15 > Strlen 12 > Precision 6");
	ft_print_p_bonus_test("|%-15.6p|% 15.6p|%+15.6p|", " // Field width 15 > Strlen 12 > Precision 6");

	printf("\n\n");
}
