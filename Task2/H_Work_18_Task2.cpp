
//Write a function that determines the arithmetic
//mean of the elements of the array passed to it

#include <iostream>

using namespace std;

int Aref(int arr[], int SIZE, int sum, int i);

int main()
{
    const int SIZE = 10;
    int arr[SIZE]{ 8, 5, 3, 77, 32, 23, 65, 23, 1, 65 };
    Aref(arr, SIZE, 0, 0);
    cout << "Arithmetic mean: " << Aref(arr, SIZE, 0, 0) << endl;
}

int Aref(int arr[], int SIZE, int sum, int i)
{
    if(i == SIZE)
    {
        return sum /= SIZE;
    }
    sum += arr[i];
    Aref(arr, SIZE, sum, ++i);
}
