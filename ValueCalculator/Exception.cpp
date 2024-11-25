#include <string>
#include "Exception.h"
using namespace std;

Exception::Exception(const string message)
{
    m_message = message;
}

const string Exception::GetMessage() const
{
    return m_message;
}