Algoritmo sin_titulo
	Escribir "ingrese el primer lado: "
	Leer L1
	Escribir "ingrese el segundo lado: "
	Leer L2
	Escribir "ingrese el tercer lado: "
	Leer L3
	Si L1==L2 && L2 == L3 Entonces
		Escribir "es equilatero"
	SiNo
		Si L1==L2 || L2 == L3 || L1==L3 Entonces
			Escribir "es isosceles"
		SiNo
			Escribir "es escaleno"
		FinSi
	FinSi
FinAlgoritmo
