#include "ArraySizeException.h"

ArraySizeException::ArraySizeException(const string mes) :Exception(mes) {}

const string ArraySizeException::GetMessage() const
{
	return "**** " + m_message + " ****";
}