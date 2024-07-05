cmake_minimum_required(VERSION 3.28)
project(cpp_module_04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

add_executable(virtual0
        ex00/main.cpp
        ex00/Animal.cpp
        ex00/Animal.hpp
        ex00/Dog.cpp
        ex00/Dog.hpp
        ex00/Cat.cpp
        ex00/Cat.hpp
        ex00/WrongAnimal.cpp
        ex00/WrongAnimal.hpp
        ex00/WrongCat.cpp
        ex00/WrongCat.hpp)
