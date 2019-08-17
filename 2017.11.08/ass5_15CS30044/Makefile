minimatlab: y.tab.o lex.yy.o ass5_15CS30044_translator.o ass5_15CS30044_target_translator.o 
	g++ -g ass5_15CS30044_translator.o ass5_15CS30044_target_translator.o lex.yy.o y.tab.o -lfl -o minimatlab
	 ./minimatlab < ass5_15CS30044_test1.c > ass5_15CS30044_quads1.out
	 ./minimatlab < ass5_15CS30044_test2.c > ass5_15CS30044_quads2.out
	 ./minimatlab < ass5_15CS30044_test3.c > ass5_15CS30044_quads3.out
	 ./minimatlab < ass5_15CS30044_test4.c > ass5_15CS30044_quads4.out
	 ./minimatlab < ass5_15CS30044_test5.c > ass5_15CS30044_quads5.out
	 ./minimatlab < ass5_15CS30044_test6.c > ass5_15CS30044_quads6.out
	 # Above are the individual commands to generate the .s file to output.s then run make output to compile the library then do ./output to run
	
	# make run to execute all the test files at once
lex.yy.c: ass5_15CS30044.l
	flex ass5_15CS30044.l
y.tab.c: ass5_15CS30044.y
	yacc -dtv ass5_15CS30044.y
ass5_15CS30044_target_translator.o: ass5_15CS30044_target_translator.cxx
	g++ -g -c ass5_15CS30044_target_translator.cxx
ass5_15CS30044_translator.o: ass5_15CS30044_translator.cxx
	g++ -g -c ass5_15CS30044_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
libass2_15CS30044.a: ass2_15CS30044.o
	ar -rcs libass2_15CS30044.a ass2_15CS30044.o

ass2_15CS30044.o: ass2_15CS30044.c myl.h
	gcc -Wall  -c ass2_15CS30044.c
clean:
	rm test1 test2 test3 test4 test5 test6 lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass5_15CS30044_translator.o ass5_15CS30044_target_translator.o ass5_15CS30044_test1.o ass5_15CS30044_test2.o ass5_15CS30044_test3.o ass5_15CS30044_test4.o ass5_15CS30044_test5.o ass5_15CS30044_test6.o libass2_15CS30044.a ass2_15CS30044.o output.o


test1: ass5_15CS30044_test1.o libass2_15CS30044.a
	gcc -g ass5_15CS30044_test1.o -o test1 -L. -lass2_15CS30044
ass5_15CS30044_test1.o: ass5_15CS30044_test1.s myl.h
	gcc -g -Wall  -c ass5_15CS30044_test1.s -o ass5_15CS30044_test1.o

test2: ass5_15CS30044_test2.o libass2_15CS30044.a
	gcc -g  ass5_15CS30044_test2.o -o test2 -L. -lass2_15CS30044
ass5_15CS30044_test2.o: ass5_15CS30044_test2.s myl.h
	gcc -g -Wall -c ass5_15CS30044_test2.s

test3: ass5_15CS30044_test3.o libass2_15CS30044.a
	gcc -g  ass5_15CS30044_test3.o -o test3 -L. -lass2_15CS30044
ass5_15CS30044_test3.o: ass5_15CS30044_test3.s myl.h
	gcc -g -Wall  -c ass5_15CS30044_test3.s

test4: ass5_15CS30044_test4.o libass2_15CS30044.a
	gcc -g  ass5_15CS30044_test4.o -o test4 -L. -lass2_15CS30044
ass5_15CS30044_test4.o: ass5_15CS30044_test4.s myl.h
	gcc -g -Wall  -c ass5_15CS30044_test4.s

test5: ass5_15CS30044_test5.o libass2_15CS30044.a
	gcc -g  ass5_15CS30044_test5.o -o test5 -L. -lass2_15CS30044
ass5_15CS30044_test5.o: ass5_15CS30044_test5.s myl.h
	gcc -g -Wall -c ass5_15CS30044_test5.s

test6: ass5_15CS30044_test6.o libass2_15CS30044.a
	gcc -g  ass5_15CS30044_test6.o -o test6 -L. -lass2_15CS30044
ass5_15CS30044_test6.o: ass5_15CS30044_test6.s myl.h
	gcc -g -Wall -c ass5_15CS30044_test6.s

#output: output.o
output: output.o libass2_15CS30044.a
	gcc -g  output.o -o output -L. -lass2_15CS30044
output.o: output.s myl.h
	gcc -g -Wall -c output.s

run: 
		
	./minimatlab < ass5_15CS30044_test1.c > ass5_15CS30044_quads1.out
  	
	mv output.s ass5_15CS30044_test1.s
	
	make test1
	
	./minimatlab < ass5_15CS30044_test2.c > ass5_15CS30044_quads2.out

	mv output.s ass5_15CS30044_test2.s
	
	make test2

	./minimatlab < ass5_15CS30044_test3.c > ass5_15CS30044_quads3.out

	mv output.s ass5_15CS30044_test3.s

	make test3

	./minimatlab < ass5_15CS30044_test4.c > ass5_15CS30044_quads4.out
	
	mv output.s ass5_15CS30044_test4.s

	make test4

	./minimatlab < ass5_15CS30044_test5.c > ass5_15CS30044_quads5.out
	
	mv output.s ass5_15CS30044_test5.s

	make test5
	
	./minimatlab < ass5_15CS30044_test6.c > ass5_15CS30044_quads6.out
	
	mv output.s ass5_15CS30044_test6.s

	make test6
	#Below are the individual commands for compiling each test file
	#./test1
	#./test2
	#./test3
	#./test4
	#./test5
	#./test6

