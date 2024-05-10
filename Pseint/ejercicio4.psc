Proceso ejercicio4
	
	Definir nota, sumaNotas Como Real;
    Definir promedio Como Real;
    Definir contador Como Entero;
	
    sumaNotas <- 0;
    contador <- 1;
	
    Mientras contador <= 10 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        sumaNotas <- sumaNotas + nota;
        contador <- contador + 1;
    Fin Mientras
	
    promedio <- sumaNotas / 10;
	
    Escribir "El promedio general de la sección es:", promedio;
	
FinProceso
