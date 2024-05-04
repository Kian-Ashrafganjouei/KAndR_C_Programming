#include <stdio.h>

void function1(){
    printf("Function1\n");
    int far, cel;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    far = lower;
    printf("Fahrenhite Celsius\n");
    while(far <= upper)
    {
        cel = 5 * (far - 32) / 9;
        printf("%3d\t%3d\n", far, cel);
        far = far + step;
    }
}

int function2()
{
    printf("Function2\n");
    float far, cel;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    far = lower;
    printf("Fahrenhite Celsius\n");
    while(far <= upper)
    {
        cel = (5.0/9.0) * (far - 32.0);
        printf("%3.0f\t%3.1f\n", far, cel);
        far = far + step;
    }
}

#define LOWER 0
#define UPPER 300
#define STEP 20

int function3()
{
    printf("Function3\n");
    int far;
    printf("Fahrenhite Celsius\n");

    for (far = LOWER; far <= UPPER; far+=STEP)
    {
        printf("%3d\t%3.1f\n",far,(5.0/9.0) * (far - 32.0));
    }
    
}


int main()
{
    function1();
    function2();
    function3();

}

