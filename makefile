all: horseRace

horseRace: main.o horse.o race.o
	g++ main.o horse.o race.o -o horseRace

main.o: main.cpp race.h
	g++ -c main.cpp

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

race.o: race.cpp race.h horse.h
	g++ -c race.cpp

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

clean:
	rm -f *.o horseRace
