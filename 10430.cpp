/*(A+B)%C�� ((A%C) + (B%C))%C �� ������?

(A��B)%C�� ((A%C) �� (B%C))%C �� ������?

�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A;
    cin >>B;
    cin >> C;
    //ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
    cout <<(A+B)%C<<endl;
    cout<<(A%C + B%C)%C <<endl;
    cout<<(A*B)%C<<endl;
    cout<<(A%C * B%C)%C;
    
    return 0;
}

int changeYear(int year){
	int newYear = year - 543;
	return newYear;
}
