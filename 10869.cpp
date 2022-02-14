/*두 자연수 A와 B가 주어진다. 
이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. */

#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;
	
	//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
	
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B;
}
