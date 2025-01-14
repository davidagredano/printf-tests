/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/14 21:45:03 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_s_bonus_test(const char *spec, const char *desc)
{
	int		ret;
	char	*full_desc;
	char	*s;

	s = "Hello!"; // TODO test with NULL also
	full_desc = ft_strjoin(spec, desc);
	ft_print_test_desc(full_desc);
	ret = printf(spec, s, s, s, s, s, s);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, s, s, s, s, s, s);
	ft_print_return_value(ret, "ft_printf");
	free(full_desc);
}

void	ft_print_s_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 's' with bonus");
	ft_print_s_bonus_test("|%s|%#s|%0s|%-s|% s|%+s|", " // Flags");
	ft_print_s_bonus_test("|%8s|%#8s|%08s|%-8s|% 8s|%+8s|", " // Field width 8 > strlen 6");
	ft_print_s_bonus_test("|%2s|%#2s|%02s|%-2s|% 2s|%+2s|", " // Strlen 6 > Field width 2");
	ft_print_s_bonus_test("|%.8s|%#.8s|%0.8s|%-.8s|% .8s|%+.8s|", " // Precision 8 > Strlen 6");
	ft_print_s_bonus_test("|%.2s|%#.2s|%0.2s|%-.2s|% .2s|%+.2s|", " // Strlen 6 > Precision 2");
	ft_print_s_bonus_test("|%7.3s|%#7.3s|%07.3s|%-7.3s|% 7.3s|%+7.3s|", " // Field width 7 > Strlen 6 > Precision 3");
	ft_print_s_bonus_test("|%3.8s|%#3.8s|%03.8s|%-3.8s|% 3.8s|%+3.8s|", " // Precision 8 > Strlen 6 > Field width 3");
	ft_print_s_bonus_test("|%3.4s|%#3.4s|%03.4s|%-3.4s|% 3.4s|%+3.4s|", " // Strlen 6 > Precision 4 > Field width 3");
	ft_print_s_bonus_test("|%9.7s|%#9.7s|%09.7s|%-9.7s|% 9.7s|%+9.7s|", " // Field width 9 > Precision 7 > Strlen 6");
	ft_print_s_bonus_test("|%2.0s|%#2.0s|%02.0s|%-2.0s|% 2.0s|%+2.0s|", " // Field width 2 > Strlen 6 > Precision 0");
	printf("\n\n");
}
