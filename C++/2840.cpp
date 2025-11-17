// 2840 - Balloon++ 
#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.1415
using namespace std;

float SphereQTD(int radius, int volumn){

    float k = 4.0/3.0;
    float radius3 = radius * radius * radius;
    float qtd =volumn/(k * PI * radius3);
    return qtd;
}

int main(){
    int r,l;
    cin >> r >> l;
    cout << (int)floor(SphereQTD(r, l)) << endl;
    return 0;
}
