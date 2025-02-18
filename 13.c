#include <stdio.h>

int main()
{

    int ans1 = 10 && 8;
    int ans2 = 0 && 8;
    int ans3 = 0 && 0;
    int ans4 = 8 && 0;


    printf("10 && 8: %d\n", ans1);
    printf("0 && 8: %d\n",  ans2);
    printf("0 && 0: %d\n", ans3);
    printf("8 && 0: %d\n", ans4);
    printf("the logical gate is:AND");
    return 0;

}
