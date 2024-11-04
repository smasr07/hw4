#include <iostream>
#include <cmath>
using namespace std;
int floorFunction (double number ){
    return floor(number);

}
int ceilingFunction (double number ) {
    return ceil(number);
}
int main() {
    double num;
    cin >> num;
    cout << floorFunction(num) << endl;
    cout << ceilingFunction(num) << endl;
}

