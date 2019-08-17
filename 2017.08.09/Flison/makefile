
parser.out : parser.c lex.yy.c grammar.tab.c
	gcc ./parser.c -o ./parser.out

lexer.out : lexer.c lex.yy.c
	gcc ./lexer.c -o ./lexer.out

lex.yy.c : tokenizer.l grammar.tab.c
	flex ./tokenizer.l

grammar.tab.c : grammar.y
	bison ./grammar.y
