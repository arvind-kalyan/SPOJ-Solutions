/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include <string>
#include<iostream>
using namespace std;
int main()
{
   string a;
   printf("Ready\n");

     while(getline(cin,a)){
       if((a[0]==' ') && (a[1]==' '))
       break;
     
               if((a[0]=='q')&&(a[1]=='p')||(a[0]=='b')&&(a[1]=='d')||(a[0]=='d')&&(a[1]=='b')||(a[0]=='p')&&(a[1]=='q'))
               printf("Mirrored pair\n");
               else
                printf("Ordinary pair\n");
      }
         return 0;  
}
