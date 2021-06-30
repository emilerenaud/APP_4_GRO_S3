

graphicus: canevas.o couche.o vecteur.o forme.o rectangle.o carre.o cercle.o tests.o
	g++ -o graphicus  graphicus-01.cpp canevas.o couche.o vecteur.o forme.o rectangle.o carre.o cercle.o tests.o
	
canevas.o: canevas.cpp canevas.h
	g++ canevas.cpp -g -c
	
couche.o: couche.cpp couche.h
	g++ couche.cpp -g -c
	
vecteur.o: vecteur.cpp vecteur.h
	g++ vecteur.cpp -g -c
	
forme.o: forme.cpp forme.h
	g++ forme.cpp -g -c

rectangle.o: rectangle.cpp rectangle.h
	g++ rectangle.cpp -g -c
	
carre.o: carre.cpp carre.h
	g++ carre.cpp -g -c

cercle.o: cercle.cpp cercle.h
	g++ cercle.cpp -g -c
	
tests.o: tests.cpp tests.h
	g++ tests.cpp -g -c
	
clean:
	rm -f *.o
	
