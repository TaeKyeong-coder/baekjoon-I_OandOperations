#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    cout << fixed; //�Ҽ��� ���� 
    cout.precision(9); //�Ҽ��� �Ʒ� 9�� ��� 
    cout << A/(double)B;
    
    return 0;
}
