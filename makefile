all: CPP

CPP: bin/NewCpp.o bin/Point.o bin/Line.o bin/Triangle.o

	g++ -o bin/CPP bin/NewCpp.o bin/Point.o bin/Line.o bin/Triangle.o

bin/NewCpp.o: New\ CPP/New\ CPP.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/NewCpp.o New\ CPP/New\ CPP.cpp

bin/Point.o: New\ CPP/Point.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Point.o New\ CPP/Point.cpp

bin/Line.o: New\ CPP/Line.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Line.o New\ CPP/Line.cpp

bin/Triangle.o: New\ CPP/Triangle.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Triangle.o New\ CPP/Triangle.cpp


clean:
	rm -f bin/*