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
    int i, j;
    float j1, jp1;
    Object tmp;

    for (i = 0; i < size_t - 1; i++) {
        for (j = 0; j < size_t - 1; j++) {
            j1 = (tab[j].cout) / (tab[j].poids);
            jp1 = tab[j + 1].cout / tab[j + 1].poids;
            if (j1 > jp1) {
                
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

int main(int argc, char** argv) {
    int array[] = {0, 1, 2, 3, 4, 5};
    int result = find_by_dichotomy(array, 6, 4);
    assert(result == 4);

    Object un;
    un.cout = 2;
    un.poids = 5;
    Object deux;
    deux.cout = 3;
    deux.poids = 5;
    Object trois;
    trois.cout = 2;
    trois.poids = 7;
    Object quatre;
    quatre.cout = 8;
    quatre.poids = 4;
    Object cinq;
    cinq.cout = 6;
    cinq.poids = 1;
    
    printf("%d",cinq.cout);

    Object array2[] = {un, deux, trois, quatre, cinq};
    printf("%f",array2[4].cout);
    for (int i = 0; i < 5 ; i++) {
        printf("%f",array2[i].cout);
        
    }
//    triSac(array2,5);
    
    
    return (EXIT_SUCCESS);
}

