#include <iostream>

#include <conio.h>

using namespace std;
int number;
char start;
int a;
void computerTurn();
void playerTurn();
void strategy(){
	    if (number==3)
	        number=number-2;
	    else{
		
    	if (number%3==0){
    		number=number-2;
    		
    	}
    	else if(number%3==1){
		
    		number=number-1;
    	}
    	else if (number%3==2)
    		number=number-1;}
	
	cout<<number<<" left"<<endl;
}

void computerTurn(){

    cout<<"It's expert's turn: \n";
	strategy();
		if (number==0){
		
    			cout<<"!!!YOU WON!!!"<<endl;
    			getch();
    			exit(1);
        }
    		else{
    			playerTurn();
			
			}
}
void playerTurn(){
	cout<<"It's your turn': \n";
    if(number==1){
    	while(1){
    		cout<<"Enter a number: ";
    		cin>>a;
    		if (a==1){
    			cout<<"!!!YOU LOSE!!!"<<endl;
    			getch();
    			exit(1);
        }
    		else{
    			cout<<"You entered wrong number: ";
			
			}
		}
	}else{
		while(1){
		
		cout<<"Please substract 1 or 2: ";
		cin>>a;
		if(a==1){
			number=number-1;
		    cout<<number<<" left"<<endl;
			break;
		}
		else if(a==2){
			number= number-2;
			cout<<number<<" left"<<endl;
			break;
			
		}
		else
		cout<<"you entered wrong number please substract 1 or 2: "<<endl;
		
	}
	if (number==0){
    			cout<<"!!!YOU LOSE!!!"<<endl;
    			exit(1);
        }
    		else{
    			computerTurn();
			
			}
	}
	}



int main(){
	
	cout<<"If you lose or computer lose, program will be shut down. \nYou have to open it again if you want to play twice\n\n\n";
	cout<<"Please enter a number: ";
	cin>>number;
	cout<<endl<<"Please choose who will start. for computer press c for ypurself press u: ";
	
	while(start != 'c' || start != 'C' || start != 'u' ||start != 'U'){
	
	cin>>start;
	if (start=='c' || start == 'C'){
		computerTurn();
		break;
	}
	else if(start == 'u' || start== 'U'){
		playerTurn();
		break;
	} 
	else{
		cout<<"You entered wrong. Please enter c or u: ";
	}}
	
	
	
	
	

	return 0;
}
