#include "ArrayDataException.h"

ArrayDataException::ArrayDataException(const string mes) :Exception(mes) {}

const string ArrayDataException::GetMessage() const
{
	return "**** " + m_message + " ****";
}