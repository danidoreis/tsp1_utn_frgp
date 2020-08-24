Algoritmo sin_titulo
	Escribir "ingrese el importe de la venta"
	Leer venta
	Escribir "ingrese el porcentaje de descuento"
	Leer desPor
	descuento = venta*(desPor/100)
	total = venta-descuento
	Escribir "total: ",total
FinAlgoritmo
