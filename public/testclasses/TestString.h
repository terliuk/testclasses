#ifndef TESTSTRING_H_INCLUDED
#define TESTSTRING_H_INCLUDED

#include <string>

#include <icetray/I3DefaultName.h>
#include <icetray/I3PODHolder.h>

typedef I3PODHolder<std::string> TestString;

I3_POINTER_TYPEDEFS(TestString);
I3_DEFAULT_NAME(TestString);

std::ostream& operator<<(std::ostream& oss, const TestString& s);
bool operator==(const TestString& lhs, std::string rhs);
bool operator!=(const TestString& lhs, std::string rhs);

#endif

