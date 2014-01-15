/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<stdio.h>
#include<deque>
using namespace std;
main(){
        int n, m, sum=0, val;
        scanf("%d %d",&n,&m);
        deque<int> d;
        int tempsum=0;
        for(int i=0; i<n; i++){
                scanf("%d",&val);
                d.push_back(val);
                tempsum+=val;
                while(tempsum>m){
                        tempsum=tempsum-d[0];
                        d.pop_front();
                }
                sum = max(sum, tempsum);
        }
        printf("%d",sum);

}

