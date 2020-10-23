/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <stdbool.h>
#include "carreLibre.h"

void remplir(int **tableau, int size) {
    int randomValue;
    srand(time(NULL));
    //comme on a un tableau a double entrée, pour recalculer la case du tableau :   *(tab + (i*size + j))
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            randomValue = rand() % 2;
            *(tableau + (i * size + j)) = randomValue;
        }
    }
}

void afficher(int **tableau, int size) {
    //affiche
    for (int i = 0; i < size; i++) {
        printf("|");
        for (int j = 0; j < size; j++) {
            if (*(tableau + (i * size + j)) == 0) {
                printf("   |");
            }
            if (*(tableau + (i * size + j)) == 1) {
                printf(" * |");
            }
        }
        printf("\n");
    }
}

void carreBlanc(int **tableau, int size) {

    PGCB pg;
    PGCB pgmax;

    pgmax->x = 0;
    pgmax->y = 0;
    pgmax->taille = 0;

    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {

            if ((tableau + (y * x + x)) == 0) {

                pg->x = x;
                pg->y = y;
                pg->taille = 1;
                bool flag = true;

                while (tableau[pg->x + pg->taille][pg->y] == 0 && tableau[pg->x][pg->y + pg->taille] == 0 && flag == true) {

                    for (int k = pg->y; k < (pg->y + pg->taille) && k < size - 1; k++) {
                        for (int l = pg->x; 1 < (pg->x + pg->taille) && l < size - 1; l++) {
                            if (pg->y + pg->taille == pg->x + pg->taille) {
                                pg->taille = pg->taille + 1;
                                if (tableau[l][k] != 0) {
                                    flag = false;
                                    pg->taille = pg->taille - 1;
                                }
                            }
                        }
                    }

                }

                if (pg->taille > pgmax->taille) {
                    pgmax->x = pg->x;
                    pgmax->y = pg->y;
                    pgmax->taille = pg->taille;
                }
            }
        }
    }
}
