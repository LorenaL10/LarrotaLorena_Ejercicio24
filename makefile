metropolis.png : metropolis.dat metropolis.py
	python metropolis.py

metropolis.dat : walk.x
	./metropolis.x > metropolis.dat

metropolis.x : metropolis.cpp
	c++ metropolis.cpp -o metropolis.x