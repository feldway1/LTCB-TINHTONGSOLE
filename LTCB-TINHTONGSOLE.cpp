#include <iostream>
using namespace std;
int main() {
	int sonhap, tongsole = 0;
	cout << "Nhap so:"; cin >> sonhap;
	cout << "Tong cac so le:\n";
	for (int i = 0; i <= sonhap; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
			tongsole += i;
		}

	}
	cout << "\nTong cac so le:" << tongsole;
}