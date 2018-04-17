#include <iostream>
 
using namespace std;
 

void utworz(double **&A, unsigned int m, unsigned int n) {
	A = new double*[m];
	if (A)
		for (unsigned int i = 0; i < m; i++) {
			A[i] = new double[n];
		}

}

void zapisz(double **&a, unsigned int m, unsigned int n) {
	for (unsigned int i = 0; i < m; i++) {
		for (unsigned int q = 0; q < n; q++) {
			cout << a[i][q] << " | ";
			if (q == n - 1) {
				cout << endl;	
			}
			
			
		}
	}
}
 
bool czytaj(double **&A, unsigned int m, unsigned int n, double **&B, unsigned int i, unsigned int j) {
	utworz(A,m,n);
	utworz(B,i,j);
	for (unsigned int i = 0; i < m; i++) {
		for (unsigned int q = 0; q < n; q++) {
			cout << "Podaj element  "<<i+1<<" "<< q+1 << " macierzy A" << endl;
			cin >> A[i][q];
			cout << endl;
		}
	}
	
	for (unsigned int i = 0; i < m; i++) {
		for (unsigned int q = 0; q < n; q++) {
			cout << "Podaj element  "<<i+1<<" "<< q+1 << " macierzy B" << endl;
			cin >> B[i][q];
			cout << endl;
		}
	}
	return true;
} 
 

 
 
int main(int argc, char *argv[])
{
	
	
	unsigned int m = 3;
	unsigned int n = 2;
	
	unsigned int p = 3;
	unsigned int q = 2;
	
	double **A = 0;
	double **B = 0;
	
	
	
	if (czytaj(A, m, n, B, p, q)) {
			zapisz(A,m,n);
			zapisz(B,m,n);
		}
    return 0;
}


