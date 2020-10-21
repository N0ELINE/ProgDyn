/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "divideAndConquer.h"

/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */
int find_by_dichotomy(int array[], int size_t, int value ){
    
    
    int find = 0;
    int iMin = 3;
    int iMax = size_t-1;
    int iMid;

    iMid = (iMax+iMin)/2;
    
    while (find!=1 && iMid>=1) {
        iMid = (iMax+iMin)/2;
        if(array[iMid]==value){
            find = 1;
        }else if(value>array[iMid]){
            iMin=iMid;
        } else {
            iMax=iMid;
        }
    }
    if(find==1){
       return iMid; 
    }else{
        return -1;
    }
    
    
    
    
}