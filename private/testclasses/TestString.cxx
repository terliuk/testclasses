#include <icetray/serialization.h>
#include <testclasses/TestString.h>

std::ostream& operator<<(std::ostream& oss, const TestString& s){
  oss << "TestString(\"" << s.value << "\")";
  return oss;
}
bool operator==(const TestString& lhs, std::string rhs){
  return lhs.value == rhs;
}
bool operator!=(const TestString& lhs, std::string rhs){
  return lhs.value != rhs;
}

I3_SERIALIZABLE(TestString);
