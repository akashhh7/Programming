makefile 

SRCS = $(wildcard *.cpp)

TARGETS = $(SRCS:.cpp=)

CXX = g++
CXXFLAGS = -Wall -g

all: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)
