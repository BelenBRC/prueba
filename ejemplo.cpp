#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	// 1. Introducimos las variables a utilizar
	float x0=0.0, x1=0.0, x2=0.0 ;
	float y1=0.0, y2=0.0 ;
	float pi0=0.0, pi1=0.0, pi2=0.0 ;
	
	// 2. Bienvenida al programa
	cout << "\nBienvenid@ al programa de cálculo de Pi basada en Borwein" << endl;
	
	// 3. Realizamos los cálculos
	
	// Cálculos para pi_0 
	// Se usa sqrt() para raíz cuadrada
	pi0 = 2.0 + sqrt (2.0) ;
	
	// Cálculos para pi_1
	x0 = sqrt (2.0) ;
	x1 = (1.0/2.0) * ( sqrt(x0) + ( 1.0/sqrt(x0) ) ) ;
	y1 = pow (2.0,(1.0/4.0)) ;
	pi1 = pi0 * ( (x1+1.0) / (y1+1.0) ) ;
	
	// Cálculos para pi_2
	x2 = (1.0/2.0) * ( sqrt(x1) + ( 1.0/sqrt(x1) ) ) ;
	y2 = ( (y1*sqrt(x1)) + (1.0/sqrt(x1)) ) / (y1+1.0) ;
	pi2 = pi1 * ( (x2+1.0) / (y2+1.0) ) ;
	
	
	// 4. Mostramos las salidas al usuario
	
	cout << "\nLos resultados son los siguientes: " << endl;
	cout << "\n\tPi0 = " << pi0 << endl ;
	cout << "\tPi1 = " << pi1 << endl ;
	cout << "\tPi2 = " << pi2 << endl ;
	
	// 5. Mensaje de despedida
	cout << "\n\nHasta la próxima." << endl;
	
}
