Algoritmo Ejercicio_4
	definir numero_ingresado, i, t como entero
	Escribir "Ingrese un numero mayor a 1"
	Leer numero_ingresado
	t = numero_ingresado
	Repetir
		t = t-1
		i = numero_ingresado
		i = i - t
		Mientras i>0 Hacer
			i = i-t
		FinMientras
	Hasta Que i=0
	Si t = 1 Entonces
		Escribir "El numero es primo"
	SiNo
		Escribir "El numero NO es primo"
	FinSi
FinAlgoritmo
