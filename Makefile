objects = repl.o meta_command.o statement.o

db: $(objects)
	gcc -o db $(objects)

clean:
	rm -f db *.o
