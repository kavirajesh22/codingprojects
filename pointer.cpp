#include <iostream>
#include <stdio.h>
using namespace std;
#include <math.h>

void update(int *pa,int *pb) {
    // Complete this function 
    int c = *pa;
    int d = *pb;
    *pa= *pa+d;
    *pb= abs(c-d);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

}
