lexer parser: ass3_15CS30044_lexer.c ass3_15CS30044_parser.c y.tab.c lex.yy.c
	gcc ass3_15CS30044_lexer.c lex.yy.c -lfl -o lexer
	gcc ass3_15CS30044_parser.c y.tab.c lex.yy.c -lfl -o parser
	
lex.yy.c: ass3_15CS30044.l y.tab.h
	flex ass3_15CS30044.l

y.tab.h y.tab.c: ass3_15CS30044.y
	bison -d ass3_15CS30044.y -o y.tab.c

lex: lexer
	./lexer < ass3_test_1.mm > ass3_test_1_tokens_15CS30044
	./lexer < ass3_test_2.mm > ass3_test_2_tokens_15CS30044

parse: parser
	./parser < ass3_test_1.mm > ass3_test_1_dr_15CS30044
	./parser < ass3_test_2.mm > ass3_test_2_dr_15CS30044

clean:
	rm lex.yy.c y.tab.c y.tab.h lexer parser
