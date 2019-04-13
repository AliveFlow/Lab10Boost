#include "pch.h"
#include <iostream>
#include <vector>
#include"Boost/numeric/ublas/matrix.hpp"

using namespace boost::numeric::ublas;

// вывод на экран матрицы 2х2
void printmatrix22(const std::string& sText, boost::numeric::ublas::matrix<double> a)
{
	std::cout << sText << std::endl;
	std::cout << a(0, 0) << " " << a(1, 0) << std::endl;
	std::cout << a(0, 1) << " " << a(1, 1) << std::endl << std::endl;
}


// вывод на экран матрицы 3х3
void printmatrix33(const std::string& sText, boost::numeric::ublas::matrix<double> a)
{
	std::cout << sText << std::endl;
	std::cout << a(0, 0) << " " << a(1, 0) << " " << a(2, 0) << std::endl;
	std::cout << a(0, 1) << " " << a(1, 1) << " " << a(2, 1) << std::endl;
	std::cout << a(0, 2) << " " << a(1, 2) << " " << a(2, 2) << std::endl << std::endl;
}

void main()
{

	setlocale(LC_ALL, "Russian");
	// Инициализация матрицы А
	boost::numeric::ublas::matrix<double> a(2, 2);
	a(0, 0) = 1.;
	a(0, 1) = 2.;
	a(1, 0) = 3.;
	a(1, 1) = 4.;
	printmatrix22("Матрица А:", a);

	// матрица B 
	boost::numeric::ublas::matrix<double> b(2, 2);
	b(0, 0) = 2.;
	b(0, 1) = 5.;
	b(1, 0) = 6.;
	b(1, 1) = 1.;
	printmatrix22("Матрица B:", b);

	// матрица xx 
	boost::numeric::ublas::matrix<double> xx(3, 3);
	xx(0, 0) = 1.;
	xx(0, 1) = 5.;
	xx(0, 2) = 3.;
	xx(1, 0) = 2.;
	xx(1, 1) = 4.;
	xx(1, 2) = 5.;
	xx(2, 0) = 9.;
	xx(2, 1) = 9.;
	xx(2, 2) = 0.;

	printmatrix33("Матрица XX:", xx);

	// матрица aa
	boost::numeric::ublas::matrix<double> aa(3, 3);
	aa(0, 0) = 2.;
	aa(0, 1) = 5.;
	aa(0, 2) = 5.;
	aa(1, 0) = 6.;
	aa(1, 1) = 1.;
	aa(1, 2) = 1.;
	aa(2, 0) = 6.;
	aa(2, 1) = 1.;
	aa(2, 2) = 1.;

	printmatrix33("Матрица AA:", aa);

	// перемножение матриц
	boost::numeric::ublas::matrix<double> c = prod(b, a);
	printmatrix22("A*B:", c);

	c = prod(b, a);
	printmatrix22("B*A:", c);



	boost::numeric::ublas::matrix<double> x = prod(aa, xx);
	x = prod(aa, xx);
	printmatrix33("XX*AA:", x);
}