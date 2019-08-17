a.out: y.tab.o lex.yy.o ass4_15CS30044_translator.o 
	g++ -g ass4_15CS30044_translator.o lex.yy.o y.tab.o -lfl
	#make run to generate the output
	#make clean to clear all the system generated files
lex.yy.c: ass4_15CS30044.l
	flex ass4_15CS30044.l
y.tab.c: ass4_15CS30044.y
	yacc -dtv ass4_15CS30044.y
ass4_15CS30044_translator.o: ass4_15CS30044_translator.cxx
	g++ -g -c ass4_15CS30044_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass4_15CS30044_translator.o a.out
run: 
	./a.out < ass4_15CS30044_test1.mm > ass4_15CS30044_quads1.out
	./a.out < ass4_15CS30044_test2.mm > ass4_15CS30044_quads2.out
	./a.out < ass4_15CS30044_test3.mm > ass4_15CS30044_quads3.out
	./a.out < test.mm > test.out
