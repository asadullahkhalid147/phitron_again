#include<stdio.h>
int main()
{
    int x = 10;
    //1st method
    printf("%p\n",&x);

    // 2nd method
    int* p=&x;
    printf("%p\n",
    p);
    //1st method ar 2nd methode aki kaj hosse

    // dereference(pointer use kore value access kora)
    printf("%d\n",*p);

    *p=500;
    printf("%d\n",x);
   //*p ar x eki jaegae access kore

}