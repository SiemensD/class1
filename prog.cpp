#include<time.h>
#include<ctime>
#define INTEGER
#include "Function.h"
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int size = 10;
    int range = 100;

    int arr1[size];
    cout << "Массив целых чисел" << endl << endl;
    cout << endl;
    CreatArr(arr1, size, range);
    ShowArr(arr1, size);
    cout << endl << endl;
    cout << "Сортировка массива: " << endl;
    Sort(arr1, size);
    ShowArr(arr1, size);
    cout << endl << endl;

    Min(arr1, size);
    cout << endl;
    
    cout << endl;
    cout << endl;
    Max(arr1, size);
    
    cout << endl;
    cout << endl;    
    Edit(arr1, size);
    cout << "Массив после исправления";
    cout << endl;
    ShowArr(arr1, size);

    cout << endl<<endl;
#undef INTERGER

#define DOUBLE
#include "Function.h"

    cout << endl;
    double arr2[size];
    cout << "Массив дробных чисел" << endl << endl;
    cout << endl;
    CreatArr(arr2, size, range);
    ShowArr(arr2, size);
    cout << endl << endl;
    cout << "Сортировка массива: " << endl;
    Sort(arr2, size);
    ShowArr(arr2, size);
    cout << endl << endl;
    Min(arr2, size);
    
    cout << endl;
    Max(arr2, size);
    
    cout << endl;
    Edit(arr2, size);
    cout << "Массив после исправления";
    cout << endl;
    ShowArr(arr2, size);
#undef FLOAT

#define CHAR
#include "Function.h"

    cout << endl;
    char arr3[size];
    cout << "Массив символов" << endl << endl;
    cout << endl;
    CreatArr(arr3, size);
    ShowArr(arr3, size);
    cout << endl << endl;
    cout << "Сортировка массива: " << endl;
    Sort(arr3, size);
    ShowArr(arr3, size);
    cout << endl << endl;
    Min(arr3, size);
   
    cout << endl;
    Max(arr3, size);
    
    cout << endl;
    Edit(arr3,size);
    cout << "Массив после исправления";
    cout << endl;
    ShowArr(arr3, size);

#undef CHAR

    cout << endl << endl;
    system("pause");
    return 0;
}