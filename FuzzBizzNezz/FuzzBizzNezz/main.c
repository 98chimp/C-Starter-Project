//
//  main.c
//  FuzzBizzNezz
//
//  Created by Shahin on 2015-02-02.
//  Copyright (c) 2015 98% Chimp. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int fuzz = 0;
    int bizz = 0;
    int nezz = 0;
    
    printf("Please enter a number between 1 and 10: ");
    scanf("%d", &fuzz);
    
    printf("Please enter another between 1 and 10: ");
    scanf("%d", &bizz);
    
    printf("Please enter a number between 1 and 100: ");
    scanf("%d", &nezz);
    
    for (int i=1; i<=nezz; i++) {
        if (i % fuzz == 0 && i % bizz == 0) {
            printf("FuzzBizz\n");
        }
        else if (i % fuzz == 0) {
            printf("Fuzz\n");
        }
        else if (i % bizz == 0) {
            printf("Bizz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    
    return 0;
}
