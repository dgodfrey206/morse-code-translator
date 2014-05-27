CXX = g++

all: morse.exe

morse.exe: Parser.o algorithm.o morsebuf.o
	${CXX} -o morse $< $(word 2,$^) $(word 3,$^)

Parser.o algorithm.o morsebuf.o: Parser.cpp alorithm.cpp morsebuf.cpp
	${CXX} -c $< \
	${CXX} -c $(word 2,$^) \
	${CXX} -c $(word 3,$^)

clean:
	rm Parser.o algorithm.o morsebuf.o morse.exe
