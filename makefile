grafica.png:datos.txt
	python graf.py
datos.txt:
	c++ ej23.cpp
	./a.out>datos.txt

