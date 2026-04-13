#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
using namespace std;

void InputList(int array[], int size); //Collaborative
int ShowMenu(); //Collaborative
void Display(int array[], int size); //Collaborative
void Total(int array[], int size); //Collaborative
double GetAverage(int array[], int size); //Taras
int GetLargest(int array[], int size); //Taras
int GetSmallest(int array[], int size); //Taras
//funct 6 placeholder, Szymon
//funct 7 placeholder, Szymon
//funct 8 placeholder, Szymon
void ZeroBase (int array[], int size);//Naomi
void RemoveNumber(int array[], int size);//Naomi
void Sort(int array[], int size);//Naomi


int main()
{
    int finalarray[12], option_num, smallest, largest;
    double average;
    const int arrsize = 12;

    ifstream infile("numbers.dat");

    InputList(finalarray, arrsize);

    do
    {
        option_num = ShowMenu();

        cout << endl;

        switch (option_num)
        {
        case 1:
            Display(finalarray, arrsize);
            break;
        case 2:
            Total(finalarray, arrsize);
            break;
        case 3:
            average = GetAverage(finalarray, arrsize);
            
            cout << "The average of the values in the array is: " << fixed << setprecision(2) << average;
            break;
        case 4:
            smallest = GetSmallest(finalarray, arrsize);

            cout << "The smallest value in the array is: " << smallest;
            break;
        case 5:
            largest = GetLargest(finalarray, arrsize);

            cout << "The largest value in the array is: " << largest;
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            ZeroBase(finalarray, arrsize);

            cout << "The values in the array have been minused by the smallest value.\n";

            for (int i = 0; i < 12; i++)
            {
                cout << finalarray[i] << " ";
            }
            break;
        case 10:

        case 11:

        case 12:
            return 0;

        default: "Invalid Option, select 1 of the 12 functions: ";
            break;
        }

    } while (option_num != 12);

}

void InputList(int array[], int size)
{
    ifstream infile("numbers.dat");

    for (int i = 0; i < size; i++)
    {
        infile >> array[i];
    }
} //Naomi

int ShowMenu()
{
    int optionnum;

    cout << "\n 1. Display\n 2. GetTotal\n 3. GetAverage\n 4. GetLargest\n 5. GetSmallest\n 6. GetNumOcurrences\n 7. ScaleUp\n 8. Reverse\n 9. ZeroBase\n 10. RemoveNumber\n 11. Sort\n 12. Quit\n \nChoose an option: ";

    cin >> optionnum;

    return optionnum;
} //Naomi

void Display(int array[], int size)
{
    for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
} //Naomi

void Total(int array[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
       total += array[i];
    }
    cout << "The total of all the numbers in the array is: " << total; 
} //Naomi

double GetAverage(int array[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return (double)sum / size;
} //Taras

int GetLargest(int array[], int size)
{
    int largest = array[0];

    for(int i = 0; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    return largest;
} //Taras

int GetSmallest(int array[], int size)
{
    int smallest = array[0];
    
    for(int i = 0; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    return smallest;
} //Taras

//function 6

//function 7

//function 8

void ZeroBase (int array[], int size)
{
    int zerobase = array[0];

    for (int i = 0; i < 0; i++)
    {
        if (array[i] < zerobase)
        {
            zerobase = array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        array[i] -= zerobase;
    }

}//Naomi

void RemoveNumber(int array[], int size)
{
    int numtoerase;

    cout << "Enter the corresponding number you want to remove from the array: ";

    cin >> numtoerase;

    for (int i = 0; i < size; i++)
    {
        if (i == numtoerase)
        {
            array[i] =- array[i];
        }
    }

    cout << "Successfully removed.";

}

void Sort(int array[], int size)
{

}