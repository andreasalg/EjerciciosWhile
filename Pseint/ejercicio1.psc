Proceso ejercicio1
	
	Definir n, suma, i como Entero;
	Escribir "Hasta qu� n�mero desea sumar?";
	Leer n;
	
	Si n < 1 Entonces
		Escribir "El n�mero ingresado no es v�lido";
	Sino
		suma <- 0;
		i <- 1;
		Mientras i <= n Hacer
			suma <- suma + i;
			i <- i + 1;
		Fin Mientras
		Escribir "La suma de los n�meros de 1 hasta ", n, " es ", suma;
	Fin Si

	
FinProceso
