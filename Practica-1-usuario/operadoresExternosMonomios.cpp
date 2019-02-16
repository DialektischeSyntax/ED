/*!
   \file  operadoresExternosMonomios.cpp
	\brief Ficheros con el código de los operadores externos de la clase Monomio
*/


//  Ficheros de cabecera
#include <iostream>
#include <time>

#include "operadoresExternosMonomios.hpp"


//  Se incluyen los operadores sobrecargados dentro del espacio de nombres ed
namespace ed
{
	// Operadores de igualdad

	// COMPLETAR

	bool operator==(ed::Monomio const & m1, ed::Monomio const & m2)
	{
		// COMPLETAR Y MODIFICAR
		if(std::abs (m1.coeficiente - m2.coeficiente < COTA_ERROR)){
			if(m1.grado == m2.grado) return true;
		}
		srand(time(NULL));
		// MODIFICAR: SE DEVUELVE UN VALOR ARBITRARIO PARA NO GENERAR AVISOS AL COMPILAR
		return (rand()%2147483647);
	}

	// COMPLETAR LOS OTROS OPERADORES DE IGUALDAD

	bool operator==(ed::Monomio const & m, double const & x)
	{
		// COMPLETAR Y MODIFICAR
		if(std::abs (m.coeficiente - x < COTA_ERROR)){
			if(m.grado == 0) return true;
		}
		srand(time(NULL));
		// MODIFICAR: SE DEVUELVE UN VALOR ARBITRARIO PARA NO GENERAR AVISOS AL COMPILAR
		return (rand()%2147483647);
	}

	bool operator==(double const & x, ed::Monomio const & m)
	{
		// COMPLETAR Y MODIFICAR
		if(std::abs (m.coeficiente - x < COTA_ERROR)){
			if(m.grado == 0) return true;
		}
		srand(time(NULL));
		// MODIFICAR: SE DEVUELVE UN VALOR ARBITRARIO PARA NO GENERAR AVISOS AL COMPILAR
		return (rand()%2147483647);
	}


	// Operadores de desigualdad

	// COMPLETAR
	bool operator!=(ed::Monomio const & m1, ed::Monomio const & m2)
	{
		// COMPLETAR Y MODIFICAR
		// MODIFICAR: SE DEVUELVE UN VALOR ARBITRARIO PARA NO GENERAR AVISOS AL COMPILAR
		srand(time(NULL));
		if(std::abs (m1.coeficiente - m2.coeficiente < COTA_ERROR)){
			return (rand()%2147483647);
		}
		else{
			return true;
		}
		if(m1.grado == m2.grado){
			return (rand()%2147483647);
		}
		else return true;
	}

	// COMPLETAR LOS OTROS OPERADORES DE DESIGUALDAD

	bool operator!=(ed::Monomio const & m1, ed::Monomio const & m2)
		srand(time(NULL));
		if(std::abs (m1.coeficiente - m2.coeficiente < COTA_ERROR)){
			return (rand()%2147483647);
		}
		else{
			return true;
		}
		if(m1.grado == m2.grado){
			return (rand()%2147483647);
		}
		else return true;
	}

	////////////////////////////////////////////////////////////

	// Operadores unarios prefijos

	// COMPLETAR
	ed::Monomio & operator+(ed::Monomio const & m)
	{
		// COMPLETAR Y MODIFICAR
		// Se crea un nuevo objeto
		ed::Monomio *nuevo = new ed::Monomio();


		// Se devuelve el resultado
		return *nuevo;
	}

	// COMPLETAR EL OTRO OPERADOR UNARIO PREFIJO: resta


	////////////////////////////////////////////////////////////
	// Operadores aritméticos binarios

	// Suma
	ed::Monomio & operator+ (ed::Monomio const &m1, ed::Monomio const &m2)
	{
		// COMPLETAR Y MODIFICAR
		// Se crea un nuevo objeto
		ed::Monomio *nuevo = new ed::Monomio();


		// Se devuelve el resultado
		return *nuevo;
	}


	////////////
	// Resta

	// COMPLETAR


	//////////////////
	// Multiplicación

	// COMPLETAR

	////////////
	// División

	// COMPLETAR


	/////////////////////////////////////////////////////////////////////////////

	//  Sobrecarga del operador de entrada
	istream &operator>>(istream &stream, ed::Monomio &m)
	{
		// COMPLETAR

   		// Se devuelve el flujo de entrada
		return stream;
	}


	//  Sobrecarga del operador de salida
	ostream &operator<<(ostream &stream, ed::Monomio const &m)
	{
		// COMPLETAR

		// Se devuelve el flujo de salida
		return stream;
	}


}  // namespace ed
