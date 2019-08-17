a.out: mainass2_15CS30044.o libass2_15CS30044.a
	cc mainass2_15CS30044.o -L. -lass2_15CS30044
mainass2_15CS30044.o: mainass2_15CS30044.c myl.h
	cc -Wall -c mainass2_15CS30044.c
libass2_15CS30044.a: ass2_15CS30044.o
	ar -rcs libass2_15CS30044.a ass2_15CS30044.o
ass2_15CS30044.o: ass2_15CS30044.c myl.h
	cc -Wall -c ass2_15CS30044.c
clean:
	rm a.out mainass2_15CS30044.o libass2_15CS30044.a ass2_15CS30044.o
