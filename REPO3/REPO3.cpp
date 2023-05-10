#include <iostream>
using namespace std;
class siswa;
class orang {
private:
	string nama;
public:
	void setNAma(string pNama);
	friend class siswa;
