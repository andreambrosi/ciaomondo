//
// Created by Andrea on 19/03/2020.
//
#include "contains.h"

bool isContain(double a1[], double a2[], int size1, int size2) {
    for (int i = 0; i < (size1 - size2); ++i) {
        if(a1[i] == a2[0]) {
            bool flag = true;
            for(int k = 1; k < size2; k++) {
                if(a1[i + k] != a2[k]) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return true;
        }
    }

    return false;
}