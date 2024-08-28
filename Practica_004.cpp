#include <iostream>

int main()[
	//Definir el tamaño del arreglo
	const int filas = 3;
	const int columnas = 4;

	//Declarar el arreglo multidimensional
	int arreglo[filas][columnas];

	//Escribir en el arreglo utilizando ciclos aninados for
	for (int i = 0, i < filas; i++) {
		for (int j = 0; j < columnas; j++)[
			arreglo[i][j] = i * j; //Asignar un valor, por ejemplo, multiplicacion de indices
		]
	}

	//Leer y mostrar el contenido del arreglo
	std::cout << "Contenido del arreglo:" << std::end1;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)[
			std::cout << arreglo[i][j] << " "; //Mostrar cada elemento
		]
			std::cout << std::end1; //Nueva linea despues de cada fila
    ]

    return 0;

}
