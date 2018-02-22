//By Ugandans for Ugandans
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int price, total;

void calculate (){
	total = price;
}

int GunM(){
	char accept,gunz,gunm,warpackage,warpackagechoice, patriotpackage, heavypackage, stealthpackage,continued;
	int A,B,C,D;
	bool buymore=false;
	cout<<"________________________________"<<endl;
	cout<<"| A. Start a war                |\n| B. Defend your country        |\n| C. Heavy                      | \n| D. Recon                      | \n";
	cout<<"________________________________"<<endl;
	cin>>gunz;
	cout<<"You chose : "<<gunz<<endl;
	do{
	switch(gunz){
	
	case 'A':
	case 'a':
		cout<<"\nWar Packages:"<<endl;
		cout<<"|A. M4 Carbine w/ Ammo, M26 Grenade, Vests and Armor  - $5080 \n|B. AK-47 w/ Ammo, M33A1 Grenades, Vests and Armor - $5100 \n|C. M16A2 Rifle w/ Ammo, M68 Grenades, Vests and Armor - $5210 \n";
		cin>>warpackage;
		if(warpackage =='A'|| warpackage =='a'){
			cout<<"You have chosen the M4 Carbine set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5080;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
				}else if(continued == 'Y'||continued == 'y') {
				price += 5080;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
	 	    }return GunM();
		 }else if(warpackage=='B'||warpackage=='b'){
			cout<<"You have chosen the AK-47 set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				cout<<"You have these in ur cart :"<<warpackage<<endl;
				cout<<"Which is the AK47 set"<<endl;
				price += 5100;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5100;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
				 }else if(warpackage=='C'||warpackage=='c'){
			cout<<"You have chosen the M16A2 set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5210;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5210;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
	
	case 'B':
	case 'b':
		cout<<"Patriot Packages:"<<endl;
		cout<<"|A. M4A1 Carbine w/ Ammo, 1911 Handgun w/ Ammo , M67 Grenade, Vests and Armor  - $5110 \n|B. Steyr AUG Rifle w/ Ammo, Glock-18 Handgun w/ Ammo, M26 Grenades, Vests and Armor - $5500 \n|C. ArmaLite AR-18 w/ Ammo, USP.45 Tactical w/ Ammo,  M33 Grenades, Vests and Armor - $5710 \n";
		cin>>patriotpackage;
		if(patriotpackage=='A'||patriotpackage=='a'){
			cout<<"You have chosen the M4A1 Carbine set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5110;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5110;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
	 	}return GunM();
		 }else if(patriotpackage=='B'||patriotpackage=='b'){
			cout<<"You have chosen the Steyr AUG Rifle set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5500;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5500;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
				 }else if(patriotpackage=='C'||patriotpackage=='c'){
			cout<<"You have chosen the ArmaLite AR-18 set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5710;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5710;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
	
	
	case 'C':
	case 'c':
		cout<<"Heavy Artillery Packages:"<<endl;
		cout<<"|A. Machine Gun Kelly w/ Ammo, Berretta 92F w/ Ammo , M67 Grenade, Vests and Armor  - $12110 \n|B. Heckler & Koch MG4 w/ Ammo, P226R w/ Ammo, M26 Grenades, Vests and Armor - $12500 \n|C. Concern Kalashnikov RPK w/ Ammo, Desert Eagle w/ Ammo,  M33 Grenades, Vests and Armor - $12710 \n";
		cin>>heavypackage;
		if(heavypackage=='A'||heavypackage=='a'){
			cout<<"You have chosen the Machine Gun Kelly set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 12110;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 12110;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
	 	}return GunM();
		 }else if(heavypackage=='B'||heavypackage=='b'){
			cout<<"You have chosen the Heckler & Koch MG4 set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 12500;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 12500;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
				 }else if(heavypackage=='C'||heavypackage=='c'){
			cout<<"You have chosen the Concern Kalashnikov set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 12700;
				calculate();
				cout<<"_____________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 12700;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
		
	case 'D':
	case 'd':
		cout<<"Stealth Packages:"<<endl;
		cout<<"|A. Blaser R93 Tactical w/ Ammo, USP.45 Tactical w/ Ammo, Vests and Armor, Nightvision Goggles  - $5120 \n|B. Remington MSR w/ Ammo, Walther PPK/s w/ Ammo, Vests and Armor, Nightvision Goggles - $5270 \n|C. Springfield M14 DMR w/ Ammo, Glock 18C w/ Ammo, Vests and Armor, Nightvision Goggles - $5440 \n";
		cin>>stealthpackage;
		if(stealthpackage=='A'||stealthpackage=='a'){
			cout<<"You have chosen the Blaser R93 Tactical set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5120;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5120;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
	 	}return GunM();
		 }else if(stealthpackage=='B'||stealthpackage=='b'){
			cout<<"You have chosen the Remington MSR set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - ";
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5270;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5270;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
			}else if(stealthpackage=='C'||stealthpackage=='c'){
			cout<<"You have chosen the Springfield M14 DMR set. Your package has been put into your cart.";
			cout<<"\nWould you like to continue? Y/N - "<<endl;
			cin>>continued;
			if(continued =='N'||continued == 'n'){
				price += 5440;
				calculate();
				cout<<"\n___________________________________";
				cout<<"\nYour total price is:"<<total<< endl;
				cout<<"\nPlease proceed to checkout. Thank you for buying with us."<<endl;
				break;
			}else if(continued == 'Y'||continued == 'y') {
				price += 5440;
				calculate();
	 			cout<<"\nWhat else would you like to buy?"<<endl;
	 			buymore=true;
				 }return GunM();
				 
			default:
			cout<<"You came to the wrong place homie "<<endl;{
			return 0 ;
			break;	
		}	 
}
}
}
}
}
}while(buymore==true);
}

	
int main(){
char accept,gunz,gunm,warpackage,warpackagechoice, patriotpackage, heavypackage, stealthpackage,continued;
int A,B,C,D;
bool buymore=false;

 cout<<"\n\n\t\t\t\t\tLoading...\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=25;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=25;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
 }
 if (system("CLS")) system("clear");
 
string hello = "\t\t\t\t[WARNING] \n\tWhat you're about to enter is highly classified.";
int x=0;
while ( hello[x] != '\0'){
	cout << hello[x];
	Sleep(20);
	x++;
};
	cout << "\n\n If you accept, press any button if not then please close the the program." << endl << endl;
	cin>>accept;
	if (system("CLS")) system("clear");
	
	cout<<"-----------------------------------"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"|  Welcome to Ugandan Gunz Store  |"<<endl;
	cout<<"|    By Ugandans for Ugandans     |"<<endl;	
	cout<<"|                                 |"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	
	GunM();

}
