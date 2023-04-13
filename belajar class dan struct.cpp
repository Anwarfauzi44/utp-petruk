#include <iostream>
using namespace std;
//struct mahasiswa{
//	string nama, npm;
//};
//class mahasiswa{
//	private:
//		string nama;
//	public:
//		void setnama(string nama){
//			this->nama = nama;
//		}
//		string getnama(){
//			return nama;
//		}
//};
//
//int main(){
//	mahasiswa mhs;
//	cin>>mhs.nama;
//	cin>>mhs.npm;
//	cout<<mhs.nama<<" "<<mhs.npm;
//	mhs.setnama("hamid");
//	cout<<mhs.getnama();
//}
class luaslingkaran{
	private://untuk menyimpan tipe data
		float phi=3.14;
		float r;
	public://untuk menyimpan fungsi
	//seter untuk memasukan nilai
		void setphi(float phi=3.14){
			this->phi=3.14;
		}
		void setr(float r){
			this->r=r;
		}
		//geter untuk mengembalikan nilai
		float getphi(){
			return phi;
		}
		float getr(){
			return r;
		}
		float getluas(){
			return phi*r*r;
		}
};
int main(){
	luaslingkaran l;//memeanggil class
	float a;//tipe data baru untuk memasukan r
	cin>>a;
	l.setr(a);//masukan nilai r
	cout<<"phi : "<<l.getphi()<<endl;//memanggil geter phi
	cout<<"r : "<<l.getr()<<endl;//memanggil geter r
	cout<<l.getluas();//memanggil geter luas
}

