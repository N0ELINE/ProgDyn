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
#include <time.h>
#include <stdbool.h>
#include "divideAndConquer.h"
#include "knapsack.h"
#include "carreLibre.h"

#define COTE 10

int main(int argc, char** argv) {

    //divide and conquer
    int array[] = {0, 1, 2, 3, 4, 5};
    int result = find_by_dichotomy(array, 6, 4);
    assert(result == 4);


    //knapsack
    Object un;
    un.cout = 8;
    un.poids = 5;
    Object deux;
    deux.cout = 3;
    deux.poids = 5;
    Object trois;
    trois.cout = 500;
    trois.poids = 10;
    Object quatre;
    quatre.cout = 9;
    quatre.poids = 600;
    Object cinq;
    cinq.cout = 1;
    cinq.poids = 7;

    Object array2[] = {un, deux, trois, quatre, cinq};

    triSac(array2, 5);
    assert(array2[0].cout == 500);
    assert(array2[0].poids == 10);

    Knapsack monSac;
    initialise(monSac);
    int WCapaciteMax = 200;

    knapsack(array2, 6, &monSac, WCapaciteMax);
    assert(monSac.data[0].cout == 500);
    assert(monSac.data[1].cout == 8);


    //carré Libre
    int size = COTE;
    int tableau[10][10];
    remplir(tableau, size);
    afficher(tableau, size);




    return (EXIT_SUCCESS);
}

