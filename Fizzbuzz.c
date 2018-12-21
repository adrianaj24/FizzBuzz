//
//  Fizzbuzz.c
//  Swift Fun 1
//
//  Created by Adriana Jimenez on 2018-12-20.
//  Copyright © 2018 Adriana Jimenez. All rights reserved.
//

#include "Fizzbuzz.h"
#include <stdio.h>

int main () {
    int i;
    for (i = 1; i <= 100; i++) {
        
        if ((i % 3) && (i % 5)) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
        
    return 0;
}




int main () {
    int i = 1;
    while (i <= 100) {
        
        if ((i % 3) && (i % 5)) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
        
        i++;
    }
    
    return 0;
}



1
2
fizz
4
buzz
fizz



