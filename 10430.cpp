/*(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?

(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?

세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
*/
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A;
    cin >>B;
    cin >> C;
    //첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
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
