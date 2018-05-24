String+(const String&s)
{
String s1;
s1=*this;
s1+=s;
return s1;
}


String +=(const String&s)
{
  char*t=s1;
  s1=new char[len+s.len+1];
  strcpy(s1,t);
  strcat(s1,s.s1);
  len=(int)strlen[s1];
  delete [] t;
  return *this;
  
  
}
//这是一个简单测试