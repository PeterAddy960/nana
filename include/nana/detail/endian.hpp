#ifndef NANA_DETAIL_ENDIAN_HPP
#define NANA_DETAIL_ENDIAN_HPP
#include <algorithm>

namespace nana
{
	namespace detail
	{
		class Endian
		{
			bool LittleEndian;
		public:
			Endian();
			template<typename T> static void Reverse(T &Var)
			{
				unsigned char* Bytes = (unsigned char*)&Var;
				for(size_t i = 0,j = sizeof(T) - 1; i < j; i++,j--)
				{
					std::swap(Bytes[i],Bytes[j]);
				}
			}
			bool IsLittleEndian();
			bool IsBigEndian();
		};
	};
};

#endif