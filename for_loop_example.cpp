#include <iostream>
using namespace std;

int main() {


int numberOfAdditions = 6;

double lista[10] = {0.0, 11.2, 10.1, 30.9, 45.3, 23.0, 21.0, 98.0, 95.0, 1.2};
double y = 0.0;
for (int i = 0; i<10; i++){
if (i<numberOfAdditions){

	y = y + lista[i];
}

}
cout<<y<<endl;
}