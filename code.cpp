#include <iostream>
#include <fstream>
#include <unistd.h >
#include <windows.h>
using namespace std;

// function prototypes and global variables
void menu(); // prototype of menu function
void Aval_hotels(); // function that displays the Available hotels that the travel agency work with
void Aval_cabs();  // function that displays the Available cabs that the travel agency work with
void show_charges(); // function that shows the charges of hotels and cabs
void show_plaza_packages();//function that shows the packages of plaza hotel
void show_ritz_packages(); // function that shows the packages of ritz hotel
void show_baverly_packages(); // function that shows the packages of Beverly hills hotel
int i; // usesd in for loop
float cost =0.0; // global cost variable
string hotel_choice ; // to store the hotel that the user choses to be put in the ticket
int cab_choice; // to store user cab choice
int kilometers; // to store the number of kilometers the user will travel
int nights; // to store how many nights the user will stay in the hotel

// ticket class declaration section

class ticket{

private:
    string name, gender, address;
    int age, menuBack;
    long int mobileNo;

  int cusID;
    char all[999];

public:
  void getDetails();


};

// ticket class impelmentation section

void ticket::getDetails()
{
  cout <<"Please Note to see the charges of rooms and cabs in the menu tab before buying a ticket !! "<<endl<<endl;

  cout <<"Enter Personal Details"<<endl;
  cout <<"----------------------"<<endl;
    ofstream out("ticket.txt", ios::out); //open file using out mode to write customer details
    {
        cout << "Enter Name: ";
        fflush(stdin);
        getline(cin,name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Mobile Number: ";
        cin >> mobileNo;
        cout << "Address: ";
        fflush(stdin);
        getline(cin,address);
        cout << "Gender: ";
        cin >> gender;
          system("cls");


          cout <<"Choose which cab You Will take : "<<endl;
          cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
          cout <<"----------------------------------------------------------------------------------"<<endl;
              cout << "1. Rent a Standard Cab - $.15 for 1KM" << endl;
              cout << "2. Rent a Luxury Cab - $.25 per 1KM" << endl<<endl;
              cout <<"Choice : ";
              cin >> cab_choice; // recive cab_choice

              if (cab_choice==1){
                system ("cls");
                cout <<"Enter How many kilometers you will travel "<<endl;
                cout <<"Enter : ";
                cin>>kilometers;
                cost=0.15*kilometers;
                system("cls");
              }
              else if (cab_choice==2){
                system ("cls");
                cout <<"Enter How many kilometers you will travel "<<endl;
                cout <<"Enter :";
                cin>>kilometers;
                cost=0.25*kilometers;
                system("cls");

              }



          cout <<"Choose which hotel You will Stay in "<<endl;
          int usr_choice ; // to store the choice of the user
          cout <<"1)  The Ritz"<<endl;
          cout <<"2)  BiveryHills"<<endl;
          cout <<"3)  Plaza"<<endl;
          cout <<"Choice : ";
          cin >> usr_choice;
          if (usr_choice == 1){
            system("cls");
            hotel_choice="The Ritz";
            cout << "-------WELCOME TO HOTEL Ritz-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout <<"Price for a night in The Ritz is 740$"<<endl;
            cout << "Enter How many nights You will stay in the hotel " << endl<<endl;
            cout <<"Enter : ";
            cin >>nights;
            cost+= (nights *740.0);
            system("cls");
            cout <<"You have successfully booked a room in the ritz hotel with total cost = "<<cost <<endl;
            cout <<"Please note that we save your info for future purposes "<<endl;
            cout <<"See Your ticket at ticket.txt file"<<endl;

          }
          else if (usr_choice==2)
          {
            system("cls");
            hotel_choice="BiveryHills";
            cout << "-------WELCOME TO BiveryHills -------\n" << endl;
            cout << " step onto the signature red carpet and enter the grand lobby. Welcome to the legacy" << endl;
            cout <<"Price for a night in The Ritz is 650$"<<endl;
            cout << "Enter How many nights You will stay in the hotel " << endl<<endl;
            cout <<"Enter : ";
            cin >>nights;
            cost+= (nights *740.0);
            system("cls");
            cout <<"You have successfully booked a room in the ritz hotel with total cost = "<<cost <<endl;
            cout <<"Please note that we save your info for future purposes "<<endl;
            cout <<"See Your ticket at ticket.txt file"<<endl;


          }

          else if (usr_choice==3)
          {
              system("cls");
              cout << "-------WELCOME TO HOTEL Plaza-------\n" ;
              cout << "The most celebrated hotel in America " << endl;

              cout <<"Price for a night in The Ritz is 740$"<<endl;
              cout << "Enter How many nights You will stay in the hotel " << endl<<endl;
              cout <<"Enter : ";
              cin >>nights;
              cost+= (nights *550.0);
              system("cls");
              cout <<"You have successfully booked a room in the ritz hotel with total cost = "<<cost <<endl;
              cout <<"Please note that we save your info for future purposes "<<endl;
              cout <<"See Your ticket at ticket.txt file"<<endl;




          }




    }


    cusID = (rand() % 1000) + 1; // randomly genrating a customer id to be presented in his ticket




    out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender <<"\nHotel: " <<hotel_choice <<"\nStaying Nights = "<< nights <<"\nTicket_Cost = "<< cost << endl;
    out.close();

    ofstream old("Old-Customers.txt", ios::app);
    old   <<"\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender <<"\nHotel: " <<hotel_choice <<"\nStaying Nights = "<< nights <<"\nTicket_Cost = "<< cost << endl;
    old.close();



    //cout <<"To recive receipt press 1 to terminate press 0";
}




int main(){

menu(); // calling menu function



  return 0;
}

void menu(){
  system("color 0A");
int menu_choice;
  cout << "\t\t      * ABC Travels *\n" << endl; // you can change the name of the agency
      cout << "-------------------------Main Menu--------------------------" << endl;

      cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
      cout << "\t|\t\t\t\t\t|" << endl;
      cout << "\t|\t1) Available Hotels        \t|" << endl;
      cout << "\t|\t2) Available Cabs          \t|" << endl;
      cout << "\t|\t3) Charges                 \t|" << endl;
      cout << "\t|\t4) Book A ticket           \t|" << endl;
      cout << "\t|\t5) Exit                    \t|" << endl;
      cout << "\t|\t\t\t\t\t|" << endl;
      cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl<<endl;
      cout <<"Enter Choice : ";
      cin >>menu_choice;
      system("cls");

      switch (menu_choice) {
        case 1:
        Aval_hotels(); // calling Aval_hotels function to display the Available hotels
        break;
        case 2:
             Aval_cabs(); //  calling Aval_cabs function to display the Available cabs
        break;

        case 3:
        show_charges(); // calling show_charges function to display the costs of hotels and cabs
        break;

        case 4:
        {
          ticket a; // creating object from class ticket
          a.getDetails(); // calling get details function
        }


        break;

        case 5:
        exit(1); // exiting with exit code 1
        break;


      }


}



void Aval_hotels(){
  int x ;
  system ("cls");
  cout <<"These are The Hotels We Work With ! "<<endl;
  cout <<"-----------------------------------";
  cout <<endl;
  cout <<"The Plaza "<<endl;
  cout <<"Ritz"<<endl;
  cout <<"Beverly Hills Hotel"<<endl<<endl;

  cout <<"Press 1 To go to main menu or 0 to exit "<<endl;
  cin>> x;

  if (x==1){
  system("cls");
  menu();
  }
  else if (x==0)
  exit(2);
  else {
    cout <<"Undefined input "<<endl;
    cout <<"Returning to main menu"<<endl;
    menu();

  }


}

void Aval_cabs(){
  int x;
      system("cls");
      cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
      cout <<"----------------------------------------------------------------------------------"<<endl;
          cout << "1. Rent a Standard Cab - $.15 for 1KM" << endl;
          cout << "2. Rent a Luxury Cab - $.25 per 1KM" << endl<<endl;

          cout <<"Press 1 To go to main menu or 0 to exit "<<endl;
          cin>> x;

          if (x==1){
          system("cls");
          menu();
          }
          else if (x==0)
          exit(2);
          else {
            cout <<"Undefined input "<<endl;
            cout <<"Returning to main menu"<<endl;
            menu();


}


}

void show_baverly_packages(){
  int x;
system("cls");
cout <<endl;

cout << "-------WELCOME TO HOTEL BiveryHills -------\n" << endl;

cout << " step onto the signature red carpet and enter the grand lobby. Welcome to the legacy" << endl<<endl; //  one of hotel BiveryHills qoutes
cout <<"Amazing offer in this summer: $.650 for a one day!!!"<<endl<<endl; // here can be added the hotel packages and it's charges
cout <<"Enter 1 to go to main menu and 0 to exit "<<endl;
cin >>x;

if (x==1){
  system ("cls");
menu();
}

else if (x==0)
exit(4);
else {
  cout <<"Undefined input"<<endl;
  cout <<"Returning To main menu"<<endl;
    menu();
}



}

void show_ritz_packages(){

int x;
system("cls");
cout <<endl;



cout << "-------WELCOME TO HOTEL Ritz-------\n" << endl;
cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl<<endl;
cout << "Amazing offer in this summer: $.750 for a one day!!!" << endl; // here hotel's packages can be added with it's charges
cout <<endl;
cout <<"Enter 1 to go to main menu and 0 to exit "<<endl;
cin >>x;

if (x==1){
  system("cls");
  menu();
}

else if (x==0)
exit(4);
else {
  cout <<"Undefined input"<<endl;
  cout <<"Returning To main menu"<<endl;
  system("cls");
    menu();
}





}

void show_plaza_packages(){
  int x;
  system("cls");
  cout <<endl;



  cout << "-------WELCOME TO HOTEL Plaza-------\n" ;
  cout << "The most celebrated hotel in America " << endl<<endl;
  cout << "Amazing offer in this summer: $.550 for a one day!!!" << endl; // here hotel packages can be added
  cout <<endl;
  cout <<"Enter 1 to go to main menu and 0 to exit "<<endl;
  cin >>x;

  if (x==1){
    system("cls");
    menu();
  }

  else if (x==0)
  exit(4);
  else {
    cout <<"Undefined input"<<endl;
    cout <<"Returning To main menu"<<endl;
    system("cls");
      menu();
  }

}



void show_charges(){
  int charge_choice ;
cout <<"Select the charges you Would Like to see "<<endl;
cout <<"---------------------------------------------"<<endl;
cout <<"1)  Hotels"<<endl;
cout <<"2)  Cabs "<<endl;
cout <<"choice :";
cin >> charge_choice; // ro recive the user choice

if (charge_choice==1){


int hotel_choice ; // to recive the hotel choice from user
system ("cls");
cout <<"Choose Hotel "<<endl;
cout <<"--------------"<<endl<<endl;
cout <<"1) The Plaza"<<endl;
cout <<"2) Ritz"<<endl;
cout <<"3) Beverly Hills Hotel"<<endl;
cout <<"Enter Choice : ";
cin>>hotel_choice;

switch (hotel_choice) {
  case 1:
 show_plaza_packages();
  case 2:
  show_ritz_packages();
  case 3:
  show_baverly_packages();
}


}
else if (charge_choice==2){

  int x;
      system("cls");
      cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
      cout <<"----------------------------------------------------------------------------------"<<endl;
          cout << "1. Rent a Standard Cab - $.15 for 1KM" << endl;
          cout << "2. Rent a Luxury Cab - $.25 per 1KM" << endl<<endl;

          cout <<"Press 1 To go to main menu or 0 to exit "<<endl;
          cin>> x;

          if (x==1){
          system("cls");
          menu();
          }
          else if (x==0)
          exit(2);

        }




}
