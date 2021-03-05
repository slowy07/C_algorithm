#pragma once

#ifdef __cplusplus
extern "C"
{
    #endif

    #define ARRAY_ERASED -1
    #define SUCCES 0
    #define INVALID_POSITION 1
    #define POSITION_INIT 2
    #define POSITION_NOT_INIT 3
    #define POSITION_EMPTY 4
    #define ARRAY_FULL 5

    typedef struct  CArray
    {
        /* data */
        int *array;
        int size;
    } CArray;

    //return arr
    CArray *getCArray(int size);
    CArray *getCopyCArray(CArray *array);
    
    //i/o
    
    int insertValueCArray(CArray *array, int position, int value);
    int removeValueCArray(CArray *array, int position);
    int pushValueCArray(CArray *array, int value);
    int updateValueCArray(CArray *array, int position, int value);

    //erase
    int eraseCArray(CArray *array);

    //switc
    int switchValuesCArray(CArray *array, int position1, int position2);
    int reverseCArray(CArray *array);

    //sorting
    int bubbleSortCArray(CArray *array);
    int selectionSortCArray(CArray *array);
    int insertionSortCArray(CArray *array);
    int blenderCArray(CArray *array);

    //searching
    int valueOccuranceCArray(CArray *array, int value);
    CArray *valuePositionsCArray(CArray *array, int value);
    int findMaxCArray(CArray *array);
    int findMinCArray(CArray *array);
    

    //out
    int displayCArray(CArray *array);

#ifdef __cplusplus
}
#endif