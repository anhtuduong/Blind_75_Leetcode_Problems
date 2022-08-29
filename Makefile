SOURCES :=$(wildcard *.cpp)
EXECUTABLE :=$(SOURCES:.cpp=)
 
all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	g++ $< -o $@

clean:
	rm -rf $(EXECUTABLE)