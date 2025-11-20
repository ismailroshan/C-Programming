Ismail Yusuf Roshan 
251M035 
Roll no. 32
F.E Mechanical 
#include <stdio.h>

int main()
{
    float Physics, Chemistry, Maths, Average;
    
    printf("Enter Physics Marks\n");
    scanf("%f", &Physics);
    
    printf("Enter Chemistry Marks\n");
    scanf("%f", &Chemistry);
    
    printf("Enter Maths Marks\n");
    scanf("%f", &Maths);
    
    Average = (Physics + Chemistry + Maths) / 3.0;
    
    printf("The Average of PCM marks is %f\n", Average);
    
    (Average >= 50) ? printf("The student is eligible for admission.\n") : printf("The student is not eligible for admission.\n");
    
    return 0;
}
