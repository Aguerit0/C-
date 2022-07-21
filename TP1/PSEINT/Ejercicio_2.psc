Algoritmo Ejercicio_2
	definir numero_clave, numero_ingresado, i como numero
	definir new_game como entero
	Repetir
		Escribir "Bienvenidos"
		Escribir "Usuario 1 ingrese un numero entre el 1 y 10"
		i = 0
		Leer numero_clave
		Escribir "Usuario 2 tiene tres intentos para adivinar el numero"
		Repetir
			Leer numero_ingresado
			Si numero_clave = numero_ingresado Entonces
				Escribir "Felicidades adivino el numero bien ahi wey"
				i = 4
			SiNo
				Escribir "INCORRECTO"
				Si numero_clave<numero_ingresado Entonces
					Escribir "Intente un numero mas pequeño"
				SiNo
					Escribir "Intente un Numero mas grande"
				FinSi
				i = i + 1
			FinSi
		Hasta Que i>2
		Si i = 4 Entonces
			Escribir "Desea volver a jugar?  Si = 1 / No = 2"
		SiNo
			Escribir "Game Over Bitch"
			Escribir "Desea volver a ser humillado?  Si = 1 /  No = 2"
		FinSi
		Leer new_game
	Hasta Que new_game = 2
FinAlgoritmo
