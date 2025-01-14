/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 07:43:59 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/14 08:12:31 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_isvalid_test(const char *specification)
{
	char *complete_spec;

	complete_spec = ft_strjoin("%", specification);
	ft_print_test_desc(specification);
	printf(complete_spec, "Valid");
	printf(" %s// printf%s\n", GRAY, COLOR_RESET);
	if (ft_isvalid(specification))
		printf("Valid");
	else
		printf("Not valid");
	printf(" %s// isvalid%s\n", GRAY, COLOR_RESET);
	free(complete_spec);
}

void	ft_isvalid_tests(void)
{
	ft_print_test_header("Unit tests for isvalid function");
	ft_isvalid_test("s");
	ft_isvalid_test("#s");
	ft_isvalid_test("0s");
	ft_isvalid_test("-s");
	ft_isvalid_test(" s");
	ft_isvalid_test("+5s");
	ft_isvalid_test("#5s");
	ft_isvalid_test("05s");
	ft_isvalid_test("-5s");
	ft_isvalid_test(" 5s");
	ft_isvalid_test("+5s");
	ft_isvalid_test("#.5s");
	ft_isvalid_test("0.5s");
	ft_isvalid_test("-.5s");
	ft_isvalid_test(" .5s");
	ft_isvalid_test("+.5s");
	ft_isvalid_test("#5.5s");
	ft_isvalid_test("05.5s");
	ft_isvalid_test("-5.5s");
	ft_isvalid_test(" 5.5s");
	ft_isvalid_test("+5.5s");
	ft_isvalid_test("#0- +5.5s");
	ft_isvalid_test("-05.10s");
	ft_isvalid_test("05.-10s");
	ft_isvalid_test("5.000005s");
	ft_isvalid_test("-+-+-5s");
	ft_isvalid_test("-5#s");
	printf("\n\n");
}
