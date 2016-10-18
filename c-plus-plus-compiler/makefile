CXX = g++ $(FLAGS)
FLAGS = -std=c++11 -Wall
LEXER = lexer.cpp lexer.h
PARSER = parser.cpp parser.h
COMPILER = compiler.cpp compiler.h
MAIN = main.cpp

all: 
	$(CXX) $(LEXER) $(PARSER) $(COMPILER) $(MAIN) -o compile

clean:
	rm -f *.o

realclean:
	rm -f *.o compile 
