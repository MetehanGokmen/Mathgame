#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;
int sayi;
char start;
int a;
void computerTurn();
void playerTurn();
void strategy(){
	    if (sayi==3)
	        sayi=sayi-2;
	    else{
		
    	if (sayi%3==0){
    		sayi=sayi-2;
    		
    	}
    	else if(sayi%3==1){
		
    		sayi=sayi-1;
    	}
    	else if (sayi%3==2)
    		sayi=sayi-1;}
	
	cout<<sayi<<" kaldý"<<endl;
}

void computerTurn(){

    cout<<"sýra bilgisayarda: \n";
	strategy();
		if (sayi==0){
		
    			cout<<"!!!KAZANDINIZ!!!"<<endl;
    			getch();
    			exit(1);
        }
    		else{
    			playerTurn();
			
			}
}
void playerTurn(){
	cout<<"Sýra sizde: \n";
    if(sayi==1){
    	while(1){
    		cout<<"Sayý giriniz: ";
    		cin>>a;
    		if (a==1){
    			cout<<"!!!KAYBETTÝNÝZ!!!"<<endl;
    			getch();
    			exit(1);
        }
    		else{
    			cout<<"Hatalý sayý giriþi yaptýnýz: ";
			
			}
		}
	}else{
		while(1){
		
		cout<<"1 ya da 2 çýkartýnýz: ";
		cin>>a;
		if(a==1){
			sayi=sayi-1;
		    cout<<sayi<<" kaldý"<<endl;
			break;
		}
		else if(a==2){
			sayi= sayi-2;
			cout<<sayi<<" kaldý"<<endl;
			break;
			
		}
		else
		cout<<"Yanlýþ sayý girdiniz tekrar deneyiniz: "<<endl;
		
	}
	if (sayi==0){
    			cout<<"!!!KAYBETTÝNÝZ!!!"<<endl;
    			exit(1);
        }
    		else{
    			computerTurn();
			
			}
	}
	}



int main(){
	//programýn dilinin tükçe olmasý için bu kod kullanýlýr
	setlocale(LC_ALL, "Turkish");
	
	cout<<"Oyun bilgisayara karþý oynanmaktadýr.\nAklýnýzdan tuttuðunuz sayýyý girin ve kimin baþlayacaðýný seçin.";
	cout<<"\n1 ya da 2 çýkarýn eðer çýkardýðýnýzda 0 kalýrsa kaybedersiniz";
	cout<<"Oyun taraflardan biri kaybedince kapanacaktýr. \nÝkinci defa oynamak icin yeniden çalýþtýrýnýz\n\n\n";
	cout<<"Lütfen bir sayý giriniz: ";
	cin>>sayi;
	cout<<endl<<"Lütfen kimin baþlayacaðýný seçiniz. Bilgisayar için b kendiniz için k yazýnýz: ";
	
	//kimin baþlayacaðý seçilir 
	while(start != 'b' || start != 'B' || start != 'k' ||start != 'K'){
	
	cin>>start;
	//eðer b ya da B tuþuna basýlýrsa computerTurn isimli fonksiyon çalýþtýrýlýr
	if (start=='b' || start == 'B'){
		computerTurn();
		break;
	}
	//eðer k ya da K tuþuna basýlýrsa playerTurn fonksiyonu çalýþtýrýr
	else if(start == 'k' || start== 'K'){
		playerTurn();
		break;
	} 
	else{
		//eðer yanlýþ girilirse yeniden denenmesi için else fonksiyonu vardýr
		cout<<"yanlýþ girdiniz yeniden giriniz: ";
	}}
	
	
	
	
	

	return 0;
}
