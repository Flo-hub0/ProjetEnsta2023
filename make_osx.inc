# Configuration pour MSYS 2
# Peut être modifié à votre convenance...
CXXFLAGS = -std=c++17 -I/opt/local//include/
#CXX=g++-mp-10
CXX=clang++
ifdef DEBUG
CXXFLAGS += -g -O0 -Wall -fbounds-check -pedantic -fsanitize=address -openmp

else
CXXFLAGS += -O3 -march=native -Wall -openmp
endif

LIB= -L/opt/local/lib -lsfml-graphics -lsfml-window -lsfml-system

