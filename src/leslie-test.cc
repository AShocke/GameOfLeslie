#include "leslie.h"
#include <vector>
#include <cstdio>

void print(std::vector<double> x) {
	printf("[");
	for (int i = 0; i < x.size(); i++) {
		printf("%lf", x[i]);
		if (i != x.size() - 1) {
			printf(", ");
		}
	}
	printf(" ]\n");
}
int main() {
	Matrix m(2, 2);
	m.set(0, 0, 0);
	m.set(1, 0, 1);
	m.set(0, 1, 1);
	m.set(1, 1, 1);
	m.size();
	m.print();
	std::vector<double> a_0 = {1, 1};
	print(a_0);

	for (int i = 0; i < 30  ; i++) {
		std::vector<double> a_i = m.matrix_vector(a_0);
		print(a_i);
		a_0 = a_i;
	}
} 
