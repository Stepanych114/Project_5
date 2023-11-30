#include <iostream>
#include <random>
#include <stdlib.h>
#include <time.h>

//Заполняет матрицу случайными числами с указанными диапазонами.
void fillMatrix(int** mat, int rows, int cols, int minValue, int maxValue)
{
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = rand() % (maxValue - minValue + 1) + minValue;
        }
    }
}

//функция печати матрицы
void printMatrix(int** mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    int rows = 10;
    int cols = 10;
    int** mat = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        mat[i] = new int[cols];
    }
    fillMatrix(mat, rows, cols, -100, 100);
    printMatrix(mat, 10, 10);
}

