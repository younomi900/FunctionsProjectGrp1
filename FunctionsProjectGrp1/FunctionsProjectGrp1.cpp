#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void InputList(int array[], int size); //Collaborative
int ShowMenu(); //Collaborative
void Display(int array[], int size); //Collaborative
void Total(int array[], int size); //Collaborative
double GetAverage(int array[], int size); //Taras
int GetLargest(int array[], int size); //Taras
int GetSmallest(int array[], int size); //Taras
int GetNumOccurences(int array[], int size);//Szymon
void ScaleUp(int array[], int size);//Szymon
void Reverse(int array[], int size);//Szymon
void ZeroBase (int array[], int size);//Naomi
void RemoveNumber(int array[], int size);//Naomi
void Sort(int array[], int size);//Naomi


int main()
{
    int finalarray[12], option_num, smallest, largest, occurences;
    double average;
    const int arrsize = 12;

    InputList(finalarray, arrsize);

    ofstream outfile("numbers.dat");
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
            occurences = GetNumOccurences(finalarray, arrsize);
            cout << "The selected number has occured " << occurences << " times in the array.";
            break;
        case 7:
            ScaleUp(finalarray, arrsize);
            break;
        case 8:
            Reverse(finalarray, arrsize);
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
            RemoveNumber(finalarray, arrsize);
            break;
        case 11:
            Sort(finalarray, arrsize);
            break;
        case 12:
            for (int i = 0; i < arrsize; i++)
            {
                outfile << finalarray[i] << endl;
            }
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
        cin >> array[i];
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

int GetNumOccurences(int array[], int size)
{
    int occurnum, occurences = 0;
    cout << "enter a number to find out how much times it occurs in the array: ";
    cin >> occurnum;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == occurnum)
        {
            occurences++;
        }
    }
    return occurences;
}//Szymon

void ScaleUp(int array[], int size)
{
    double scalefactor = 0;

    cout << "enter scalefactor: ";
    cin >> scalefactor;

    while(cin.fail())
    {
        cout << "not an integer/float number, please try again\n";
        cin.clear();
        cin.ignore(256,'\n');
        cout << "enter scalefactor: ";
        cin >> scalefactor;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * scalefactor;
    }

    cout << "the array looks like this now:\n";
    for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
}//Szymon

void Reverse(int array[], int size)
{
    int temp[12];

    for(int i = 0; i < size; i++)
    {
        temp[i] = array[size - i - 1];
    }
    
    for(int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }//updates array values from temporary array to the main one
    
    cout << "Ok, array reversed. It now looks like this:\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
//Szymon

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
            array[i - 1] -= array[i - 1];
        }
    }

    cout << "Successfully removed.";

}

void Sort(int array[], int size)
{
    char highorlow;
    int temp;

    cout << "Sort by Highest (H) or Lowest (L)?\n";

    cin >> highorlow;

    if (highorlow == 'H' || highorlow == 'h')
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] < array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
    else if (highorlow == 'L' || highorlow == 'l')
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
    else
    {
        cout << "Invalid, please select higher (H) or lower (L).";
    }
}