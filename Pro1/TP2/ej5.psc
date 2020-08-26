Algoritmo sin_titulo
	Escribir "ingrese el importe: "
	Leer importe
	Si importe < 100  Entonces
		descuento = importe * 0.95
		Escribir "total con descuento: $ ",descuento
	SiNo
		Si importe >= 100 && importe <= 500 Entonces
			descuento = importe*0.90
			Escribir "total con descuento: $ ",descuento
		SiNo
			Si importe > 500 Entonces
				descuento = importe*0.85
				Escribir "total con descuento: $ ",descuento
			FinSi
		FinSi
	FinSi
FinAlgoritmo
