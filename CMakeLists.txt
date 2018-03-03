cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)



set(SOURCE_FILES main.cpp Agence.cpp Agence.h Categorie.cpp Categorie.h Commercial.cpp Commercial.h Client.cpp Client.h Fournisseur.cpp Fournisseur.h Gamme.cpp Gamme.h TVA.cpp TVA.h Projet.cpp Projet.h Intervention.cpp Intervention.h)
add_executable(main ${SOURCE_FILES})