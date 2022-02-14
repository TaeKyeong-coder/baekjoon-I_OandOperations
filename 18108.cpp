#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int arr[6][9] ={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}, 
					{19,20,21,22,23,24,25,26,27},{28,29,30,31,32,33,34,35,36},
					{37,38,39,40,41,42,43,44,45},{46,47,48,49,50,51,52,53,54}};

	string C;
	int T;
	cin >> T; //테스트 케이스의 개수 
	
	int arr_C_turn[T][100];
	int P[T];
	int num_count[4];
	int count = 0;
	
	for(int i = 0; i<=T; i++) {
		getline(cin, C); 
		stringstream ss(C);
		while(!ss.eof() && count <100) {
			ss >> arr_C_turn[i-1][count++]; 
		}
		P[i-1] = arr_C_turn[i-1][count-1];
		num_count[i-1] = count;
		count = 0;
	}
	
	int temp[9] = {0,0,0,0,0,0,0,0,0};

	for(int i = 0; i < T; i++) {
		 for(int k = 0; k<num_count[i]; k++){//왼쪽 세로 위로 회전
			if(arr_C_turn[i][k] == 1){
				for(int j = 0; j<7; j = j+3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[2][j];
					arr[2][j] = arr[3][j];
					arr[3][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 2){
				for(int j = 1; j<8; j = j+3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[2][j];
					arr[2][j] = arr[3][j];
					arr[3][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 3){
				for(int j = 2; j<9; j=j+3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[2][j];
					arr[2][j] = arr[3][j];
					arr[3][j] = arr[0][j];
					arr[0][j] = temp[j];
				}
			}
			//왼쪽 아래 회전
			else if(arr_C_turn[i][k] == 4){
				for(int j=6; j>=0; j=j-3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[0][j];
					arr[0][j] = arr[3][j];
					arr[3][j] = arr[2][j];
					arr[2][j] = temp[j];
				}
			}

			else if(arr_C_turn[i][k] == 5){
				for(int j=7; j>0; j=j-3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[0][j];
					arr[0][j] = arr[3][j];
					arr[3][j] = arr[2][j];
					arr[2][j] = temp[j];
				}
			}
				
			else if(arr_C_turn[i][k] == 6){
				for(int j=8; j>1; j=j-3){
					temp[j] = arr[1][j];
					arr[1][j] = arr[0][j];
					arr[0][j] = arr[3][j];
					arr[3][j] = arr[2][j];
					arr[2][j] = temp[j];
				}
			}

			else if(arr_C_turn[i][k] == 7){
				for(int j=0; j<3; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[5][j];
					arr[5][j] = arr[3][j];
					arr[3][j] = arr[4][j];
					arr[4][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 8){
				for(int j=3; j<6; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[5][j];
					arr[5][j] = arr[3][j];
					arr[3][j] = arr[4][j];
					arr[4][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 9){
				for(int j=6; j<9; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[5][j];
					arr[5][j] = arr[3][j];
					arr[3][j] = arr[4][j];
					arr[4][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 10){
				for(int j=0; j<3; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[4][j];
					arr[4][j] = arr[3][j];
					arr[3][j] = arr[5][j];
					arr[5][j] = temp[j];
				}
			}
			
			else if(arr_C_turn[i][k] == 11){
				for(int j=3; j<6; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[4][j];
					arr[4][j] = arr[3][j];
					arr[3][j] = arr[5][j];
					arr[5][j] = temp[j];
				}
			}
			
			else if (arr_C_turn[i][k] == 12){
				for(int j=6; j<9; j=j++){
					temp[j] = arr[1][j];
					arr[1][j] = arr[4][j];
					arr[4][j] = arr[3][j];
					arr[3][j] = arr[5][j];
					arr[5][j] = temp[j];
				}
			}
			cout << "#" << i+1 << " ";
			for(int j = 0; j<9; j++){
				cout << arr[ arr_C_turn[i][num_count[i]]][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}

