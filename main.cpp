#include <iostream>

using namespace std;

int nhan(int &a, int &b) {
    x = a*b;
    print("ngo thi anh, a*b= %d\n", x);
    cout << "Cong da sua ham nhan";
    return x;
}

int tru(int &a, int &b) {
    int tru = a-b;
    print("minh, a-b= %d\n", tru);
    return tru;
}

int cong(int &a, int &b) {
    cout << "Cong" << a + b;
    cout << "minh da sua ham cong" ;
	  return a + b;
}

int main() {
    cong(1,2);
    int a =5;
    int b =3;
    tru(&a, &b)
    nhan(&a,&b);
    return 0
}