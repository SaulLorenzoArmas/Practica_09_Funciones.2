
CXX = g++
CXXFLAGS = -Wall -std=c++17
LDFLAGS =
######################################
files = *cc
######################################
all: programa

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o programa $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out programa
######################################
