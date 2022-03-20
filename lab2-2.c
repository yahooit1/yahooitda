#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;

printf("[----- [gahyun.kim] [2020045070] -----]\n");
printf("[checking values before ptr = &i] \n"); 
printf("value of i == %d\n", i); //실제 i의 값 1234
printf("address of i == %p\n", &i); //i의 값 1234가 저장된 주소
printf("value of ptr == %p\n", ptr); //ptr의 실제 값 : 아직은 NULL
printf("address of ptr == %p\n", &ptr); //ptr 의 주소
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //i의 실제 값 1234
printf("address of i == %p\n", &i); //i의 주소 (ptr=&i를 하기 전과 같음)
printf("value of ptr == %p\n", ptr); //ptr의 값 즉, i의 주소
printf("address of ptr == %p\n", &ptr); //ptr의 주소
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값 즉 i값 1234

dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //i의 값
printf("address of i == %p\n", &i); //i의 주소 (변하지 않음)
printf("value of ptr == %p\n", ptr); //ptr의 값 즉,i의 주소
printf("address of ptr == %p\n", &ptr); //ptr의 주소
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값 즉,i 값 1234
printf("value of dptr == %p\n", dptr); //dprt의 값 즉,prt의 주소
printf("address of dptr == %p\n", &dptr); //dprt의 주소
printf("value of *dptr == %p\n", *dptr); //dprt에 저장된 주소가 가리키는 값, ptr 값 즉,i의 주소
printf("value of **dptr == %d\n", **dptr); //dprt에 저장된 주소가 가리키는 값의 실제 값 즉, i의 값 1234
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); //포인터 변수ptr을 사용해 ptr값에 저장된 주소가 가리키는 값을 바꿨음 즉 i값이 바뀜
printf("value of i == %d\n", i); //바뀐 i의 값 7777
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값 즉,i의 값 7777
printf("value of **dptr == %d\n", **dptr); //dprt에 저장된 주소가 가리키는 값의 실제 값 즉,i의 값 7777
**dptr = 8888; /* changing the value of **dptr */ 
printf("\n[after **dptr = 8888] \n"); //이중포인터변수 dptr을 사용해 i값을 바꿈
printf("value of i == %d\n", i); //i의 값 8888
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값 즉 바뀐 i값인 8888
printf("value of **dptr == %d\n", **dptr); //이중포인터변수 dptr가 가리키는 값 i의 값 8888
return 0;
}