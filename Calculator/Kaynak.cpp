#include <iostream>
using namespace std;
int main() {
	float num1;
	float num2;
	char islem;

	cout << "iki sayi giriniz." << endl;
	cin >> num1;
	cin >> num2;
	cout << "yapmak istediginiz islemin sembolunu seciniz." << endl;
	cin >> islem;

	switch (islem)
	{
	case '+':
		cout <<"cevap:" << num1 + num2;
		break;
	case '-':
		cout <<"cevap:" << num1 - num2;
		break;
	case '*':
		cout <<"cevap:" << num1 * num2;
		break;
	case '/':
		if (num2 == 0) {
			cout << "sifir ile bolunemez." << endl;
		}
		cout <<"cevap:" << num1 / num2;
		break;
	default:
		cout << "lutfen gecerli karakterler giriniz." << endl;
	}
	return 0;
}