Ismail Roshan 
251M035 
Roll no. 32
F.E Mechanical 
#include <stdio.h> 

int main() { 
    int initial; 
    int final; 
    int add = 0; 

    printf("\nEnter initial Number :"); 
    scanf("%d",&initial); 

    printf("\nEnter final Number :"); 
    scanf("%d",&final); 

    for(int i = initial; i <= final; i++) {
        if(i % 2 != 0) { 
            add = add + i; 
        }
    }
    printf("\nSum of odd numbers between %d and %d is: %d\n", initial, final, add);
    return 0;
}
