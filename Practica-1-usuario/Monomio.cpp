/*!
   \file  Monomio.cpp
   \brief Fichero que contiene el código de las funciones de la clase Monomio
*/


//  Ficheros de cabecera
#include <iostream>
#include <cmath>

#include "Monomio.hpp"

// Operadores de asignación

// COMPLETAR

ed::Monomio & ed::Monomio::operator=(ed::Monomio const &m)
{
	// COMPLETAR
		bool hacktoberfest = true;
		this->setCoeficiente(m.getCoeficiente());
		this->setGrado(m.getGrado());
		#ifndef NDEBUG
			assert(std::abs (this->getCoeficiente() - m.getCoeficiente()) < COTA_ERROR);
			assert(this->getGrado() == m.getGrado());
		#endif
	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator=(double const &x)
{
	// COMPLETAR
	this -> setCoeficiente(x);
	this -> setGrado(0);
	#ifndef NDEBUG
		assert(std::abs (this->getCoeficiente() - x) < COTA_ERROR);
		assert(this->getGrado() == 0);
	#endif
	// Se devuelve el objeto actual
	return *this;
}



//////////////////////////////////////////////////////////////

// Operadores aritméticos y asignación

// COMPLETAR

ed::Monomio & ed::Monomio::operator+=(ed::Monomio const &m)
{
	// COMPLETAR
	#ifndef NDEBUG
		assert(this->getGrado() == m.getGrado());
	#endif
	int g = getGrado();
	double aux = getCoeficiente();
	this->setCoeficiente(this->getCoeficiente() + m.getCoeficiente());
	#ifndef NDEBUG
		assert(std::abs (((this ->getCoeficiente()) - (aux + m.getCoeficiente())) < COTA_ERROR);
		assert(this->getGrado() == g);
	#endif
	// Se devuelve el objeto actual
	return *this;
}



// COMPLETAR EL RESTO DE OPERADORES

ed::Monomio & ed::Monomio::operator-=(ed::Monomio const &m)
{
	// COMPLETAR
	#ifndef NDEBUG
		assert(this->getGrado() == m.getGrado());
	#endif
	double aux = getCoeficiente();
	this->setCoeficiente(this->getCoeficiente() - m.getCoeficiente());
	#ifndef NDEBUG
		assert(std::abs ((this ->getCoeficiente()) - (aux - m.getCoeficiente())) < COTA_ERROR);
	#endif
	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator*=(ed::Monomio const &m)
{
	// COMPLETAR
	double aux = getCoeficiente();
	int g = getGrado();
	this->setGrado(this->getGrado() + m.getGrado());
	this->setCoeficiente(this->getCoeficiente() * m.getCoeficiente());
	#ifndef NDEBUG
		assert(std::abs ((this ->getCoeficiente()) - (aux * m.getCoeficiente())) < COTA_ERROR);
		assert(g == (this->getGrado() + m.getGrado()));
	#endif
	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator/=(ed::Monomio const &m)
{
	// COMPLETAR
	#ifndef NDEBUG
		assert(this->getGrado() >= m.getGrado());
		assert(m.getCoeficiente() != 0.0);
	#endif
	double aux = getCoeficiente();
	int g = getGrado();
	this->setGrado(this->getGrado() - m.getGrado());
	this->setCoeficiente(this->getCoeficiente() / m.getCoeficiente());
	#ifndef NDEBUG
		assert(std::abs ((this ->getCoeficiente()) - (aux / m.getCoeficiente())) < COTA_ERROR);
		assert(g == (this->getGrado() - m.getGrado()));
	#endif
	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator*=(ed::double const &x)
{
	// COMPLETAR
	int g = getGrado();
	double aux = getCoeficiente();
	this->setCoeficiente(this->getCoeficiente() * x);
	#ifndef NDEBUG
		assert(g == (this->getGrado()));
		assert(std::abs (this -> getCoeficiente() - (aux * x)) < COTA_ERROR);
	#endif
	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator/=(ed::double const &x)
{
	// COMPLETAR
	#ifndef NDEBUG
		assert(x != 0.0);
	#endif
	double aux = getCoeficiente();
	int g = getGrado();
	this->setCoeficiente(this->getCoeficiente() / x);
	#ifndef NDEBUG
		assert(std::abs ((this ->getCoeficiente()) - (aux / x)) < COTA_ERROR);
		assert(g == (this->getGrado()));
	#endif
	// Se devuelve el objeto actual
	return *this;
}

///////////////////////////////////////////////////////////////////////

// Funciones lectura y escritura de la clase Monomio

ed::Monomio & ed::Monomio leerMonomio(){
	double coeficiente;
	int grado;
	cout<<"Introduzca el coeficiente del monomio"<<endl;
	cin>>coeficiente;
	cout<<"Introduzca el grado del monomio"<<endl;
	cin>>grado;
	string cad = (string.valueOf(coeficiente) + 'X' + string.valueOf(grado));
	#ifndef NDEBUG
		assert(grado>= 0);
	#endif
	return *cad;
}

ed::Monomio void escribirMonomio()const{
	string &cad = leerMonomio();
	int l = (strlen(cad) - 1);
	bool encontrado = 0;
	string coeficiente="";
	int i = 0;
	while(!encontrado){
		if(cad[i+1] == 'X'){
			encontrado = 1;
		}
		coeficiente = coeficiente + cad[i];
		i++;
	}
	double num = atof(coeficiente);
	if((cad[0] == '1') & (cad[1] == '.')){
		cout<<"X^"<<cad[l]<<endl;
	}
	if((cad[0] == "-1") & (cad[1] == '.')){
		cout<<"-X^"<<cad[l]<<endl;
	}
	if(cad[l] == 0){
		cout<<num<<endl;
	}
	if(cad[l] == 1){
		cout<<"X"<<endl;
	}
}


// COMPLETAR

///////////////////////////////////////////////////////////////////////

// Funciones auxiliares de la clase Monomio

// COMPLETAR

ed::Monomio void calcularValor(double &x) const{
	string cad = leerMonomio();
	string coeficiente="";
	bool encontrado = 0;
	int i = 0;
	while(!encontrado){
		if(cad[i+1] == 'X'){
			encontrado = 1;
		}
		coeficiente = coeficiente + cad[i];
		i++;
	}
	double num = atof(coeficiente);
	int grado = atoi(cad[strlen(cad) - 1]);
	num = coeficiente*pow(x, grado);
}
