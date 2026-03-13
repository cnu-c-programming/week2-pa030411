#include <stdio.h>

int main()
{
    int var1 = 100;
    printf("int : %?\n",var1);
    printf("hex : %?\n",var1);
    printf("oct : %?\n",var1);

    char var2 = 'c';
    printf("char : %?\n" , var2);

    char* var3 = "hello world!";
    printf("string : %?\n",var3);

    float var4 = 3.141592;
    printf("float : %?\n",var4);
    printf("exp : %?\n",var4);

    return 0;
}
