//#pragma once

#include<iostream>

void CreatArrInt(int arr[], int size, const int range);
void ShowArrInt(int arr[], int size);
int MinInt(int arr[], int size);
int MaxInt(int arr[], int size);
void SortInt(int arr[], int size);
void EditInt(int arr[], int size);

void CreatArrDouble(double arr[], const int size, const int range);
void ShowArrDouble(double arr[], int size);
double MinDouble(double arr[], int size);
double MaxDouble(double arr[], int size);
void SortDouble(double arr[], int size);
void EditDouble(double arr[], int size);

void CreatArrChar(char arr[], const int size);
void ShowArrChar(char arr[], int size);
char MinChar(char arr[], int size);
char MaxChar(char arr[], int size);
void SortChar(char arr[], int size);
void EditChar(char arr[], int size);



#ifdef INTEGER
#define  CreatArr  CreatArrInt
#define ShowArr ShowArrInt
#define Min MinInt
#define Max MaxInt
#define Sort SortInt
#define Edit EditInt

#endif // INTEGER

#ifdef DOUBLE
#define CreatArr  CreatArrDouble
#define ShowArr ShowArrDouble
#define Min MinDouble
#define Max MaxDouble
#define Sort SortDouble
#define Edit EditDouble

#endif // DOUBLE


#ifdef CHAR
#define CreatArr  CreatArrChar
#define ShowArr ShowArrChar
#define Min MinChar
#define Max MaxChar
#define Sort SortChar
#define Edit EditChar


#endif // CHAR


/*3. в файле function.h нужно: а) описать прототипы всех функций; 
б) сделать проверку определена ли константа, указывающая на тип данных 
( #ifdef INTEGER ) в ) создать обобщающие имена функции , которым будет 
определена функция соответствующего типа в зависимости от константы , 
указанной в файле prog.cpp . (# define show ShowInt )*/

