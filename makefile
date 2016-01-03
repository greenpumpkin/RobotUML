SRC=.

INCL_DIR = $(SRC)
INCL = -I $(INCL_DIR)

CXX = g++
CXXFLAGS = -g -std=c++11
CXX_COMPILE = $(CXX) $(CXXFLAGS) $(INCL)

EXEC = ./Main

SRC_FILES = $(wildcard $(SRC)/*.cpp)
OBJ_FILES = $(patsubst $(SRC)/%.cpp, $(SRC)/%.o, $(SRC_FILES))



all: $(EXEC)


$(EXEC): $(OBJ_FILES)
		$(CXX_COMPILE) $^ -o $@
		
$(OBJ_FILES): $(SRC)/%.o : $(SRC)/%.cpp
		$(CXX_COMPILE) -c $< -o $@
		


clean:
		rm -rf *.o Main
