#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    cout << fixed; //소수점 고정 
    cout.precision(9); //소수점 아래 9개 출력 
    cout << A/(double)B;
    
    return 0;
}
