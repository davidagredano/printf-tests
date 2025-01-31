/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:41:35 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/20 02:23:53 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_usage_info(void);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_usage_info();
		return (1);
	}
	// Mandatory
	if (strcmp(argv[1], "c") == 0)
		ft_print_c_tests();
	else if (strcmp(argv[1], "s") == 0)
		ft_print_s_tests();
	else if (strcmp(argv[1], "p") == 0)
		ft_print_p_tests();
	else if (strcmp(argv[1], "d") == 0 || strcmp(argv[1], "i") == 0)
		ft_print_d_tests();
	else if (strcmp(argv[1], "u") == 0)
		ft_print_u_tests();
	else if (strcmp(argv[1], "x") == 0)
		ft_print_x_tests();
	else if (strcmp(argv[1], "X") == 0)
		ft_print_X_tests();
	else if (strcmp(argv[1], "%") == 0)
		ft_print_percent_tests();
	else if (strcmp(argv[1], "mix") == 0)
		ft_print_mixed_tests();
	else if (strcmp(argv[1], "m") == 0)
	{
		ft_print_c_tests();
		ft_print_s_tests();
		ft_print_p_tests();
		ft_print_d_tests();
		ft_print_u_tests();
		ft_print_x_tests();
		ft_print_X_tests();
		ft_print_percent_tests();
		ft_print_mixed_tests();
	}
	// Specification parser
	else if (strcmp(argv[1], "isvalid") == 0)
		ft_isvalid_tests();
	else if (strcmp(argv[1], "parse") == 0)
		ft_parse_tests();
	// Bonus
	else if (strcmp(argv[1], "cb") == 0)
		ft_print_c_bonus_tests();
	else if (strcmp(argv[1], "sb") == 0)
		ft_print_s_bonus_tests();
	else if (strcmp(argv[1], "pb") == 0)
		ft_print_p_bonus_tests();
	else if (strcmp(argv[1], "db") == 0 || strcmp(argv[1], "ib") == 0)
		ft_print_d_bonus_tests();
	else if (strcmp(argv[1], "ub") == 0)
		ft_print_u_bonus_tests();
	else if (strcmp(argv[1], "xb") == 0 || strcmp(argv[1], "Xb") == 0)
		ft_print_x_bonus_tests();
	else if (strcmp(argv[1], "b") == 0)
	{
		ft_print_c_bonus_tests();
		ft_print_s_bonus_tests();
		ft_print_p_bonus_tests();
		ft_print_d_bonus_tests();
		ft_print_u_bonus_tests();
		ft_print_x_bonus_tests();
	}
	else
	{
		print_usage_info();
		return (1);
	}
}

void	print_usage_info(void)
{
	printf("What test do you want to lauch?\n");
	printf("%s", GRAY);
	printf("Mandatory: c, s, p, d, i, u, x, X, %%, mix, m\n");
	printf("Bonus: cb, sb, pb, db, ib, ub, xb, Xb, b\n");
	printf("%s", COLOR_RESET);
	printf("For example, try './test b' to launch all tests for bonus part.\n");
}
