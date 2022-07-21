Algoritmo Ejercicio_7
	definir pizza, precio, ingredientes, precio_total como entero
	Escribir "Bienvenido"
	Escribir "Ingrese el tamaño de la pizza que desea ordenar 1 = normal, 2 = super, 3 = mega"
	Leer pizza
	Escribir "Ingrese la cantidad de ingredientes extras que quiere agregar"
	Leer ingredientes
	Si pizza = 1 Entonces
		precio = 500
	SiNo
		Si pizza = 2 Entonces
			precio = 800
		SiNo
			precio = 1200
		FinSi
	FinSi
	precio_total = precio + 100 * ingredientes
	Escribir "El precio de la pizza solicitada es de ", precio_total, " pesos"
	Si precio_total<700 Entonces
		Escribir "El pago debe ser en efectivo"
	SiNo
		Si 700<precio_total y precio_total<1000 Entonces
			Escribir "El pago debe ser por celular de manera virtual"
		SiNo
			Escribir "El pago solo puede ser por tarjeta de credito"
		FinSi
	FinSi
FinAlgoritmo
