#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int const MOD = 1e9 + 7;
int const maxn = 1e7 + 1;
struct score {
	int toan, van, anh;
};
int dem = 0;
class Candidate {
	private:
		int ms;
		string date;
		score diem;
		string Hovaten;
	public:
		void Nhap();
		void Xuat();
		bool check();
		
};
bool Candidate::check(){
	return (diem.toan + diem.van + diem.anh) > 15;
}
void Candidate::Nhap(){
	ms = ++dem;
	cin.ignore();
	cout << "Nhap vao ten: ";getline(cin,Hovaten);
	cout << "Nhap vao ngay sinh: ";cin >> date;
	cout << "Nhap diem toan: ";cin >> diem.toan;
	cout << "Nhap vao diem van: ";cin >> diem.van;
	cout << "Nhap vao diem anh: ";cin >> diem.anh;
}
void Candidate::Xuat(){
	cout << ms << " " << Hovaten << " " << date << " " << diem.toan << " " << diem.van << " " << diem.anh << endl; 
}
int main() {
	int n; cin >> n;
	Candidate a[1000];
	for(int i = 0;i < n; i++){
		a[i].Nhap();
	}
	for(int i = 0;i < n; i++){
		if(a[i].check() == true){
			a[i].Xuat();
		}
	}
}