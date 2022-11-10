#include <iostream>
#include <time.h>
using namespace std;
void Create(int* mas, const int n, int A, int B)
{
	for (int i = 0; i < n; i++) {
		mas[i] = A + rand() % (B - A + 1);
	}
}
void Print(int* mas, const int n) {
	cout << "A {";
	for (int i = 0; i < n; i++)
		cout << " " << mas[i];
	cout << "}";
	cout << endl;
}
int Suma_v2(int* mas, const int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += mas[i] * mas[i];
	}
	return s;
}

template <typename T1>
void CreateT(T1* mas, const int n, int A, int B)
{
	for (int i = 0; i < n; i++) {
		mas[i] = A + rand() % (B - A + 1);
	}
}

template <typename T1>
void PrintT(T1* mas, const int n) {
	cout << "A {";
	for (int i = 0; i < n; i++)
		cout << " " << mas[i];
	cout << "}";
	cout << endl;
}

template <typename T1>
 T1 Suma_v2T(T1* mas, const int& n)
{
	T1 s = 0;
	for (int i = 0; i < n; i++) {
		s += mas[i] * mas[i];
	}
	return s;
}

int main()
{
	srand(time(NULL));
	const int a = 10;
	int A[a] ;
	double B[a];
	Create(A, a, -20, 50);
	Print(A, a);
	cout << " suma = " << Suma_v2(A, a) << endl;


	CreateT(B, a, -20, 50);
	PrintT(B, a);
	cout << " suma = " << Suma_v2T(B, a) << endl;
	return 0;
}