#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void InputList(int array[], int size);
void ShowMenu();

int main()
{
    int finalarray[12];
    const int arrsize = 12;

    cout << "Enter an array of 12 digits: ";

    InputList(finalarray, arrsize);

    for (int i = 0; i < arrsize; i++)
    {
        cout << finalarray[i] << " ";
    }
}

void InputList(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void ShowMenu()
{

}

