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
	
	cout<<sayi<<" kald�"<<endl;
}

void computerTurn(){

    cout<<"s�ra bilgisayarda: \n";
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
	cout<<"S�ra sizde: \n";
    if(sayi==1){
    	while(1){
    		cout<<"Say� giriniz: ";
    		cin>>a;
    		if (a==1){
    			cout<<"!!!KAYBETT�N�Z!!!"<<endl;
    			getch();
    			exit(1);
        }
    		else{
    			cout<<"Hatal� say� giri�i yapt�n�z: ";
			
			}
		}
	}else{
		while(1){
		
		cout<<"1 ya da 2 ��kart�n�z: ";
		cin>>a;
		if(a==1){
			sayi=sayi-1;
		    cout<<sayi<<" kald�"<<endl;
			break;
		}
		else if(a==2){
			sayi= sayi-2;
			cout<<sayi<<" kald�"<<endl;
			break;
			
		}
		else
		cout<<"Yanl�� say� girdiniz tekrar deneyiniz: "<<endl;
		
	}
	if (sayi==0){
    			cout<<"!!!KAYBETT�N�Z!!!"<<endl;
    			exit(1);
        }
    		else{
    			computerTurn();
			
			}
	}
	}



int main(){
	//program�n dilinin t�k�e olmas� i�in bu kod kullan�l�r
	setlocale(LC_ALL, "Turkish");
	
	cout<<"Oyun bilgisayara kar�� oynanmaktad�r.\nAkl�n�zdan tuttu�unuz say�y� girin ve kimin ba�layaca��n� se�in.";
	cout<<"\n1 ya da 2 ��kar�n e�er ��kard���n�zda 0 kal�rsa kaybedersiniz";
	cout<<"Oyun taraflardan biri kaybedince kapanacakt�r. \n�kinci defa oynamak icin yeniden �al��t�r�n�z\n\n\n";
	cout<<"L�tfen bir say� giriniz: ";
	cin>>sayi;
	cout<<endl<<"L�tfen kimin ba�layaca��n� se�iniz. Bilgisayar i�in b kendiniz i�in k yaz�n�z: ";
	
	//kimin ba�layaca�� se�ilir 
	while(start != 'b' || start != 'B' || start != 'k' ||start != 'K'){
	
	cin>>start;
	//e�er b ya da B tu�una bas�l�rsa computerTurn isimli fonksiyon �al��t�r�l�r
	if (start=='b' || start == 'B'){
		computerTurn();
		break;
	}
	//e�er k ya da K tu�una bas�l�rsa playerTurn fonksiyonu �al��t�r�r
	else if(start == 'k' || start== 'K'){
		playerTurn();
		break;
	} 
	else{
		//e�er yanl�� girilirse yeniden denenmesi i�in else fonksiyonu vard�r
		cout<<"yanl�� girdiniz yeniden giriniz: ";
	}}
	
	
	
	
	

	return 0;
}
