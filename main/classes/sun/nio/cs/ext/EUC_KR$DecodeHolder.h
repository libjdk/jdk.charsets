#ifndef _sun_nio_cs_ext_EUC_KR$DecodeHolder_h_
#define _sun_nio_cs_ext_EUC_KR$DecodeHolder_h_
//$ class sun.nio.cs.ext.EUC_KR$DecodeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class EUC_KR$DecodeHolder : public ::java::lang::Object {
	$class(EUC_KR$DecodeHolder, 0, ::java::lang::Object)
public:
	EUC_KR$DecodeHolder();
	void init$();
	static $String* b2cSBStr;
	static $StringArray* b2cStr;
	static $Array<char16_t, 2>* b2c;
	static $chars* b2cSB;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_EUC_KR$DecodeHolder_h_