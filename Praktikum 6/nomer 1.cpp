//Dita Aulia Oktavian//
//20051397020//
//MIB2020//
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i)
{
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
