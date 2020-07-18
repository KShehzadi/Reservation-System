class CString
{
private:
  char* a;
  int size;
public:
  CString();
  CString(char* s);
  CString(CString&);

  ~CString();

  char GetChar(int) const;
  char* GetString() const;
  int GetLength() const;

  CString& printString();
  int GetLength();
  CString operator + (CString& String);

  /* CString operator ++ (int x); */
  bool operator == (CString& String);
  bool operator ! ();
  bool operator < (const CString String) const;
  bool operator > (const CString String) const;
  char operator [] (int i);
};
