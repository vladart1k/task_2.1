// Lab_02.cpp // < ��������� ��������� ��������� > // ����������� ������ � 2.2 // ˳��� ��������. // ������ 0.1 

#include <iostream> 

using namespace std;

int main() {
    double x;  // ������� ��������    
    //double z1; // ��������� ���������� 1-�� ������   
    double z2; // ��������� ���������� 2-�� ������ 
    double Pi = 4 * atan(1.);

    cout << "x = "; cin >> x;

    //z1 = cos(x) + sin(x) + cos(3*x) + sin(3*x);
    z2 = 2*sqrt(2)*cos(x)*sin(Pi/4 + 2*x);

    cout << endl;
    //cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}