#include "CString.hh"
class CTeleNum
{
private:
  CString num;
public:

  char* GetNum();
  char* GetCountryCode();
  char* GetSubscriberNum();
};
