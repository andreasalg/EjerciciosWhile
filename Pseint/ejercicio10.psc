Proceso ejercicio10
	
    definir fila, columna, matriz, transpuesta como entero;
    dimensionar matriz[2,3], transpuesta[3,2];
	
    fila <- 0;
    mientras fila <= 1 Hacer
        columna <- 0;
        mientras columna <= 2 Hacer
            escribir "Ingresar número en la fila ", fila+1, ", columna ", columna+1, ":"; 
            leer matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
	
    fila <- 0;
    mientras fila <= 1 Hacer
        columna <- 0;
        mientras columna <= 2 Hacer
            transpuesta[columna, fila] <- matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
	
    Escribir "Matriz ingresada:"; 
	
    fila <- 0;
    mientras fila <= 1 Hacer
        columna <- 0;
        mientras columna <= 2 Hacer
            Escribir matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        Escribir ""; // Nueva línea para separar las filas de la matriz
        fila <- fila + 1;
    Fin Mientras;
	
    Escribir "La transposición de la matriz es igual a:  "; 
	
    fila <- 0;
    mientras fila <= 2 Hacer
        columna <- 0;
        mientras columna <= 1 Hacer
            Escribir transpuesta[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        Escribir ""; // Nueva línea para separar las filas de la matriz
        fila <- fila + 1;
    Fin Mientras;
	
	
Fin Proceso

