cmake_minimum_required(VERSION 3.14)
project(ft_printf C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(minilibft)

add_executable(ft_printf
		include/ft_printf.h
		minilibft/ft_bzero.c
		minilibft/ft_strlen.c
		minilibft/ft_strlenu.c
		minilibft/ft_strlenuk.c
		minilibft/minilibft.h
		sources/flagidiux.c
		sources/float.c
		sources/floatlong.c
		sources/floatob.c
		sources/ft_char.c
		sources/ft_printstr.c
		sources/ft_printx.c
		sources/over.c
		sources/parseng.c
		sources/printf.c
		sources/printnbr_logik.c
		sources/printtnbr.c
		sources/spec.c
		sources/unicod.c
		sources/unicod_str.c
		main.c)
