makefile 

SRCS = $(wildcard *.cpp)
TARGETS = $(SRCS:.cpp=)

all: $(TARGETS)

%: %.cpp
	   g++ -Wall -g -o $@ $<


