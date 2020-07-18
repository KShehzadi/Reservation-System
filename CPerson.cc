#include <iostream>
#include <string.h>
#include "CPerson.hh"

using namespace std;

CPerson::CPerson()
{
  char* s = new char[100];
  this->FirstName = new char[31];
  this->LastName = new char[31];
  this->Address = new char[101];
  this->AccountNumber = new char[31];
  this->PhoneNum = new char[14];
  this->Email = new char[21];
  cout<<"Enter FirstName:";
  cin>>s;
  strcpy(this->FirstName, s);
  cout<<"Enter LastName:";
  cin>>s;
  strcpy(this->LastName, s);
  cout<<"Enter Address:";
  cin>>s;
  strcpy(this->Address, s);
  cout<<"Enter AccountNumber:";
  cin>>s;
  strcpy(this->AccountNumber, s);
  cout<<"Enter PhoneNum:";
  cin>>s;
  strcpy(this->PhoneNum, s);
  cout<<"Enter Email:";
  cin>>s;
  strcpy(this->Email, s);
}

char* CPerson::GetFirstName()
{
  return this->FirstName;
}

char* CPerson::GetLastName()
{
  return this->LastName;
}

char* CPerson::GetAddress()
{
  return this->Address;
}

char* CPerson::GetAccountNumber()
{
  return this->AccountNumber;
}

char* CPerson::GetPhoneNum()
{
  return this->PhoneNum;
}

char* CPerson::GetEmail()
{
  return this->Email;
}

CPerson& CPerson::SetFirstName(char* s)
{
  delete[] this->FirstName;
  this->FirstName = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->FirstName[i] = s[i];
  }
  return *this;
}
CPerson& CPerson::SetLastName(char* s)
{
  delete[] this->LastName;
  this->LastName = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->LastName[i] = s[i];
  }
  return *this;
}
CPerson& CPerson::SetAddress(char* s)
{
  delete[] this->Address;
  this->Address = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->Address[i] = s[i];
  }
  return *this;
}
CPerson& CPerson::SetAccountNumber(char* s)
{
  delete[] this->AccountNumber;
  this->AccountNumber = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->AccountNumber[i] = s[i];
  }
  return *this;
}
CPerson& CPerson::SetPhoneNum(char* s)
{
  delete[] this->PhoneNum;
  this->PhoneNum = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->PhoneNum[i] = s[i];
  }
  return *this;
}
CPerson& CPerson::SetEmail(char* s)
{
  delete[] this->Email;
  this->Email = new char[strlen(s) + 1];
  for(int i = 0; i < strlen(s); i++)
  {
    this->Email[i] = s[i];
  }
  return *this;
}
