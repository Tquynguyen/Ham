#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    int ROWS,COLS;
	cout<<"Moi ban nhap vao so dong cua ma tran:";
    cin>>ROWS;
		cout<<"Moi ban nhap vao so cot cua ma tran:";
	cin>>COLS;

    // Khoi tao hai ma tran ngau nhiên voi giá tri trong khoang tu 1 den 10
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
    srand(time(0));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix1[i][j] = 1+rand() % 10;
            matrix2[i][j] = 1+rand() % 10;
        }
    }

    // Hien thi hai ma tran
    cout << "Matrix 1: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix 2: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // tinh tich cua 2 ma tran va hien thi ket qua
    int result[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Result: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
