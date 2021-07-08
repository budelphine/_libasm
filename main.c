/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:24:08 by budelphi          #+#    #+#             */
/*   Updated: 2021/03/30 11:24:45 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void		ft_strdel(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

int			main(void)
{
	int		num0;
	int		num1;
	int		num2;
	int		num3;
	int		num4;
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	// TODO: START
	if (!0)
	{
		printf(ANSI_COLOR_GREEN "====================================" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_GREEN "===========> TEST START <===========" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_GREEN "====================================" ANSI_COLOR_RESET "\n");
		printf("\n");

		printf("test_function:\n");
		printf("ft_write\n");
		printf("ft_strlen\n");
		printf("ft_strcpy\n");
		printf("ft_strdup\n");
		printf("ft_strcmp\n");
		printf("\n");
	}

	// TODO: FT_WRITE
	if (1)
	{
		printf(ANSI_COLOR_CYAN "==========> FT_WRITE <==========" ANSI_COLOR_RESET "\n");
		printf("\n");
		
		printf(ANSI_COLOR_MAGENTA "ft_write (with strlen):" ANSI_COLOR_RESET "\n");
		ft_write(1, "Привет!", strlen("Привет!"));
		write(1, "\n", 1);
		ft_write(1, "Raclette", strlen("Raclette"));
		write(1, "\n", 1);
		ft_write(1, "1234567890", strlen("1234567890"));
		write(1, "\n|", 2);
		ft_write(1, NULL, -1);
		printf("| errno - %d\n\n", errno);

		printf(ANSI_COLOR_MAGENTA "ft_write (with strlen - 1):" ANSI_COLOR_RESET "\n");
		ft_write(1, "Привет!", (strlen("Привет!") - 1));
		write(1, "\n", 1);
		ft_write(1, "Raclette", (strlen("Raclette") - 1));
		write(1, "\n", 1);
		ft_write(1, "1234567890", (strlen("1234567890") - 1));
		printf("\n\n");
		
		printf(ANSI_COLOR_MAGENTA "ft_write (with len == 0):" ANSI_COLOR_RESET "\n");
		write(1, "|", 1);
		ft_write(1, "Привет!", 0);
		write(1, "|\n|", 3);
		ft_write(1, "Raclette", 0);
		write(1, "|\n|", 3);
		ft_write(1, "1234567890", 0);
		printf("|\n\n");

		// * WRITE
		printf(ANSI_COLOR_MAGENTA "write (with strlen):" ANSI_COLOR_RESET "\n");
		write(1, "Привет!", strlen("Привет!"));
		write(1, "\n", 1);
		write(1, "Raclette", strlen("Raclette"));
		write(1, "\n", 1);
		write(1, "1234567890", strlen("1234567890"));
		write(1, "\n|", 2);
		write(1, NULL, -1);
		printf("| errno - %d\n\n", errno);

		printf(ANSI_COLOR_MAGENTA "write (with strlen - 1):" ANSI_COLOR_RESET "\n");
		write(1, "Привет!", (strlen("Привет!") - 1));
		write(1, "\n", 1);
		write(1, "Raclette", (strlen("Raclette") - 1));
		write(1, "\n", 1);
		write(1, "1234567890", (strlen("1234567890") - 1));
		printf("\n\n");
		
		printf(ANSI_COLOR_MAGENTA "write (with len == 0):" ANSI_COLOR_RESET "\n");
		write(1, "|", 1);
		write(1, "Привет!", 0);
		write(1, "|\n|", 3);
		write(1, "Raclette", 0);
		write(1, "|\n|", 3);
		write(1, "1234567890", 0);
		printf("|\n\n");
	}

	// TODO: FT_STRLEN
	if (2)
	{
		printf(ANSI_COLOR_CYAN "==========> FT_STRLEN <==========" ANSI_COLOR_RESET "\n");
		printf("\n");

		num1 = ft_strlen("Привет!");
		num2 = ft_strlen("Raclette");
		num3 = ft_strlen("1234567890");
		num4 = ft_strlen("");

		printf(ANSI_COLOR_MAGENTA "ft_strlen:" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - %2d\n", num1);
		printf("|Raclette|   - %2d\n", num2);
		printf("|1234567890| - %2d\n", num3);
		printf("|NULL|       - %2d\n", num4);
		printf("\n");

		num1 = strlen("Привет!");
		num2 = strlen("Raclette"); 
		num3 = strlen("1234567890");
		num4 = strlen("");
		
		printf(ANSI_COLOR_MAGENTA "___strlen:" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - %2d\n", num1);
		printf("|Raclette|   - %2d\n", num2);
		printf("|1234567890| - %2d\n", num3);
		printf("|NULL|       - %2d\n", num4);
		printf("\n");
	}

	// TODO: FT_STRCPY
	if (3)
	{
		printf(ANSI_COLOR_CYAN "==========> FT_STRCPY <==========" ANSI_COLOR_RESET "\n");
		printf("\n");

		str1 = (char *)malloc(sizeof(char) * (strlen("Привет!") + 1));
		str2 = (char *)malloc(sizeof(char) * (strlen("Raclette") + 1));
		str3 = (char *)malloc(sizeof(char) * (strlen("1234567890") + 1));
		str4 = (char *)malloc(sizeof(char) * (strlen("") + 1));

		printf(ANSI_COLOR_MAGENTA "ft_strcpy (dest_str):" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - |%s|\n", ft_strcpy(str1, "Привет!"));
		printf("|Raclette|   - |%s|\n", ft_strcpy(str2, "Raclette"));
		printf("|1234567890| - |%s|\n", ft_strcpy(str3, "1234567890"));
		printf("|NULL|       - |%s|\n", ft_strcpy(str4, ""));
		printf("\n");

		ft_strdel(&str1);
		ft_strdel(&str2);
		ft_strdel(&str3);
		ft_strdel(&str4);

		str1 = (char *)malloc(sizeof(char) * (strlen("Привет!") + 1));
		str2 = (char *)malloc(sizeof(char) * (strlen("Raclette") + 1));
		str3 = (char *)malloc(sizeof(char) * (strlen("1234567890") + 1));
		str4 = (char *)malloc(sizeof(char) * (strlen("") + 1));

		printf(ANSI_COLOR_MAGENTA "___strcpy (dest_str):" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - |%s|\n", strcpy(str1, "Привет!"));
		printf("|Raclette|   - |%s|\n", strcpy(str2, "Raclette"));
		printf("|1234567890| - |%s|\n", strcpy(str3, "1234567890"));
		printf("|NULL|       - |%s|\n", strcpy(str4, ""));
		printf("\n");
	}

	// TODO: FT_STRDUP
	if (4)
	{
		printf(ANSI_COLOR_CYAN "==========> FT_STRDUP <==========" ANSI_COLOR_RESET "\n");
		printf("\n");

		str1 = ft_strdup("Привет!");
		str2 = ft_strdup("Raclette");
		str3 = ft_strdup("1234567890");
		str4 = ft_strdup("");

		printf(ANSI_COLOR_MAGENTA "ft_strdup (dest_str):" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - |%s|\n", str1);
		printf("|Raclette|   - |%s|\n", str2);
		printf("|1234567890| - |%s|\n", str3);
		printf("|NULL|       - |%s|\n", str4);
		printf("\n");

		ft_strdel(&str1);
		ft_strdel(&str2);
		ft_strdel(&str3);
		ft_strdel(&str4);

		str1 = strdup("Привет!");
		str2 = strdup("Raclette");
		str3 = strdup("1234567890");
		str4 = strdup("");

		printf(ANSI_COLOR_MAGENTA "___strdup (dest_str):" ANSI_COLOR_RESET "\n");
		printf("|Привет!|    - |%s|\n", str1);
		printf("|Raclette|   - |%s|\n", str2);
		printf("|1234567890| - |%s|\n", str3);
		printf("|NULL|       - |%s|\n", str4);
		printf("\n");
	}

	// TODO: FT_STRCMP
	if (5)
	{
		printf(ANSI_COLOR_CYAN "==========> FT_STRCMP <==========" ANSI_COLOR_RESET "\n");
		printf("\n");

		printf(ANSI_COLOR_MAGENTA "ft_strcmp:" ANSI_COLOR_RESET "\n");
		printf("|NULL|      && |NULL|       - %2d\n", ft_strcmp("", ""));
		printf("|Привет!|   && |Привет!|    - %2d\n", ft_strcmp("Привет!", "Привет!"));
		printf("|Raclette|  && |Raclett|    - %2d\n", ft_strcmp("Raclette", "Raclett"));
		printf("|234567890| && |1234567890| - %2d\n", ft_strcmp("234567890", "1234567890"));
		printf("|Saclette|  && |Raclett|    - %2d\n", ft_strcmp("Saclette", "Raclett"));
		printf("|Raclette|  && |Taclett|    - %2d\n", ft_strcmp("Raclette", "Taclett"));
		printf("\n");
		
		printf(ANSI_COLOR_MAGENTA "___strcmp:" ANSI_COLOR_RESET "\n");
		printf("|NULL|      && |NULL|       - %2d\n", strcmp("", ""));
		printf("|Привет!|   && |Привет!|    - %2d\n", strcmp("Привет!", "Привет!"));
		printf("|Raclette|  && |Raclett|    - %2d\n", strcmp("Raclette", "Raclett"));
		printf("|234567890| && |1234567890| - %2d\n", strcmp("234567890", "1234567890"));
		printf("|Saclette|  && |Raclett|    - %2d\n", strcmp("Saclette", "Raclett"));
		printf("|Raclette|  && |Taclett|    - %2d\n", strcmp("Raclette", "Taclett"));
		printf("\n");

	}

	// TODO: END
	if (!0)
	{
		printf("\n");
		printf(ANSI_COLOR_GREEN "====================================" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_GREEN "============> TEST OK <=============" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_GREEN "====================================" ANSI_COLOR_RESET "\n");
		printf("\n");
	}
	
	return (1);
}