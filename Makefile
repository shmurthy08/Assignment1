# Assignment 1
# 	   src
#      include

EXECUTABLE := assignment1

SOURCES := *.cpp

INCLUDES := -I ../include
EXT := out
CC := g++

all:
	$(CC) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE).$(EXT)

realclean:
	find . -type f -name "*.o" -exec rm '{}' \;
	find . -type f -name "*.exe" -exec rm '{}' \;

# this line required by make - don't delete
