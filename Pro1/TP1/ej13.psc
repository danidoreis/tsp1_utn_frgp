Algoritmo sin_titulo
	Escribir "ingrese el importe que desea retirar: "
	Leer importe
	mil = importe/1000
	resto = importe%1000
	quini = resto/500
	resto = resto%500
	dos = resto/200
	resto = resto%200
	cien = resto/100
	Escribir "Cantidad de billetes de 1000 es: ",mil " cantidad de billetes de 500 es: ",quini
	Escribir "cantidad de billetes de 200 es: ",dos "cantidad de billetes de 100 es: ",cien
FinAlgoritmo
