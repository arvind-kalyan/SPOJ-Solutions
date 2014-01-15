#include <iostream>

int main(void) {
char c, d=10;
while(std::cin.get(c) && (c!='2' || d!='4') && std::cout.put(d))
d=c;
}

