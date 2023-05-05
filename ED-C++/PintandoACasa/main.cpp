#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    float ctt1;
    float ctt2;
    float hipo;
    float semP;
    float area;
    float root;

    cin >> ctt1;
    cin >> ctt2;
    cin >> hipo;

    semP = (ctt1 + ctt2 + hipo)/2;

    root = semP*(semP - ctt1)*(semP - ctt2)*(semP - hipo);
    area = sqrt(root);
    cout << setprecision(3) << area;

    return 0;
}
