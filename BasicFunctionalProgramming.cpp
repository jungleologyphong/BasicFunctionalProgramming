//------------------------------------//
    //Ho va ten : Duong Tan Nhat Phong
    //MSSV : PS11601
    //Nhap mon lap trinh - COM108
    //Assignment Lap trinh C
//-----------------------------------//
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();
int main (){
	//--------------------------Dang Nhap-------------------------------------//
	char userDk[100];
	char passDk[100];
	char user[100];
	char pass[100];
ReSign:	printf("Xin moi ban dang ki tai khoan de su dung Menu chuc nang!!!\n");
	printf("Xin moi ban nhap vao Username: ");
	scanf("%s", &userDk);
	printf("Xin moi ban nhap vao PassWord bang so : ");
	scanf("%d",  &passDk);
	system("pause");
	system("cls");
	printf("Xin moi ban nhap lai Username va Password  !\n");
    printf("Username:\n");
	scanf("%s",&user);
	printf("Password:\n");
	scanf("%d",&pass);	
	if( strcmp(strlwr(user),userDk)==0 && strcmp(pass,passDk)==0)
	{
		printf("|-------------------Welcom to Menu-------------------| \n");
		goto START;
		
	}
	else
	{
		printf("X------DANG NHAP KHONG THANH CONG-----X\n");
		goto ReSign;	
	}
	//---------------------------------------------------------------------------//
	//--------------Cac chuc nang cua Menu chuong trinh Assignment--------------//
int so;
	do{
START :	printf("|CHAO MUNG DEN VOI MENU CHUC NANG CUA MON LAP TRINH C|\n");
	printf("|----------------------------------------------------|\n");
    printf("|1. |Kiem tra so nguyen                              |\n");
	printf("|2. |Tim uoc so chung va boi so chung cua 2 so       |\n");
	printf("|3. |Chuong trinh tinh tien cho quan karaoke         |\n");
	printf("|4. |Tinh tien dien                                  |\n");
	printf("|5. |Chuc nang doi tien                              |\n");
	printf("|6. |Tinh lai suat vay ngan hang vay tra gop         |\n");
	printf("|7. |Chuong trinh vay tien mua xe                    |\n");
	printf("|8. |Sap xep thong tin sinh vien                     |\n");
	printf("|9. |Game FPOLY-LOTT                                 |\n");
	printf("|10.|Tinh toan phan so                               |\n");
	printf("|11.|Thoat chuong trinh                              |\n");
	printf("|----------------------------------------------------|\n");
	printf("MOI BAN NHAP CAC CHUC NANG (1,2,3,4,5,6,7,8,9,10,11) : ");
	scanf("%d", &so);
	switch (so){
		case 1:
			// Di chuyen den chuc nang so 1
			printf("Chao mung ban den voi chuc nang so 1\n");
			chucNang1();
			break ;
		case 2:
			// Di chuyen den chuc nang so 2
			printf("Chao mung ban den voi chuc nang so 2\n");
			chucNang2();
			break;
		case 3:
			// Di chuyen den chuc nang so 3
			printf("Chao mung ban den voi chuc nang so 3\n");
			chucNang3();
			break;
		case 4:
			// Di chuyen den chuc nang so 4
			printf("Chao mung ban ban den voi chuc nang so 4\n");
			chucNang4();
			break;
		case 5:
			// Di chuyen den chuc nang so 5
			printf("Chao mung ban den voi chuc nang so 5\n");
			chucNang5();
			break;
		case 6:
			// Di chuyen den chuc nang so 6
			printf("Chao mung ban den voi chuc nang so 6\n");
			chucNang6();
			break;
		case 7:
			// Di chuyen den chuc nang so 7
			printf("Chao mung ban den voi chuc nang so 7\n");
			chucNang7();
			break;
		case 8:
			// Di chuyen den chuc nang so 8
			printf("Chao mung ban den voi chuc nang so 8\n");
			chucNang8();
			break;
		case 9:
			// Di chuyen den voi chuc nang so 9
			printf("Chao mung ban den voi chuc nang so 9\n");
			chucNang9();
			break;
		case 10:
			// Di chuyen den voi chuc nang so 10
			printf("Chao mung ban den voi chuc nang so 10\n");
			chucNang10();
						break;
			}
		}while(so<11);
	switch(so){
		case 11:
			//Di chuyen den chuc nang so 11 thoat chuong trinh
			printf("+XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX+\n");
			printf("|         Thoat chuong trinh        |\n");
			printf("|CAM ON BAN DA SU DUNG CHUONG TRINH |\n");
			printf("+XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX+\n");
			break; 
		default :
			printf("Ban da khong chon so 1-->11\n");
			goto START;
			break;
			return 0;		
	}
}
void chucNang1(){
	int x,dem,i;
	char check1;
	do{
	printf(" ----------------------------------------------------------\n");
	printf("|  Xin chao ban den voi chuong trinh KIEM TRA SO NGUYEN    |\n");
	printf(" ----------------------------------------------------------\n");
	printf("Moi nhap vao X :");
	scanf("%d",&x);
	for( i=2;i<x;i++)
	{
		if(x%i==0)
		{
		dem++;
		break;
		}
	}
	if(dem==0,x!=1)
		{
			printf("X = %d La so nguyen to\n", x);
		}
		else
		{
			printf("%d Khong phai so nguyen to\n", x);
		}
	if(x==int(x))
	{
		printf("X La so nguyen.\n");
	}
	else
	{
		printf("X Khong phai so nguyen\n");
	}
	for(i=1;i<x;i++)
	{
		if(i*i==x)
		{
			dem=0;
			dem++;
			break;
		}
	}
	if(dem==1)
	{
			printf(" %d La so chinh phuong\n",x);	
	}
	else
	{
		printf("%d Khong phai so chinh phuong\n",x);
	}
			system("pause");
			system("cls");
	printf("Ban co muon thoat chuc nang 1 - KIEM TRA SO NGUYEN (y or n): ");
	scanf("%s",&check1);
	if(check1== 'y')
		{
			system("pause");
			system("cls");
			break;
		}
	}while(check1 == 'n');
}
void chucNang2(){
	char check2;
	int a,b,uoc_Chung,boi_Chung;
	do{
	do{
	printf("------------------------------------------------------------------\n");
	printf("| Xin chao mung ban den voi chuong trinh tim Uoc Chung, Boi Chung |\n");
	printf("------------------------------------------------------------------\n");
	printf("Nhap vao so a :");
	scanf("%d",&a);
	printf("Nhap vao so b :");
	scanf("%d",&b);
	}while(a<0 && b<0);
	for(uoc_Chung=a;uoc_Chung>=1;uoc_Chung--){
		if(a%uoc_Chung==0 && b%uoc_Chung==0){
			printf("Uoc Chung Lon Nhat cua %d va %d = %d\n",a,b,uoc_Chung);
			break;
		}
	}
	for(boi_Chung=a;boi_Chung<=a*b;boi_Chung++){
		if(boi_Chung%a==0 && boi_Chung%b==0){
			printf("Boi Chung Nho Nhat cua %d va %d = %d\n",a,b,boi_Chung);
			break;	
		}
	}
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang so 2 - TIM UOC CHUNG BOI CHUNG (y or n) : ");
	scanf("%s",&check2);
	if(check2=='y'){
		system("pause");
		system("cls");
		break;
		}
	}while(check2=='n');
}
void chucNang3(){
	int gio_Bat_Dau ,gio_Ket_Thuc , gioHat, d,tien;
	char check3;
		do{
	do{
	printf(" -----------------------------------------------------------\n");
	printf("| Xin chao mung ban den voi chuong trinh TINH TIEN KARAOKE  |\n");
	printf(" -----------------------------------------------------------\n");
	printf("Moi ban nhap vao gio bat dau:\n");
	scanf("%d",&gio_Bat_Dau);
	printf("Moi ban nhap vao gio ket thuc :\n");
	scanf("%d",&gio_Ket_Thuc);
	gioHat= gio_Ket_Thuc-gio_Bat_Dau;
	d = 3*150000;
    if(gio_Bat_Dau>=12 && gio_Ket_Thuc<=23 && gio_Bat_Dau<gio_Ket_Thuc)
    {
    	if(gioHat<=3)
    	{
    		if(gio_Bat_Dau>=14 && gio_Ket_Thuc<=17)
    		{
    			tien = gioHat*150000*90/100;
    			printf("So tien phai thanh toan la : %d VND\n", tien);
    		}
    		else
    		{
    			tien=gioHat*150000;
    			printf("So tien can phai thanh toan la : %d VND\n", tien);
    		}
    	}
    	else 
    	{
    		if(gio_Bat_Dau>=14 && gio_Bat_Dau<=17)
    		{
    			tien= (((gioHat-3)*150000*70/100)+d)*90/100;
				printf("So tien can phai thanh toan la : %d VND\n", tien);
			}
			else 
			{
				tien= (gioHat-3)*150000*70/100+ d;
				printf("So tien can phai thanh toan : %d VND\n", tien);
			}
		}
	}
	else
	{
		printf("Nhap gio sai, gio hoat dong 12H-23H moi ban nhap lai : \n");
			}
	}while (gio_Bat_Dau<12 || gio_Ket_Thuc>23);
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang 3 - TINH TIEN KARAOKE (y or n) : ");
	scanf("%s",&check3);
	if(check3== 'y')
	{
		break;
			}
		}	while(check3 == 'n');	
	}		
void chucNang4(){
	int d;
	float tD,Bac,Bac2,Bac3,Bac4,Bac5;
	char check4;
	do{
	printf(" -----------------------------------------------------------\n");
	printf("|  Xin chao mung ban den voi CHUONG TRINH TINH TIEN DIEN    |\n");
	printf(" -----------------------------------------------------------\n");
	do{
	printf("+ Nhap so kWh da su dung trong thang : +\n");
	scanf("%d",&d);
}while(d<0);
	Bac= 50*1678;
	Bac2=50*1734;
	Bac3=100*2014;
	Bac4=100*2536;
	Bac5=100*2834;
	if(d>0)
	{
		if(d>0 && d<=50)
		{
		tD=d*1678;
		printf("So tien phai tra la : %.2f VND\n",tD,d);
		}
		else if(d>=51 && d<=100)
		{	
		tD=((d-50) * 1734) + Bac;
		printf ("So tien phai tra la : %.2f VND\n",tD,d);
		}
		else if(d>101 && d<=200)
		{
		tD=((d-100) * 2014) + Bac + Bac2;
		printf ("So tien phai tra la : %.2f VND\n",tD,d);
		}
		else if (d>201 && d<=300)
		{
		tD=((d-200)*2536)+Bac+Bac2+Bac3;
		printf ("So tien phai tra la : %.2f VND\n",tD,d);
		}
		else if (d>300 && d<=400)
		{
		tD=((d-300)*2834)+Bac+Bac2+Bac3+Bac4;
		printf ("So tien phai tra la : %.2f VND\n",tD,d);
		}
		else
		{
		tD=((d-400)*2927)+Bac+Bac2+Bac3+Bac4+Bac5;
		printf ("So tien phai tra la : %.2f VND\n",tD,d);
		}
	}
	else 
	{
		printf ("Du lieu sai");
	}
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang 4 TINH TIEN DIEN (y or n) : ");
	scanf("%s",&check4);
	if(check4== 'y')
		{
			system("pause");
			system("cls");
			break;
		}
	}
	while(check4 == 'n');	
}
void chucNang5(){
int soTienCanDoi;
	char check5;
		do{
	do{
	printf("Xin moi ban nhap vao so tien can doi. Luu y menh gia tien Viet Nam tu 1000 - 500000 !!! : ");
	scanf("%d", &soTienCanDoi);
	if (soTienCanDoi==500000){
		printf("So tien doi duoc tu %d la : 2 to 200000 VND , 1 to 100000 VND\n", soTienCanDoi);
	} else if (soTienCanDoi==200000){
		printf("So tien doi duoc tu %d la : 2 to 100000 VND\n", soTienCanDoi); 
	} else if (soTienCanDoi==100000){
		printf("So tien doi duoc tu %d la : 2 to 50000 VND\n",soTienCanDoi); 
	} else if (soTienCanDoi==50000){
		printf("So tien doi duoc tu %d la : 2 to 20000 VND, 1 to 10000 VND\n",soTienCanDoi); 
	} else if(soTienCanDoi==20000){
		printf("So tien doi duoc tu %d la : 2 to 10000 VND\n",soTienCanDoi); 
	} else if(soTienCanDoi==10000){
		printf("So tien doi duoc tu %d la : 2 to 5000 VND\n", soTienCanDoi); 
	}else if(soTienCanDoi==5000){
		printf("So tien doi duoc tu %d la : 2 to 2000 VND, 1 to 1000 VND\n",soTienCanDoi);
	}else if(soTienCanDoi==2000){
		printf("So tien doi duoc tu %d la : 2 to 1000 VND\n",soTienCanDoi);
	}else if(soTienCanDoi==1000){
		printf("So tien doi duoc tu %d la : 2 to 500 VND\n",soTienCanDoi);
	}
	else{
		printf("Ban da nhap sai menh gia tien can doi vui long nhap lai\n"); 
		}
	}while(soTienCanDoi<1000 || soTienCanDoi >500000);
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang so 5 - Doi Tien ( y or n)");
	scanf("%s",&check5);
	if(check5=='y'){
		system("pause");
		system("cls");
		break;
		}
	}while(check5=='n');
}
void chucNang6(){
	int soTien,kyHan,laiPhaiTra,soTienPhaiTra,soTienGoc;
	char check6;
	do
	{
	printf("+$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("|       Xin chao mung ban den voi Ngan Hang DTNP       |\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	do
	{
	printf("Xin moi ban cho chung toi biet so tien ma ban muon vay la bao nhieu :\n");
	scanf("%d",&soTien);
	}while(soTien<0);
	soTienGoc=soTien/12;
	for(kyHan=1;kyHan<=12;kyHan++){
		laiPhaiTra=soTien*5/100;
		soTienPhaiTra=soTienGoc+laiPhaiTra;
		soTien=soTien-soTienGoc;
	printf("Ky Han %d:\n Lai phai tra:%d\t Goc phai tra:%d\t So tien phai tra:%d\t So tien con lai:%d\n",kyHan,laiPhaiTra,soTienGoc,soTienPhaiTra,soTien);
	}
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang 6 - Vay Ngan Hang (y or n) : ");
	scanf("%s",&check6);
	if(check6== 'y')
	{
		break;
			}
		}while(check6 == 'n');
	}
void chucNang7(){
	char check7;	
	float tienVay,soPhanTram,laiSuat,soPhanTramVay,soTienTraLanDau,soTienTraHangThang;
	do{
		do{
	printf("Xin moi ban nhap vao so phan tram muon vay ( so tien vay co dinh la 500000000 ) : ");
	scanf("%f",&soPhanTram);
	}while(soPhanTram <0 || soPhanTram>100);
	soPhanTramVay=(100/100-soPhanTram/100);
	tienVay=500000000*soPhanTramVay;
	soTienTraLanDau=500000000-tienVay;
	soTienTraHangThang=(tienVay/72)+(tienVay*0.006);
	printf("So tien phai tra lan dau : %.f VND\n",soTienTraLanDau);
	printf("So tien phai tra hang thang ( 6 nam = 72 thang ) : %.f VND \n",soTienTraHangThang);
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang so 7 - Vay Tien Mua Xe ( y or n ) :");
	scanf("%s",&check7);
	if(check7=='y'){
		system("pause");
		system("cls");
		break;
		}
	}while(check7=='n');
}
void chucNang8(){
struct sinhVien{
	char TenSV[100];		
	float diemTB;
}; 

int i,n,j;
char check8;
struct sinhVien a[n];
struct sinhVien temp;
	do{
		do{
	printf("Xin moi nhap vao so sinh vien can sap xep : ");
	scanf("%d", &n);
	
	}while(n<0);
	for(i=0;i<n;i++)
	{
		printf("---------------------------\n");
		printf("Thong tin sinh vien %d\n ",i+1);
		printf("Ho va ten sinh vien : ");
		fflush(stdin);
		gets(a[i].TenSV);
		printf("Diem TB : ");
		scanf("%f",&a[i].diemTB);
		printf("-------------------------\n");
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].diemTB<a[j].diemTB)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			} 
		} 
	}
	system("pause");
	system("cls"); 
	printf("Thong tin sinh vien sau khi duoc sap xep\n"); 
	for(i=0;i<n;i++)
	{
		printf("Thong tin sinh vien thu %d\n ",i+1);
		printf("Ho va ten : %s\n",a[i].TenSV);
		printf("Diem TB : %f\n",a[i].diemTB);
		if(a[i].diemTB>=9)
		{
			printf("HOC LUC XUAT SAC !!!\n"); 
		}
		else if(a[i].diemTB>=8)
		{
			printf("HOC LUC GIOI !!!\n"); 
		} else if(a[i].diemTB>=6.5)
		{
			printf("HOC LUC KHA !!!\n"); 
		} else if(a[i].diemTB>=5)
		{
			printf("HOC LUC TB\n"); 
		} else if(a[i].diemTB<5)
		{
			printf("HOC LUC YEU\n"); 
		}
    printf("------------------------------\n");
	}
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang 8 - Sap xep thong tin sinh vien ( y or n ) :");
	scanf("%s",&check8);
	if(check8=='y'){
		system("pause");
		system("cls");
		break;
	}
	}while(check8=='n');
}
void chucNang9(){
	char check9;
	do{
	time_t seconds;
	seconds = time(NULL);
	srand(unsigned (seconds));
	int so;
	printf("-----------------------------------------------------------\n");
	printf("|     Xin chao mung ban den voi chuong trinh FPOLY Lott    |\n");
	printf("-----------------------------------------------------------\n");
	printf("So ban muon du doan la(01->15): ");
	scanf("%d",&so);
	int soNgauNhien=rand()%15+1;
	printf("So quay la %d\n",soNgauNhien);
	if((so%10)==(soNgauNhien%10) || (so/10)==(soNgauNhien/10) || (so/10)==(soNgauNhien%10)|| (so%10)==(soNgauNhien/10))
	{
		printf("Chuc mung ban da trung giai nhi !!!\n");
	}
	else if(so==soNgauNhien)
	{
		printf("Chuc mung ban da trung giai nhat !!!\n");
	}
	else
	{
		printf("Chuc ban may man lan sau !!! \n");
	}
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang so 9 - FPOLY GAME LOTT(y or n) :");
	scanf("%s",&check9);
	if(check9=='y'){
		system("pause");
		system("cls");
		break;
		}
	}while(check9=='n');
}
void chucNang10(){
	struct PhanSo{
	int tu;
	int mau;
};
	char check10;
	do{
	struct PhanSo so1,so2;
	printf("Xin moi nhap vao so thu nhat : ");
	scanf("%d%d",&so1.tu,&so1.mau);
	printf("Xin moi nhap vao so thu hai :");
	scanf("%d%d",&so2.tu,&so2.mau);
	struct PhanSo tong,hieu,tich,thuong;
	tich.tu= so1.tu*so2.tu;
	tich.mau=so1.mau*so2.mau;
	thuong.tu=so1.tu*so2.mau;
	thuong.mau=so1.mau*so2.tu;
	tong.mau=so1.mau*so2.mau;
	tong.tu=so1.tu*so2.mau+so1.mau*so2.tu;
	hieu.mau=so1.mau*so2.mau;
	hieu.tu=so1.tu*so2.mau-so1.mau*so2.tu;
	printf("Tong cua hai phan so la : %d/%d\n",tong.tu,tong.mau);	
	printf("Hieu cua hai phan so la : %d/%d\n",hieu.tu,hieu.mau);
	printf("Thuong cua hai phan so la : %d/%d\n",thuong.tu,thuong.mau);
	printf("Tich cua hai phan so la : %d/%d\n",tich.tu,tich.mau);	
	system("pause");
	system("cls");
	printf("Ban co muon thoat chuc nang 10 - Tinh Toan Phan So ( y or n ) : ");
	scanf("%s",&check10);
	if(check10=='y'){
		system("pause");
		system("cls");
		break;
		}
	}while(check10=='n');
}
