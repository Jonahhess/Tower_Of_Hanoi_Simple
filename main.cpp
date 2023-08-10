#include <iostream>
using namespace std;

void TowerOfHanoi(char source, char destination, char temp, int i) {
    if (i > 0) {
        TowerOfHanoi(source,temp,destination,i-1);
        printf("move disc from %c to %c", source, destination);
        TowerOfHanoi(temp,destination,source,i-1)
    }
    
}


int main() {
    TowerOfHanoi('A', 'B' 'C', 3);
    system("pause");
}