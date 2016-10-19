CXX = g++ $(FLAGS)
FLAGS = -std=c++11 -Wall
LINKER = linker.cpp linker.h
LEXER = lexer.cpp lexer.h
PARSER = parser.cpp parser.h
COMPILER = compiler.cpp compiler.h
LOGGER = logger.cpp logger.h
MAIN = main.cpp

all: 
	$(CXX) $(LINKER) $(LEXER) $(PARSER) $(COMPILER) $(LOGGER) $(MAIN) -o compile

clean:
	rm -f *.o

realclean:
	rm -f *.o compile 
