Proceso ejercicio5
	
	Definir nota, sumaNotas, aprobados, reprobados Como Real;
    Definir promedio Como Real;
    Definir contador Como Entero;
	
    sumaNotas <- 0;
    aprobados <- 0;
    reprobados <- 0;
    contador <- 1;
	
    Mientras contador <= 8 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        sumaNotas <- sumaNotas + nota;
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
        contador <- contador + 1;
    Fin Mientras
	
    promedio <- sumaNotas / 8;
	
    Escribir "Cantidad de alumnos aprobados:", aprobados;
    Escribir "Cantidad de alumnos reprobados:", reprobados;
    Escribir "Promedio general del grupo:", promedio;
	
FinProceso

