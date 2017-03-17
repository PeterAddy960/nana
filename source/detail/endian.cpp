#include <nana/detail/endian.hpp>

namespace nana
{
	namespace detail
	{
		Endian::Endian()
		{
			unsigned int I = 1;
			unsigned char* Bytes = (unsigned char*)&I;
			LittleEndian = bool(Bytes[0]);
		}

		bool Endian::IsLittleEndian() { return LittleEndian; }
		bool Endian::IsBigEndian() { return !LittleEndian; }
	};
};