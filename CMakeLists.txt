cmake_minimum_required(VERSION 3.28)
project(cpp_module_04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

add_executable(animal
        ex00/main.cpp
        ex00/Animal.cpp
        ex00/Animal.hpp
        ex00/Dog.cpp
        ex00/Dog.hpp
        ex00/Cat.cpp
        ex00/Cat.hpp
        ex00/Wrong.cpp
        ex00/Wrong.hpp
)

add_executable(brain
        ex01/main.cpp
        ex01/Animal.cpp
        ex01/Animal.hpp
        ex01/Dog.cpp
        ex01/Dog.hpp
        ex01/Cat.cpp
        ex01/Cat.hpp
        ex01/Wrong.cpp
        ex01/Wrong.hpp
        ex01/Brain.cpp
        ex01/Brain.hpp
)

add_executable(abstract
        ex02/main.cpp
        ex02/AAnimal.cpp
        ex02/AAnimal.hpp
        ex02/Dog.cpp
        ex02/Dog.hpp
        ex02/Cat.cpp
        ex02/Cat.hpp
        ex02/Wrong.cpp
        ex02/Wrong.hpp
        ex02/Brain.cpp
        ex02/Brain.hpp
)
