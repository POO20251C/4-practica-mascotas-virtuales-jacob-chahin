cmake_minimum_required(VERSION 3.10)
project(PixelPets)

set(CMAKE_CXX_STANDARD 17)

add_executable(PixelPets
        main.cpp
        Mascotas.cpp
        Habilidades.cpp
        Objetos.cpp
        Tienda.cpp
        Plataformas.cpp
        Usuarios.cpp
)
