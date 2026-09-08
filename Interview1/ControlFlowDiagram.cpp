#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
//control flow diagram
/*
Edge cases:
bytes written over 19
bytes written equal to 19
*/

 //initial variables
 int bytesWritten = 2;
 int bufferLimit = 19;
 int frameSize = 5;
 bool memoryAligned;
//checks if bytesWritten is going to exceed the buffer limit and adds a new measurement if it wont
 while(bufferLimit - bytesWritten > frameSize) {
    bytesWritten += frameSize;
 }
 //checks if bytesWritten is divisible by 4 to determine if memory is aligned
 if(bytesWritten%4 == 0){
    memoryAligned = true;
 }
 else{
    memoryAligned = false;
 }
//outputs whether or not memory is aligned
cout << "Memory aligned: " << memoryAligned << endl;
return 0;
}