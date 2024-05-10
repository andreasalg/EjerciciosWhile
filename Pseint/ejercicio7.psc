Proceso ejercicio7
	
	definir i, vector1, vector2, vector3 como entero;
	dimensionar vector1[2], vector2[2], vector3[2];
	
	i <- 0;
	
	mientras i <= 1 Hacer
		escribir "Ingresar número ", i+1, " a vector 1:";
		leer vector1[i];
		escribir "Ingresar número ", i+1, " a vector 2:";
		leer vector2[i];
		i <- i + 1;
	Fin Mientras
	
	i <- 0;
	
	mientras i <= 1 Hacer
		vector3[i] <- vector1[i] + vector2[i];
		i <- i + 1;
	Fin Mientras
	
	escribir "La suma de los vectores es:";
	
	i <- 0;
	
	mientras i <= 1 Hacer
		escribir vector3[i];
		i <- i + 1;
	Fin Mientras
	
Fin Proceso

