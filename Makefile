zoo: zoo.cpp main.o animal.o monkey.o sloth.o otter.o seal.o
	g++ zoo.cpp main.o animal.o monkey.o sloth.o otter.o seal.o  -o zoo
animal.o: animal.cpp animal.hpp
	g++ -c animal.cpp
main.o: main.cpp
	g++ -c main.cpp
monkey.o: monkey.cpp monkey.hpp
	g++ -c monkey.cpp
sloth.o: sloth.cpp sloth.hpp
	g++ -c sloth.cpp
otter.o: otter.cpp otter.hpp
	g++ -c otter.cpp
seal.o: seal.cpp seal.hpp
	g++ -c seal.cpp
clean:
	rm -f *.o zoo
