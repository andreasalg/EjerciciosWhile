Proceso ejercicio9
	
	definir matriz1, matriz2, matriz3, i, j, k como entero;
	dimensionar matriz1[2,2], matriz2[2,2], matriz3[2,2];
	
	i <- 0;
	
	mientras i <= 1 Hacer
		j <- 0;
		mientras j <= 1 Hacer
			matriz3[i,j] <- 0;
			j <- j + 1;
		Fin Mientras
		i <- i + 1;
	Fin Mientras
	
	escribir "Matriz 1:";
	
	i <- 0;
	
	mientras i <= 1 Hacer
		j <- 0;
		mientras j <= 1 Hacer
			escribir "Ingrese número en la fila ", i+1, ", columna ", j+1, ":";
			leer matriz1[i,j];
			j <- j + 1;
		Fin Mientras
		i <- i + 1;
	Fin Mientras
	
	escribir "Matriz 2:";
	
	i <- 0;
	
	mientras i <= 1 Hacer
		j <- 0;
		mientras j <= 1 Hacer
			escribir "Ingrese número en la fila ", i+1, ", columna ", j+1, ":";
			leer matriz2[i,j];
			j <- j + 1;
		Fin Mientras
		i <- i + 1;
	Fin Mientras
	
	i <- 0;
	
	mientras i <= 1 Hacer
		j <- 0;
		mientras j <= 1 Hacer
			k <- 0;
			mientras k <= 1 Hacer
				matriz3[i,j] <- matriz3[i,j] + (matriz1[i,k] * matriz2[k,j]);
				k <- k + 1;
			Fin Mientras
			j <- j + 1;
		Fin Mientras
		i <- i + 1;
	Fin Mientras
	
	escribir "El producto de las matrices es:";
	
	i <- 0;
	
	mientras i <= 1 Hacer
		j <- 0;
		mientras j <= 1 Hacer
			escribir matriz3[i,j];
			j <- j + 1;
		Fin Mientras
		i <- i + 1;
	Fin Mientras
	
Fin Proceso
