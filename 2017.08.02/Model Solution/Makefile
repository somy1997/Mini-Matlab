a.out: test.o libass2_15CS30043.a
		cc test.o -L. -lass2_15CS30043

test.o: test.c myl.h
		cc -Wall -c test.c

libass2_15CS30043.a: ass2_15CS30043.o
		ar -rcs libass2_15CS30043.a ass2_15CS30043.o
	
ass2_15CS30043.o: ass2_15CS30043.c myl.h
		cc -Wall -c ass2_15CS30043.c

clean:
		rm a.out test.o libass2_15CS30043.a ass2_15CS30043.o
