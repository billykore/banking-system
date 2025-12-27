cmake_minimum_required(VERSION 4.0)
project(banking_system C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(banking_system
        src/account.c
        src/account.h
        src/database.c
        src/database.h
        main.c
        src/menu.c
        src/menu.h
        src/transaction.c
        src/transaction.h)
