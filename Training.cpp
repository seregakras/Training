// Training.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cstdlib> // в этом файле содержится rand
#include <time.h> // clock_t, clock, null
#include <cmath>
using namespace std;

// Функция заполнения массива случайными числами 
template <typename T>
void InitMassiv(T arr[], int size, int start = 0, int finish = 100, double kratnost = 1) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (finish + 1 - start) + start) / kratnost;
    }
}

// Функция вывода массива на экран
template <typename T>
void ShowMassiv(T arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "  " << arr[i];
    }
    cout << endl;
}

// Функция пузырьковой сортировки массива
template <typename T>
void SortMassiv(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        T temp;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }


    }
}

// Функция поиска максимального элемента массива
template <typename T>
T MaxElem(T arr[], int size) {
    T max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Функция заполнения матрицы случайными числами 
template <typename T>
void InitMatrica(T arr[][5], int row, int col, int start = 0, int finish = 100, T mnogitel = 1) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = (rand() % (finish + 1 - start) + start) * mnogitel;
        }
    }
}

// Функция вывода матрицы на экран
template <typename T>
void ShowMatrica(T arr[][5], int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

// Функция вычисления суммы элементов массива рекурсивно
template <typename T>
T SumArr(T Arr[], int length)
{
    if (length == 0)
    {
        return 0;
    }
    else
    {
        return Arr[length - 1] + SumArr(Arr, length - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    double Ar[10];
    InitMassiv(Ar, 10, 0, 10, 10.0);
    ShowMassiv(Ar, 10);
    cout << SumArr(Ar, 10);



    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.