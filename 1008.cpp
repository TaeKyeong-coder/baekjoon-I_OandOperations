/*�� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    
    double A1 = static_cast<double>(A); //Ÿ�� ��ȯ ������ ��� 
    double B1 = static_cast<double>(B); //int�� double�� ��ȯ 
    
    cout.setf(ios::fixed); //cout << fixed;�� ���� ǥ�� 
    cout.precision(9);
    cout << A1/B1;
    
    return 0;
}
