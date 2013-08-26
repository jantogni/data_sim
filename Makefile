CPP				= simulation.cpp
HPP				= simulation.hpp
OUTPUT			= output

main:
	@echo "Compiling $(CPP) file"
	@g++ $(CPP) -o $(OUTPUT) -Wall
	@echo "DONE: $(OUTPUT) was created"

x:
	@./$(OUTPUT)

clean:
	@echo "Deleting: $(OUTPUT)"
	@rm -f $(OUTPUT)
