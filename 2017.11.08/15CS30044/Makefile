a.out: y.tab.o lex.yy.o 15CS30044_translator.o 
	g++ -g 15CS30044_translator.o lex.yy.o y.tab.o -lfl
	#make run to generate the output
	#make clean to clear all the system generated files
lex.yy.c: 15CS30044.l
	flex 15CS30044.l
y.tab.c: 15CS30044.y
	bison -dtv 15CS30044.y -o y.tab.c
15CS30044_translator.o: 15CS30044_translator.cxx
	g++ -g -c 15CS30044_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o 15CS30044_translator.o
run: 
	./a.out < lab_test_1.mm > 15CS30044_quads_1.out
	./a.out < lab_test_2.mm > 15CS30044_quads_2.out
