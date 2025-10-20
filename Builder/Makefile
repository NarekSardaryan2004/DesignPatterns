CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
SRC = main.cpp house.cpp woodenhousebuilder.cpp stonehousebuilder.cpp civilengineer.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = builder

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)
