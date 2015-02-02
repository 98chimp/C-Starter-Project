//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2014-09-28.
//
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("I'm starting the iOS prep course.\n");
    
    for (int i=1; i<=100; i++) {
        if (i % 3 ==0 && i % 5 == 0) {
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