#include <iostream>
using namespace std;
class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};
void mahasiswa::showNim() { //implementasi method deluar class
	cout << "no induk =" << nim << endl;

}
