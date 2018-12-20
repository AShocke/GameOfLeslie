#include "leslie.h"
#include <vector>
#include <cstdio>
#include <string>
Matrix::Matrix(int n, int m) {
	std::vector<std::vector<double>> v(n);
	for (int i = 0; i < n; i++) {
		std::vector<double> temp(m, 0);
		v[i] = temp;
	}
	matrix_ = v;
	n_ = n;
	m_ = m;
}

void Matrix::set(int i, int j, double value) {
	if( i >= n_ || j >= m_) {
		printf("Entries out of bound /n");
	}
	matrix_[i][j] = value;
}

void Matrix::print() {
	std::string s = to_string();
	printf("%s", s.c_str());
}

std::vector<double> Matrix::matrix_vector(std::vector<double> v) {
	if (v.size() != m_) {
		printf("Vector is not of the appropiate size. Need a vector with %d elements.\n", m_);
		return v;
	}
	std::vector<double> product;
	for (int i = 0; i < n_; i++) {
		int dot = 0; 
		for (int j = 0; j < m_; j++) {
			dot += matrix_[i][j] * v[j];
		}
		product.push_back(dot);
	}
	return product;
}

std::string Matrix::to_string() {
	std::string s = "";
	for (int i = 0; i < n_; i++) {
		for (int j = 0; j < m_; j++) {
			s.append(std::to_string(matrix_[i][j]) += " ");
		}
		s.append("\n");
	}
	s.append("\n");
	return s;
}
void Matrix::size() {
	printf("%d x %d \n", n_, m_);
}
