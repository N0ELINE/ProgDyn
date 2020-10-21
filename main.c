/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on October 21, 2020, 10:56 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "divideAndConquer.h"
#include "knapsack.h"

/*
 * 
 */


void triSac(Object *tab, int size_t) {
    float j1, jp1;
    Object tmp;

    for (int i = 0; i < size_t; i++) {
        for (int j = 0; j < size_t - 1; j++) {
            j1 = (float) (tab[j].cout) / (float) (tab[j].poids);
            jp1 = (float) (tab[j + 1].cout) / (float) (tab[j + 1].poids);
            if (j1 < jp1) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

void knapsack(Object *tab, int size_t, int W) {
    
    int w=W;
    for(int i=0; i<=size_t-1;i++){
//        if()
    }
    
    
}

int main(int argc, char** argv) {



    int array[] = {0, 1, 2, 3, 4, 5};
    int result = find_by_dichotomy(array, 6, 4);
    assert(result == 4);




    Object un;    un.cout = 8;    un.poids = 5;
    Object deux;    deux.cout = 3;    deux.poids = 5;
    Object trois;    trois.cout = 5;    trois.poids = 10;
    Object quatre;    quatre.cout = 9;    quatre.poids = 600;
    Object cinq;    cinq.cout = 1;    cinq.poids = 7;

    Object array2[] = {un, deux, trois, quatre, cinq};

    triSac(array2, 5);
    assert(array2[0].cout == 8);
    assert(array2[0].poids == 5);




    Knapsack monSac;
    int WCapaciteMax = 20;
    
    
    

    return (EXIT_SUCCESS);
}

