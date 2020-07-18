#include <iostream>
#include "CTeleNum.hh"

using namespace std;

char* CTeleNum::GetNum()
{
  return this->num.GetString();
}

char* CTeleNum::GetCountryCode()
{
  if(this->num.GetChar(0) == '\0')
  {
    return (char*)"+00";
  }
  else
  {
    char* arr = new char[3];
    for(int i = 0; i < 2; i++)
    {
      arr[i] = this->num.GetChar(i);
    }
    return arr;
  }
}

char* CTeleNum::GetSubscriberNum()
{
  if(this->num.GetChar(0) == '\0')
  {
    return (char*)"0000000000";
  }
  else
  {
    char* arr = new char[11];
    for(int i = 0; i < 10; i++)
    {
      arr[i] = this->num.GetChar(i);
    }
    return arr;
  }
}*/
