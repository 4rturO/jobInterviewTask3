#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

#define ARRAY_SIZE 1000

//Задача 3 - частично
//подсчет факториала для чисел меньше 21
uint64_t factorialBefore21( uint8_t n )
{
    uint64_t answer = 1;
    for( uint8_t i = 1; i <= n; i++)
    {
        answer *= i;
    }
    return answer;
}

//Задача 1
void arrayFilling( uint16_t *A, const uint16_t size ){

    for (uint16_t i = 1; i < size; i += 2)
    {
        A[i/2] = i+1;
        A[size/2 + i/2] = i;
    }
}

//вспомогательная функция для упрощения отладки
void arrayPrint( uint16_t *A, uint16_t size ){

    for (uint16_t i = 0; i < ARRAY_SIZE; i++)
    {
        printf("index = %d, A = %d\n", i, A[i]);
    }
}

//Задание 5
void arraySortBubble( uint16_t *A, uint16_t size ){

    bool unfinishedFlag = true;
    uint16_t temp = 0;
    while( unfinishedFlag )
    {
        unfinishedFlag = false;
        for (uint16_t i = 0; i < ARRAY_SIZE-1; i++)
        {
            if( A[i] > A[i+1] )
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                unfinishedFlag = true;
            }
        }
    }
}

int main() {

    //создание массива
    uint16_t array[ARRAY_SIZE] = {0};

    //заполнение
    arrayFilling(array, ARRAY_SIZE);
    //проверка
    arrayPrint(array, ARRAY_SIZE);

    //сортировка
    arraySortBubble(array, ARRAY_SIZE);
    //проверка
    arrayPrint(array, ARRAY_SIZE);
    return 0;
}
