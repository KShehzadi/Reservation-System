#include <iostream>
#include <string.h>
#include "CString.hh"

using namespace std;

int length(char* str);

CString::CString()
{
  this->a = new char[13];
  this->size = 13;
  char arr[13];
  cout<<"Enter phone num (e.g 923051234567):";
  cin>>arr;
  while(strlen(arr) < 12)
  {
    cin>>arr;
  }
  this->a = arr;
  /*this->a = new char[1];
  this->a[0] = '\0';
  this->size = 1;*/
}

CString::CString(char* s)
{
  this->a = new char [length(s) + 1];
  size = length(s) + 1;
  for(int i = 0; i < length(s); i++)
  {
    a[i] = s[i];
  }
}

CString::CString(CString& String)
{
  this->a = new char [String.GetLength() + 1];
  this->size = String.GetLength();
  for(int i = 0; i < String.GetLength(); i++)
  {
    a[i] = String.a[i];
  }
}

CString::~CString()
{
  delete[] this->a;
}

int CString::GetLength() const
{
  return this->size;
}

char* CString::GetString() const
{
  return this->a;
}

/*CString CString::operator ++ (int x)
{

}*/

bool CString::operator == (CString& String)
{
  if(this->size != String.size) return false;
  for(int i = 0; i < this->size; i++)
  {
    if(this->a[i] != String.a[i]) return false;
  }
  return true;
}

bool CString::operator ! ()
{
  if(this->size != 1) return false;
  if(this->a[0] != '\0') return false;
  return true;
}

bool CString::operator < (const CString String) const
{
  int len = 0;
  if(this->size < String.size)
  {
    len = this->size - 1;
  }
  else
  {
    len = String.size - 1;
  }

  for(int i = 0; i < len; i++)
  {
    if(this->a[i] < String.a[i]) return true;
  }
  return false;
}

bool CString::operator > (const CString String) const
{
  int len = 0;
  if(this->size < String.size)
  {
    len = this->size - 1;
  }
  else
  {
    len = String.size - 1;
  }

  for(int i = 0; i < len; i++)
  {
    if(this->a[i] > String.a[i]) return true;
  }
  return false;
}

char CString::operator [] (int i)
{
  return this->a[i];
}

int length(char* str)
{
  int counter = 0;
  for(int i = 0; str[i] != '\0'; i++)
  {
    counter++;
  }
  return counter;
}

char CString::GetChar(int x) const
{
  if(x < this->size) return this->a[x];
  return '\0';
}

CString CString::operator + (CString& String)
{
  int length = this->GetLength() + String.GetLength();
  char* str = new char[length + 1];
  for(int i = 0; i < this->GetLength(); i++)
  {
    str[i] = this->a[i];
  }
  for(int i = this->GetLength(); i < length; i++)
  {
    str[i] = String.a[i - this->GetLength()];
  }

  CString S1(str);
  return S1;
}

int CString::GetLength()
{
  return this->size;
}

CString& CString::printString()
{
  cout<<this->a<<endl;
}
