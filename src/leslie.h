#ifndef LESLIE
#define LESLIE
#include <vector>
#include <string>
/* 
 * Kth Generation Calculator via the Leslie Population Model
 */
class Matrix{
public:
	Matrix(int n, int m); //constructs an n x m matrix with all 0's
	Matrix(std::vector<std::vector<double>> v);
	std::vector<double> matrix_vector(std::vector<double> v); // computes the matric vector product
														// using dot product rule
	void set(int i, int j, double value); // sets the a_{ij} entry in the matrix

	std::string to_string();
	void print(); // print matrix
	void size();
private:
	unsigned int n_;
	unsigned int m_;	
	std::vector<std::vector<double>> matrix_;	
};
#endif
