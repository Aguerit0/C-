Algoritmo Ejercicio_5
	definir electores, candidato_A, candidato_B, candidato_C, correcto, ganador como ENTERO
	correcto=1
	Escribir "Hay un total de 160 electores y 3 candidatos"
	electores = 160
	Repetir
		Escribir "Cuantos Electores votaron por el candidato A?"
		Leer candidato_A
		Si candidato_A>0 y candidato_A<=electores Entonces
			Escribir "SE INGRESARON ",candidato_A," ELECTORES PARA EL CANDIDATO A"
			electores = electores-candidato_A
			correcto=1
		SiNo
			Escribir "Numero ingresado incorrecto, ingrese otro numero"
			correcto=0
		Fin Si
	Hasta Que correcto=1
	
	correcto=0
	
	Si electores>0 Entonces
		Repetir
			Escribir "Cuantos Electores votaron por el candidato B?"
			Leer candidato_B
			Si candidato_B>0 y candidato_B<electores Entonces
				Escribir "SE INGRESARON ",candidato_B," ELECTORES PARA EL CANDIDATO B"
				electores = electores-candidato_B
				correcto=1
			SiNo
				Escribir "Numero ingresado incorrecto, ingrese otro numero"
				correcto=0
			Fin Si
		Hasta Que correcto=1
	SiNo
		Escribir "NO SE INGRESO NINGUN VOTO PARA EL CANDIDATO B"
	Fin Si
	
	correcto=0
	Si electores>0 Entonces
		Repetir
			Escribir "Cuantos Electores votaron por el candidato C?"
			Leer candidato_C
			Si candidato_C>0 y candidato_C<electores Entonces
				Escribir "SE INGRESARON ",candidato_C," ELECTORES PARA EL CANDIDATO C"
				electores = electores-candidato_C
				correcto=1
			SiNo
				Escribir "Numero ingresado incorrecto, ingrese otro numero"
				correcto=0
			Fin Si
		Hasta Que correcto=1
	SiNo
		Escribir "NO SE INGRESO NINGUN VOTO PARA EL CANDIDATO C"
		
	Fin Si
	
	
	Si candidato_A>candidato_B y candidato_A>candidato_C Entonces
		ganador=candidato_A
		Escribir "EL GANADOR ES EL CANDIDATO A CON ",ganador," VOTOS"
	SiNo
		Si candidato_B>candidato_A y candidato_B>candidato_C Entonces
			ganador=candidato_B
			Escribir "EL GANADOR ES EL CANDIDATO B CON ",ganador," VOTOS"
		SiNo
			Si candidato_C>candidato_A y candidato_C>candidato_B Entonces
				ganador=candidato_C
				Escribir "EL GANADOR ES EL CANDIDATO C CON ",ganador," VOTOS"
			SiNo
				Si candidato_A=candidato_B Entonces
					Escribir "EXISTE UN EMPATE ENTRE LOS CANDIDATOS A Y B"
				SiNo
					Si candidato_B=candidato_C Entonces
						Escribir "EXISTE UN EMPATE ENTRE LOS CANDIDATOS B Y C"
					SiNo
						Si candidato_A=candidato_C Entonces
							Escribir "EXISTE UN EMPATE ENTRE LOS CANDIDATOS A Y C"
						SiNo
							Escribir "EXISTE UN EMPATE ENTRE LOS CANDIDATOS A, B Y C"
						Fin Si
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
	
	Escribir "CANTIDAD DE VOTOS EN BLANCO: ", electores
	
	
	
	
FinAlgoritmo
