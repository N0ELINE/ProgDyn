/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   knapsack.h
 * Author: student
 *
 * Created on October 21, 2020, 2:09 PM
 */

#ifndef KNAPSACK_H
#define KNAPSACK_H


typedef struct {
    int cout;
    int poids;
} Object;

#define ARRAY_LIST_MAX_SIZE 100
//#define taille=-1

typedef struct {
    Object data[ARRAY_LIST_MAX_SIZE];
    int taille;
    int coutTotal;
    int poidsTotal;
} Knapsack;



void triSac(Object *tab, int size_t);
void knapsack(Object tab[], int size_t, Knapsack *sac, int W);
void initialise(Knapsack sac);

#endif /* KNAPSACK_H */

