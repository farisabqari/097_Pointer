#include <iostream>
using namespace std;
class siswa;
class orang {
private:
	string nama;
public:
	void setNAma(string pNama);
	friend class siswa;
};
class siswa {
private:
	int id;
public:
	void setId(int pId);
	void displayALL(orang& a);
};
void siswa::displayALL(orang& a) {
	cout << id << endl a.nama

}
void siswa::setId(int pid) {

}