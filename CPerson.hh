class CPerson
{
private:
  char* FirstName;
  char* LastName;
  char* Address;
  char* AccountNumber;
  char* PhoneNum;
  char* Email;

public:
  CPerson();

  char* GetFirstName();
  char* GetLastName();
  char* GetAddress();
  char* GetAccountNumber();
  char* GetPhoneNum();
  char* GetEmail();

  CPerson& SetFirstName(char* s);
  CPerson& SetLastName(char* s);
  CPerson& SetAddress(char* s);
  CPerson& SetAccountNumber(char* s);
  CPerson& SetPhoneNum(char* s);
  CPerson& SetEmail(char* s);
};
