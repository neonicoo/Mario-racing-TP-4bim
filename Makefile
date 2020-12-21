objects = main.o Character.o Mario.o Yoshi.o

main: $(objects)
	g++ -o main $(objects)

main.o: main.cpp 
	g++ -c main.cpp -o main.o

Character.o: Character.cpp Character.h
	g++ -c Character.cpp -o Character.o

Mario.o: Mario.cpp Mario.h
	g++ -c Mario.cpp -o Mario.o

Yoshi.o: Yoshi.cpp Yoshi.h
	g++ -c Yoshi.cpp -o Yoshi.o

clean:
	rm $(objects)