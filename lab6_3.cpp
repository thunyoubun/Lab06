#include<iostream>
using namespace std;

char before(char x){
	
	char y = x;

	if(y == 'A'){
			y = 'Z';
			return y;
	}
	
	if(y >= 'A' && y <= 'Z' ){
		return y-1;
	}else{
		return '0';
	}
    
	
	

	
	


    
	

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

