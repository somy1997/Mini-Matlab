snazzle4: lex.yy.c snazzle3.tab.c snazzle3.tab.h
	g++ snazzle3.tab.c lex.yy.c -lfl -o snazzle4
lex.yy.c: snazzle4.l snazzle3.tab.h
	flex snazzle4.l
snazzle3.tab.c snazzle3.tab.h: snazzle3.y
	bison -d snazzle3.y
clean: 
	rm snazzle4 lex.yy.c snazzle3.tab.c snazzle3.tab.h
