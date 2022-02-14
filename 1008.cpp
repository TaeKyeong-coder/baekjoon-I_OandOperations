/*두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.*/
#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    
    double A1 = static_cast<double>(A); //타입 변환 연산자 사용 
    double B1 = static_cast<double>(B); //int를 double로 변환 
    
    cout.setf(ios::fixed); //cout << fixed;랑 같은 표현 
    cout.precision(9);
    cout << A1/B1;
    
    return 0;
}
