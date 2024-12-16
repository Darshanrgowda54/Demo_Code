#include <stdio.h>

struct A {
    char b;
    int a;
    float f;
    char g[2];
    double z;
    char n[10];
};

int main()
{
    struct A AA = {'A',238,6.5f,"ab",75.6,"darshan"};


    printf("value of b is %c\n",AA.b);
    printf("value of a is %d\n",AA.a);
    printf("value of f id %f\n",AA.f);
    printf("value of g is %c\n",AA.g);
    printf("value of z is %lf\n",AA.z);
    printf("value of n  is %s\n",AA.n);

    printf("***************\n");

    printf("address of AA is %p\n",&AA);


    printf("***************\n");

    int *ptr =(int*) &AA;
    printf("%c\n",*ptr);
    printf("%d\n",*(ptr+1));
    printf("%f\n",*(float*)(ptr+2));
    printf("%s\n",(char*)(ptr+3));
    printf("%f\n",*(double*)(ptr+4));
    printf("%s\n",(char*)(ptr+6));


    printf("***************\n");

    printf("address of b is %p\n",&AA.b);
    printf("address of a is %p\n",&AA.a);
    printf("address of f is %p\n",&AA.f);
    printf("address of g is %p\n",&AA.g);
    printf("address of z is %p\n",&AA.z);
    printf("address of n is %p\n",&AA.n);

    return 0;
}


