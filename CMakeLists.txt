cmake_minimum_required(VERSION 3.26)
project(monty_main C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(monty_main
        tests/00.m
        tests/001.m
        tests/00j.m
        tests/01.m
        tests/05.m
        tests/06.m
        tests/12.m
        tests/13.m
        addition.c
        add_node.c
        division.c
        executer.c
        free_stack.c
        main.c
        modul.c
        monty.h
        multiply.c
        nor.c
        pall.c
        charprint.c
        pint.c
        pop.c
        strprint.c
        push.c
        queue.c
        rotate_left.c
        rotate_right.c
        stack.c
        subtraction.c
        exchange.c)
