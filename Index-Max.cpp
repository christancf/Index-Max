#include<iostream>
using namespace std;

int searchKey(int num, int a[10]) {
	
	for (int i = 0; i < 10; ++i) {
		if (num == a[i]) {
			return i;
		}
	}
	return -1;
}
int findMax(int no[10]) {
	int b;

	for (int i = 0; i < 10; ++i) {
		for (int j = i; j < 10; ++j) {
			if (no[i] >= no[j]) {
				b = no[i];
				no[i] = no[j];
				no[j] = b;
			}
		}
	}
	return no[9];
}
int main() {
	
	int numbers[10] = {};
	int n;

	for (int i = 0; i < 10; ++i) {
		cout << "Enter number" << i + 1 << ": ";
		cin >> numbers[i];
	}
	cout << "Enter a NUmber: ";
	cin >> n;
	if (searchKey(n, numbers) == -1) {
		cout << "Value not found" << endl;
		return -1;
	}
	cout << "Index of the Element: " << searchKey(n, numbers) << endl;
	cout << "Maximum: " << findMax(numbers) << endl;
	return 0;
}
