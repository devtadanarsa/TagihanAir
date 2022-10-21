#include <stdio.h>
#include <stdlib.h>
#define JATUH_TEMPO 25

void detailPembayaran(char namaLengkap[], char alamat[], int pembayaran, char klpPelanggan[], char golongan[], int tglBayar){
	system("clear");
	printf("|| ================================================== ||\n");
	printf("||                   DETAIL PEMBAYARAN                ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Nama : %s \n", namaLengkap);
	printf("|| Alamat : %s \n", alamat);
	printf("|| Kelompok Pelanggan : %s                        ||\n", klpPelanggan);
	printf("|| Golongan : %s                            ||\n", golongan);                        
	printf("|| Tanggal Bayar : %d - 10 2022                       ||\n", tglBayar);
	printf("|| Jatuh Tempo : 25 - 10 - 2022                       ||\n");
	printf("|| Denda : Rp 0                                       ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Total Bayar : Rp %d \n", pembayaran);
}

void formulirD11(){
	system("clear");
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);

	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 1780;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2060;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 5820;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD12(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D1 - 2";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2060;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2340;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 5940;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD13(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D1 - 3";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6340;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9200;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9600;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD14(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D1 - 4";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6420;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9350;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9650;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);

}

void formulirD21(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D2 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2340;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2620;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6000;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD22(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D2 - 2";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2620;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2900;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6060;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD23(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D2 - 3";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6490;
	}else if(pemakaianBulanIni - pemakaianBulanLalu <= 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9500;
	}else if(pemakaianBulanIni - pemakaianBulanLalu > 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9800;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD24(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D2 - 4";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6570;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9650;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9950;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD31(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D3 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 2900;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3180;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6120;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD32(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D3 - 2";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3180;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3460;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6120;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD33(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D3 - 3";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6640;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9800;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10100;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD34(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D3 - 4";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6720;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9950;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10250;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD41(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D4 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3460;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3740;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6240;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD42(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D4 - 2";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 3740;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 4020;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6300;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD43(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D4 - 3";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6790;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10100;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10400;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirD44(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "D4 - 4";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 6870;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10250;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10550;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirE11(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "E1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9200;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9850;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10950;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirE12(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "E1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9500;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10150;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 11250;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirE13(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "E1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 9800;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10450;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 11550;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirE14(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "E1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10100;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10750;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 11850;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void formulirE21(){
	system("clear");
	float pemakaianBulanIni, pemakaianBulanLalu;
	int pembayaran, tglBayar;
	char namaLengkap[100], alamat[100];
	char klpPelanggan[] = "E1 - 1";
	char golongan[] = "Rumah Tangga";
	printf("|| ================================================== ||\n");
	printf("||                        FORMULIR                    ||\n");
	printf("|| ================================================== ||\n");
	getchar();
	printf("|| Nama Lengkap : ");
	scanf("%[^\n]", namaLengkap);
	getchar();
	printf("|| Alamat : ");
	scanf("%[^\n]", alamat);
	getchar();
	printf("|| Pemakaian bulan ini (m3) : ");
	scanf("%f", &pemakaianBulanIni);
	printf("|| Pemakaian bulan lalu (m3) : ");
	scanf("%f", &pemakaianBulanLalu);
	printf("|| Tanggal Bayar : ");
	scanf("%d", &tglBayar);
	if(pemakaianBulanIni - pemakaianBulanLalu < 10){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 10400;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 20){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 11050;
	}else if(pemakaianBulanIni - pemakaianBulanLalu < 30){
		pembayaran = (pemakaianBulanIni - pemakaianBulanLalu) * 12150;
	}
	detailPembayaran(namaLengkap, alamat, pembayaran, klpPelanggan, golongan, tglBayar);
}

void dayaListrikA(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      DAYA LISTRIK                  ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 450 VA                                         ||\n");
	printf("|| (2) 900 VA                                         ||\n");
	printf("|| (3) 1300 VA                                        ||\n");
	printf("|| (4) >1300 VA                                       ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih daya listrik yang anda gunakan, masukkan     ||\n");
	printf("|| angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){
		case 1 :
			formulirD11();
			break;	
		case 2 :
			formulirD12();
			break;
		case 3 :
			formulirD13();
			break;
		case 4 :
			formulirD14();
			break;
		default :
			dayaListrikA();		
	}
}

void dayaListrikB(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      DAYA LISTRIK                  ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 450 VA                                         ||\n");
	printf("|| (2) 900 VA                                         ||\n");
	printf("|| (3) 1300 VA                                        ||\n");
	printf("|| (4) >1300 VA                                       ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih daya listrik yang anda gunakan, masukkan     ||\n");
	printf("|| angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){
		case 1 :

			formulirD21();
			break;
		case 2 :
			formulirD22();
			break;
		case 3 :
			formulirD23();
			break;
		case 4 :
			formulirD24();
			break;
		default :
			dayaListrikB();
	}
}

void dayaListrikC(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      DAYA LISTRIK                  ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 450 VA                                         ||\n");
	printf("|| (2) 900 VA                                         ||\n");
	printf("|| (3) 1300 VA                                        ||\n");
	printf("|| (4) >1300 VA                                       ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih daya listrik yang anda gunakan, masukkan     ||\n");
	printf("|| angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){	
		case 1 :
			formulirD31();
			break;
		case 2 :
			formulirD32();
			break;
		case 3 :
			formulirD33();
			break;
		case 4 :
			formulirD34();
			break;
		default :
			dayaListrikC();
	}
}

void dayaListrikD(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      DAYA LISTRIK                  ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 450 VA                                         ||\n");
	printf("|| (2) 900 VA                                         ||\n");
	printf("|| (3) 1300 VA                                        ||\n");
	printf("|| (4) >1300 VA                                       ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih daya listrik yang anda gunakan, masukkan     ||\n");
	printf("|| angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){
		case 1 :
			formulirD41();
			break;
		case 2 :
			formulirD42();
			break;
		case 3 :
			formulirD43();
			break;
		case 4 :
			formulirD44();
			break;
		default :
			dayaListrikD();	
	}
}

void dayaListrikE(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      DAYA LISTRIK                  ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 450 VA                                         ||\n");
	printf("|| (2) 900 VA                                         ||\n");
	printf("|| (3) 1300 VA                                        ||\n");
	printf("|| (4) >1300 VA                                       ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih daya listrik yang anda gunakan, masukkan     ||\n");
	printf("|| angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){
		case 1 :
			formulirE11();
			break;
		case 2 :
			formulirE12();
			break;
		case 3 :
			formulirE13();
			break;
		case 4 :
			formulirE14();
			break;
		default :
			dayaListrikD();	
	}
}

void golRumahTangga(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                 LEBAR JALAN DEPAN RUMAH            ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 0 - 3.99 meter                                 ||\n");
	printf("|| (2) 4 - 6.99 meter                                 ||\n");
	printf("|| (3) 7 - 10 meter                                   ||\n");
	printf("|| (4) >10 meter                                      ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih lebar jalan depan rumah anda, masukkan angka ||\n");
	printf("|| Di dalam () : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			dayaListrikA();
			break;
		case 2 :
			dayaListrikB();	
			break;
		case 3 :
			dayaListrikC();
			break;
		case 4 :
			dayaListrikD();
			break;		
		default :
			golRumahTangga();	
	}

}

void golUsaha(){
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                 LEBAR JALAN DEPAN RUMAH            ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) 0 - 6.99 meter                                 ||\n");
	printf("|| (2) 7 - 10 meter                                   ||\n");
	printf("|| (3) >10 meter                                      ||\n");
	printf("||                                                    ||\n");
	printf("|| Pilih lebar jalan depan usaha anda, masukkan angka ||\n");
	printf("|| Di dalam () : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			dayaListrikE();
			break;
		case 2 :
			golUsaha();	
			break;
		default :
			golUsaha();	
	}
}

void golonganRumah(){
	system("clear");
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                       GOLONGAN                     ||\n");
	printf("|| ================================================== ||\n");
	printf("|| (1) Rumah Tangga                                   ||\n");
	printf("|| (2) Usaha                                          ||\n");
	printf("||                                                    ||\n");
	printf("|| Golongan rumah anda, masukkan angka di dalam () : ");
	scanf("%d", &pilihan);
	printf("|| ================================================== ||\n");
	switch(pilihan){
		case 1 :
			golRumahTangga();
			break;
		case 2 :
			golUsaha();
			break;	
		default :
			printf("Input anda salah! Ulangi Input!");
			golonganRumah();
	}
}

int main(){
	golonganRumah();
	return 0;
}
