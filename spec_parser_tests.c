/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 07:43:59 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/18 16:58:36 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_isvalid_test(const char *specification);
static void	ft_parse_test(const char *specification, t_spec *spec);
static void	ft_log_spec(t_spec *spec);

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
	ft_isvalid_test(".s");
	ft_isvalid_test(".-s");
	ft_isvalid_test(".-5s");
	printf("\n\n");
}

void	ft_parse_tests(void)
{
	t_spec	*spec;

	ft_print_test_header("Unit tests for parse function");
	spec = ft_calloc(1, sizeof(t_spec));
	ft_parse_test("c", spec);
	ft_parse_test("#X", spec);
	ft_parse_test("0x", spec);
	ft_parse_test("-s", spec);
	ft_parse_test(" i", spec);
	ft_parse_test("+5d", spec);
	ft_parse_test("#72%", spec);
	ft_parse_test("09s", spec);
	ft_parse_test("-682p", spec);
	ft_parse_test(" 23d", spec);
	ft_parse_test("+09621p", spec);
	ft_parse_test("#.8923s", spec);
	ft_parse_test("0.2789c", spec);
	ft_parse_test("-.898d", spec);
	ft_parse_test(" .617s", spec);
	ft_parse_test("+.9541c", spec);
	ft_parse_test("#8934.61i", spec);
	ft_parse_test("0751.20s", spec);
	ft_parse_test("-98.5p", spec);
	ft_parse_test(" 5.5s", spec);
	ft_parse_test("+5.5s", spec);
	ft_parse_test("#0- +5.5s", spec);
	ft_parse_test("-05.10s", spec);
	ft_parse_test("5.000005s", spec);
	ft_parse_test("-+-+-5s", spec);
	ft_parse_test(".s", spec);
	printf("\n\n");
	free(spec);
}

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

static void	ft_parse_test(const char *specification, t_spec *spec)
{
	ft_print_test_desc(specification);
	ft_parse(specification, spec);
	ft_log_spec(spec);
}

static void	ft_log_spec(t_spec *spec)
{
	printf("alternative_form: %d\n", spec->alternative_form);
	printf("    zero_padding: %d\n", spec->zero_padding);
	printf("      left_align: %d\n", spec->left_align);
	printf("   leading_blank: %d\n", spec->leading_blank);
	printf("    leading_sign: %d\n", spec->leading_sign);
	printf("     field_width: %d\n", spec->field_width);
	printf("       precision: %d\n", spec->precision);
	printf("       specifier: %c\n", spec->specifier);
}
