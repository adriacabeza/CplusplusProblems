#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Match {
	int x, y;
};

typedef vector<Match> Row;
typedef vector<Row> Matrix;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void read_matrix(Matrix& M) {
	int tam = M.size();
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			cin >> M[i][j].x >> M[i][j].y;
		}
	}
}

void def_matrix (Matriu& R, const Matrix& M) {
	int tam = R.size();
	//NÄ‚ÅŸmero equip
	for (int i = 0; i < tam; ++i) R[i][0] = i+1;
	//Puntuacio
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			if (i != j) {
				//Punts
				if (M[i][j].x == M[i][j].y) {
					++R[i][1];
					++R[j][1];
				}
				else if (M[i][j].x > M[i][j].y) R[i][1] += 3;
				else R[j][1] += 3;
				//Gols
					//Favor
					R[i][2] += M[i][j].x;
					R[j][2] += M[i][j].y;
					//Contra
					R[i][3] += M[i][j].y;
					R[j][3] += M[i][j].x;
			}
		}
	}
}

bool comp(const vector<int>& v, const vector<int>& u) {
	if (v[1] == u[1]) {
		if (v[2]-v[3] == u[2]-u[3]) {
			return v[0] < u[0];
		}
		else return v[2]-v[3] > u[2]-u[3];
	}
	else return v[1] > u[1];
}

void write_matrix(const Matriu& R) {
	int tam = R.size();
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (j != 0) cout << " ";
			cout << R[i][j];
		} cout << endl;
	}
}


int main() {
	int n;
	cin >> n;
	Matrix M(n, Row(n));
	read_matrix(M);
	Matriu R(n, Fila(4, 0));
	def_matrix(R, M);
	sort(R.begin(), R.end(), comp);
	write_matrix(R);
}
