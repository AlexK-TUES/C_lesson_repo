make all:safeint.o safeadd.out safesubtract.out safemultiply.out safedivide.out safestroint.out table.out

safeint.o: safeint.c safeint.h
	gcc -c safeint.c safeint.h -o safeint.o

safeadd.out: safeadd.c safeint.o
	gcc safeadd.c safeint.o -o safeadd.out

safesubtract.out: safesubtract.c safeint.o
	gcc safesubtract.c safeint.o -o safesubtract.out

safemultiply.out: safemultiply.c safeint.o
	gcc safemultiply.c safeint.o -o safemultiply.out

safedivide.out: safedivide.c safeint.o
	gcc safedivide.c safeint.o -o safedivide.out

safestroint.out: safestroint.c safeint.o
	gcc safestroint.c safeint.o -o safestroint.out

table.out: table.c
	gcc table.c -o table.out

clean:
	rm -f *.out *.o