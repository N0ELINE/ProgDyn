/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   carreLibre.h
 * Author: student
 *
 * Created on October 23, 2020, 1:30 PM
 */

#ifndef CARRELIBRE_H
#define CARRELIBRE_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif


typedef struct {
    int x;
    int y;
    int taille;
} PGCB;

void remplir(int **tableau, int size);
void afficher(int **tableau, int size) ;

void carreBlanc(int **tableau, int size);



#endif /* CARRELIBRE_H */

