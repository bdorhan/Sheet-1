#include <iostream>

using namespace std;

//maximum and minimum value
void maxmin(int a[20]) {
	int max=0;
	int min=0;
	for(int i =0;i<20;i++) {
		if(a[i]<min) {
			min=a[i];
		}
	}
	for(int i =0;i<20;i++) {
		if(a[i]>max) {
			max=a[i];
		}	
	}
	cout << "Maximum number is " << max << endl;
	cout << "Minimum number is " << min << endl;
}

//the average of positive number
void posAvg(int a[20]) {
	float sum=0;
	int count=0;
 	float avg;
	for(int i=0;i<20;i++) {
		if(a[i]>0) {
			sum=sum+a[i];
			count++;
		}
	}
	avg=sum/count;
	cout << "The average of the positive numbers is "<<avg<<endl;
}

//the sum of all numbers
void theSum(int a[20]){
	int sum=0;
	for(int i=0;i<20;i++) {
		sum=sum+a[i];
	}
	cout << "The sum of all numbers is " << sum << endl;
}

//funtion of sum of negative numbers
void  negSum(int a[20]) {
	int sum=0;
	for(int i=0;i<20;i++) {
		if(a[i]<0) {
			sum=sum+a[i];
		}		
	}
	cout << "Sum of negative numbers is " << sum << endl;
}

//function of sum of positive numbers
void  posSum(int a[20]) {
	int sum=0;
	for(int i=0;i<20;i++) {
		if(a[i]>0) {
			sum=sum+a[i];
		}		
	}
	cout << "Sum of positive numbers is " << sum << endl;
}

//negative element lister
void negCheck(int a[20]){
	for(int i=0;i<20;i++){
		if(a[i]<0) {
			cout << a[i] << " ";
		}
	}
}


int main(int argc, char** argv) {
	//Declaring an array and filling it
	int numArray[20];
	cout << "Enter 20 number; " << endl;
	for(int i=0;i<20;i++){
		cin >> numArray[i];
	}
	
	negCheck(numArray);
	cout << endl;
	posSum(numArray);
	negSum(numArray);
	theSum(numArray);
	posAvg(numArray);
	maxmin(numArray);
//	//for test purposes
//	for(int i =0; i<20;i++) {
//		cout << numArray[i] << endl;
//	}
	
	return 0;
}
