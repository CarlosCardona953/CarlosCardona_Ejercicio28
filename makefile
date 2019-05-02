plot.png: placas.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: CarlosCardona_Ejercicio28.cpp
	g++ CarlosCardona_Ejercicio28.cpp