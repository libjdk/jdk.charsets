#ifndef _sun_nio_cs_ext_ISO2022_CN_GB_h_
#define _sun_nio_cs_ext_ISO2022_CN_GB_h_
//$ class sun.nio.cs.ext.ISO2022_CN_GB
//$ extends sun.nio.cs.ext.ISO2022
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <sun/nio/cs/HistoricallyNamedCharset.h>
#include <sun/nio/cs/ext/ISO2022.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_CN_GB : public ::sun::nio::cs::ext::ISO2022, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(ISO2022_CN_GB, $NO_CLASS_INIT, ::sun::nio::cs::ext::ISO2022, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	ISO2022_CN_GB();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_CN_GB_h_