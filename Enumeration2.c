#include<stdio.h>

enum days { Monday = 2, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    enum days obj;

    printf("Size of enum %d\n",sizeof(obj));   //4
    printf("Monday : %d\n",Monday);            //2
    printf("Tuesday : %d\n",Tuesday);          //3
    printf("Wednesday : %d\n",Wednesday);      //4
    printf("Thursday : %d\n",Thursday);        //5
    printf("Friday : %d\n",Friday);            //6
    printf("Saturday : %d\n", Saturday);         //7
    printf("Sunday : %d\n", Sunday);             //8

    //Monday++;



    //printf("%d\n",&Monday);
    return 0;
}