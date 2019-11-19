application:main.o edp paire
	c++ -std=c++17 -o application.bin main.o EnsembleDePaires.o Paire.o

main.o: main.cpp
	c++ -std=c++17 -c main.cpp

edp: srcEnsemble/EnsembleDePaires.cpp
	c++ -std=c++17 -c srcEnsemble/EnsembleDePaires.cpp

paire: srcPaire/Paire.cpp
	c++ -std=c++17 -c srcPaire/Paire.cpp
clean:
	rm -rf *.o
	rm -rf *.bin