all: morse.exe

morse.exe: Parser.o algorithm.o morsebuf.o
	g++ -o morse.exe $< $(word 2,$^) $(word 3,$^)

Parser.o algorithm.o morsebuf.o: Parser.cpp alorithm.cpp morsebuf.cpp
	g++ -c $< \
	g++ -c $(word 2,$^) \
	g++ -c $(word 3,$^)

clean:
	rm Parser.o algorithm.o morsebuf.o morse.exe