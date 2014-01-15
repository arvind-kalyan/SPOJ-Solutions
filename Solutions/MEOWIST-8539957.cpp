/*
	Author - Arvind K
	College - BITS Pilani
*/


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct person{
    string name;
    int age;
};
bool cond(struct person a,struct person b)
{
    if(a.age>b.age) return true;
    else if(a.age<b.age) return false;
    return a.name<b.name;
}
int main()
{
    vector<struct person> people;
    struct person tmp;
    int age;string name;int i;
    while(cin>>name>>age)
    {
        tmp.name=name;
        tmp.age=age;
        people.push_back(tmp);


    }
    sort(people.begin(),people.end(),cond);
    int x=people.size();
    for(i=0;i<x;i++)
    {
        cout<<people[i].name<<endl;
    }
    return 0;
}

