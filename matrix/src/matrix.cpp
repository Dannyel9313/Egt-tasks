//============================================================================
// Name        : matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Enter matrix dim " << endl;
	cin >> n;

	int arr[n][n];                       //matrica masiv s ravni redove i koloni

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "enter the elements of array" << endl;
			cin >> arr[i][j];

		}
	}
//		for(int i = 0; i < n; i++){                                             //Displaying the elements of secondary diagonal .
//			for(int j = 0; j < n; j++){
//				if(i + j == n - 1){
//					cout<< arr[i][j]<< " ";
//				}
//			}
//
//		}
//		cout << endl;
//		for(int i = 0; i < n; i++){                                             //Displaying the elements over secondary diagonal .
//					for(int j = 0; j < n; j++){
//						if(i + j < n - 1){
//							cout<< arr[i][j]<<" ";
//						}
//					}
//					cout << endl;
//				}
	for (int i = 0; i < n; i++) { //Displaying the elements under secondary diagonal .
		for (int j = 0; j < n; j++) {
			if (i + j > n - 1) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
