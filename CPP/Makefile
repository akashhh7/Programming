BUILD_DIR := build

SRCS := $(shell find . -type f -name '*.cpp')
TARGETS := $(patsubst ./%.cpp,$(BUILD_DIR)/%,$(SRCS))

all: $(TARGETS)

$(BUILD_DIR)/%: %.cpp
	mkdir -p $(@D)
	g++ -Wall -g -o $@ $<

clean:
	rm -rf $(BUILD_DIR)
