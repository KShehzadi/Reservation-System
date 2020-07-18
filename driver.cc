#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "CReservation.hh"

using namespace std;

int main () {
  CReservation R;
  int roomNum;

  srand(time(0));
  roomNum = (rand() % 100) + 1;
  ofstream Bookings;
  Bookings.open ("Bookings.txt");
  Bookings<<"First Name: "<<R.GetPerson().GetFirstName()<<endl;
  Bookings<<"Last Name: "<<R.GetPerson().GetLastName()<<endl;
  Bookings<<"Address: "<<R.GetPerson().GetAddress()<<endl;
  Bookings<<"Account Number: "<<R.GetPerson().GetAccountNumber()<<endl;
  Bookings<<"Phone Number: "<<R.GetPerson().GetPhoneNum()<<endl;
  Bookings<<"Email: "<<R.GetPerson().GetEmail()<<endl;
  Bookings<<"Booked Room Number: "<<roomNum<<endl;
  Bookings.close();

  return 0;
}
