#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 charType의 크기 : 1 byte
printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 inteherType의 크기 : 4 byte
printf("Size of float: %ld bytes\n",sizeof(floatType)); // 실수형 변수 floatType의 크기 :4 byte 
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 실수형 변수 doubleType의 크기 : 8 byte
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char 의 크기  1 byte
printf("Size of int: %ld bytes\n",sizeof(int)); // 자료형 int 의 크기 4 byte
printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float 의 크기 4 byte
printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double 의 크기 8byte
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); //char의 주소 값의 크기 4 byte
printf("Size of int*: %ld bytes\n",sizeof(int*)); //int의 주소 값의 크기 4 byte
printf("Size of float*: %ld bytes\n",sizeof(float*)); //float의 주소 값의 크기 4 byte
printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 의 주소 값의 크기 4 byte
return 0;
}
