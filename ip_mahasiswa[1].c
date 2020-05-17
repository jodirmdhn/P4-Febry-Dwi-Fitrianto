#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
float awal()
{
	cout<<"--------------------------------------------------------------------------" <<endl;
	cout<<"        DAFTAR NILAI MAHASISWA TEKNIK ELEKTRO UNIVERSITAS MATARAM         " <<endl;
}
float tampilan()
{
	cout<<"==============================================================================================" <<endl;
	cout<<"                                       DAFTAR NILAI"<<endl;
	cout<<"                                  MAHASISWA TEKNIK ELEKTRO"<<endl;
		cout<<"==============================================================================================" <<endl;
		cout<<"NO. NAMA MAHASISWA  MATKUL                   NILAI                                        GRADE"<<endl;
		cout<<"==============================================================================================" <<endl;
		cout<<"                          |KEHADIRAN| |TUGAS|    |QUIZ|     |UTS|   |UAS|    |NILAI AKHIR|"<<endl;
		cout<<"==============================================================================================" <<endl;
	}
	float terakhir()
	{
		cout<<"==============================================================================================" <<endl;
	}
	int main(intargc, char** argv[]) {
		inti;
		intjum;
		char ulang;
		float NIM [10];
		char nama_mahasiswa[50][100];
		char matakuliah[50][100];
		char semester[50][100];
		float nilai_KEHADIRAN [10];
		float nilai_TUGAS [10];
		float nilai_QUIZ [10];
		float nilai_UTS [10];
		float nilai_UAS [10];
		float nilai_NILAIAKHIR [10];
		do

	{
		awal();
		cout<<"masukkanjumlahmahasiswa = ";
		cin>>jum;
		cout<<endl;
		terakhir();

		for(i=1;i<=jum;i++)
		{
			cout<<"==============================================================================================" <<endl;
			cout<<"mahasiswake-"<<i<<endl;
			cout<<"NIM\t\t= ";cin>>NIM[i];
		cout<<"NamaMahasiswa\t= ";cin>>nama_mahasiswa[i];
			cout<<"Mata Kuliah\t= ";cin>>matakuliah[i];
			cout<<"semester\t= ";cin>>semester[i];
		cout<<"KEHADIRAN\t= ";cin>>nilai_KEHADIRAN[i];
			cout<<"NilaiTugas\t= ";cin>>nilai_TUGAS[i];
			cout<<"Nilai QUIZ\t= ";cin>>nilai_QUIZ[i];
			cout<<"Nilai UTS\t= ";cin>>nilai_UTS[i];
			cout<<"Nilai UAS\t= ";cin>>nilai_UAS[i];
			nilai_NILAIAKHIR [i]=(nilai_KEHADIRAN[i]*0.1)+(nilai_TUGAS[i]*0.2)+(nilai_QUIZ[i]*0.2)+(nilai_UTS[i]*0.25)+(nilai_UAS[i]*0.25);
			cout<<endl;
		}	cout<<endl;
	tampilan();

	for(i=1;i<=jum;i++)
	{
		cout<<setiosflags(ios::left)<<""<<setw(4)<<i;
		cout<<setiosflags(ios::left)<<""<<setw(10)<<nama_mahasiswa[i];
		cout<<setiosflags(ios::left)<<""<<setw(13)<<matakuliah[i];
		cout<<setiosflags(ios::left)<<""<<setw(12)<<nilai_KEHADIRAN[i];
		cout<<setiosflags(ios::left)<<""<<setw(11)<<nilai_TUGAS[i];
		cout<<setiosflags(ios::left)<<""<<setw(10)<<nilai_QUIZ[i];
		cout<<setiosflags(ios::left)<<""<<setw(10)<<nilai_UTS[i];
		cout<<setiosflags(ios::left)<<""<<setw(10)<<nilai_UAS[i];
		cout<<setiosflags(ios::left)<<""<<setw(12)<<nilai_NILAIAKHIR[i];

		if(nilai_NILAIAKHIR[i]>=80)
		cout<<setprecision(4)<<" "<<"A";
		else if(nilai_NILAIAKHIR[i]>=70)
		cout<<setprecision(4)<<" "<<"B";
		else if(nilai_NILAIAKHIR[i]>=60)
		cout<<setprecision(4)<<" "<<"C";
		else if(nilai_NILAIAKHIR[i]>=50)
		cout<<setprecision(4)<<" "<<"D";
		else if(nilai_NILAIAKHIR[i]<=50)
		cout<<setprecision(4)<<" "<<"E";
		cout<<endl;

	}
	    cout<<"==============================================================================================" <<endl;
	cout<<endl;
	cout<<"ApakahAndaInginMengulanginyaKembali (Y/T)?";
	cin>>ulang;
	    system("clc");
	}
	    while((ulang=='Y')||(ulang=='y'));
	cout<<endl<<endl;

		return 0;iiii.	}
