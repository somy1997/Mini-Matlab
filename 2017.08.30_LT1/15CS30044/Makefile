a.out: 15CS30044_lexer.c lex.yy.c
	gcc 15CS30044_lexer.c lex.yy.c -lfl -I.
lex.yy.c: 15CS30044.l
	flex 15CS30044.l
clean:
	rm a.out lex.yy.c
