#include <math.h>

#include <stdio.h>

double x[4], f[4];

double Eitken(double X, int n) {

    double Y[10][10];

    for (int j = 0; j <= n; j++) {

        Y[j][j] = f[j];

        for (int i = j - 1; i >= 0; i--)

            Y[i][j] = 1 / (x[j] - x[i]) * ((X - x[i]) * Y[i + 1][j] - (X - x[j]) * Y[i][j - 1]);

    }

    return Y[0][n];

}

int main() {

    double X = 2.56;

    x[0] = 1;
    f[0] = 1;

    x[1] = 2;
    f[1] = 1.4142;

    x[2] = 3;
    f[2] = 1.7321;

    x[3] = 4;
    f[3] = 2;



    printf("Eitken: f(%f) = %f ", X, Eitken(X, 3));

}