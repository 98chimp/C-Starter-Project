//
//  main.c
//  FizzBuzz
//
//  Created by Shahin on 2015-02-02.
//  Copyright (c) 2015 98% Chimp. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for (int i=1; i<=100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    
    return 0;
}
