#include<iostream>
using namespace std;

int main() {
int num1;
int num2;
int max;
int min;
int temp;

cout<<"Enter First Number: ";
cin>>num1;

cout<<"Enter Second Number: ";
cin>>num2;


if (num1 > num2){
	max = num1;
	min = num2;
} else {
	max = num2;
	min = num1;
}

while (min != 0) {
	temp = min;
	min = max % min;
	max = temp;
}
	
	cout <<"The HCF is "<<max;
	
	return 0;
}













