//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//	char nama[]="hamid";
//	char prodi[]="ilkom";
//	cout<<nama<<endl;
//	cout<<strlen(nama)<<endl;//strlen agar karakter null tidak dibaca
//	
//	cout<<prodi<<endl;
//	cout<<sizeof(prodi)<<endl;//sizeof karakter null dibaca
//	cout<<endl;
//	for (int i=0;i<strlen(nama);i++){
//		cout<<nama[i]<<" "<<(nama[i]=='\0'?"Null":"Not Null")<<endl;
//	}
//	cout<<endl;
//	for (int i=0;i<sizeof(prodi);i++){
//		cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
//	}

//	char str[]={'i','l','k','o','m','\0'};
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
//	char nama[15];
//	char npm[10];
//	cin.get(nama,15);
//	cin.ignore();
//	cin.get(npm,10);
//	
//	cout<<"nama : " <<nama<<endl;
//	cout<<"npm : "<<npm<<endl;
//	char karakter;
//		while (cin.get(karakter)){
//			if(karakter == 'a')
//			cin.putback('x');
//			else
//				cout<<karakter;
//			
//		}
//	
//	char fname[50] = "imran";
//	char lname[50]= " hamid";
//	char *fullname = strcat(fname, lname);//strcat untuk menyatukan char atau string
//	cout<<fullname;

//	char* endptr;
//	char str1[] = "011hamid";
//	long value1 = strtol(str1, &endptr, 2);//mengubag variabel str1 menhjadi long
//	cout<<value1<<endl;
//	cout<<endptr<<endl;//endptr untuk memisahkan angka dengan huruf
//	
//	char str2[] = "110hamid";
//	unsigned long value2 = strtoul(str2, &endptr, 8);//mengubah str2 menjadi unsigned long
//	cout<<value2<<endl;
//	cout<<endptr<<endl;
//	
//	char str3[] = "1hamid";
//	double value3 = strtod(str3, &endptr);// mengubah str3 menjadi double
//	cout<<value3<<endl;
//	cout<<endptr<<endl;
	
//	char data[2][100]={"2217imran",
//					   "2257hamid"};
//	char* endptr;
//	for(int i=0;i<2;i++){
//		long value = strtod(data[i], &endptr);
//		cout<<"nama : "<<endptr<<endl;
//		cout<<"npm : "<<value<<endl;
//		cout<<endl;
//	}
//}
