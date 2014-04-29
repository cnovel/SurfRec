SRC=$(wildcard *.cpp)
HEADER=$(wildcard *.h)
OBJ=$(SRC:%.cpp=%.o)
EXEC=MarchingCubes

target: $(EXEC)

$(OBJ): %.o : %.cpp $(HEADER)
	g++ -c $< -o $@

$(EXEC): $(OBJ)
	g++ $(OBJ) -o $@

#remove temporary files
clean:
	rm -rf *.o
