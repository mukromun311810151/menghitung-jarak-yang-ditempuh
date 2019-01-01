#include <iostream>
using namespace std;

int main ()
{
	int kecepatan, jarak , waktu;
	
	cout <<"masukkan kecepatan : ";
	cin >> kecepatan;
	
	cout << "masukkan waktu : ";
	cin >> waktu;
	
	jarak = kecepatan * waktu; // s = v * t
	cout << " jarak yang ditempuh adalah : " <<jarak;
	
	return 0;
	
}
