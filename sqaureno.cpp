#include <iostream>
using namespace std;

void noOfSquares(int input) {
	int squares=0;
	for(size_t i=0;i<=input;i++){
		squares += i*i;
	}
	cout<<squares<<endl;
}
int main() {
	int input;
	cin>>input;
	while(input!=0){
		noOfSquares(input);
		cin>>input;
	}
	return 0;
}