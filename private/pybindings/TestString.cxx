#include <vector>

#include <testclasses/TestString.h>
#include <icetray/python/dataclass_suite.hpp>
#include <dataclasses/ostream_overloads.hpp>

using namespace boost::python;

size_t 
teststring_get_length(const TestString& s)
{
  return s.value.size();
}
bool
eq_string(const TestString& lhs, const std::string rhs)
{
  return lhs == rhs;
}
bool
ne_string(const TestString& lhs, const std::string rhs)
{
  return lhs != rhs;
}

void register_TestString()
{
  class_<TestString, bases<I3FrameObject>, boost::shared_ptr<TestString> >("TestString",
    "A serializable string. Can compare directly with strings.\n\
Note that python assignment is by reference, creating two links to one object.") 
    .def(init<>())
    .def(init<const std::string&>())
    .def(init<const TestString&>())
    .def_readwrite("value", &TestString::value)
    .def("__repr__",&stream_to_string<TestString>)
    .def("__len__",teststring_get_length)
    .def("__eq__",eq_string)
    .def("__ne__",ne_string)
    .def(dataclass_suite<TestString>())
    ;

  register_pointer_conversions<TestString>();
}
