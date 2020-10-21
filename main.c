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
/*
 * 
 */

int main(int argc, char** argv) {
    int array[]={0,1,2,3,4,5};
    int result = find_by_dichotomy(array, 6, 4);
    assert(result==4);
 
    return (EXIT_SUCCESS);
}

