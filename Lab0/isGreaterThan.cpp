#include <iostream>
#include <cstdlib>
using namespace std;

/**
 * isGreatherThan returns whether x is greater than y
 * 
 * return x> y
 */
bool isGreaterThan(double x, int y) {
    if(x > y){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    double x = 33;
    int y = 7;
    if(isGreaterThan(x,y)){
        printf("%f > %i\n", x, y);
    }
    else{
        printf("%f <= %i\n", x, y);
    }

}