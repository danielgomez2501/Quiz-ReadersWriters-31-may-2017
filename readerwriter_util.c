#include "readerwriter.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
Esta funcion recibe un numero real, el cual representa un valor porcentual.
Este valor porcentual indica la posibilidad con la que llegue un lector o un
escritor. Entre mas alto el valor, es mayor la probabilidad que aparezca un
lector.
*/
int readerorwriter(float x) {
	int value = (int)(x * 100);
	int randomvalue = rand()%100;
	if (randomvalue < value) 
		return READER;
	else
		return WRITER;
}

