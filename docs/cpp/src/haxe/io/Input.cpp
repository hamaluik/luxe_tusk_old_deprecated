#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",48,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	HX_STACK_LINE(48)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",61,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(62)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = true;
	}
	HX_STACK_LINE(64)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(64)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(64)
		tmp5 = true;
	}
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(66)
	while((true)){
		HX_STACK_LINE(66)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			break;
		}
		HX_STACK_LINE(72)
		unsigned char tmp8 = this->readByte();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		b[pos] = tmp8;
		HX_STACK_LINE(76)
		(pos)++;
		HX_STACK_LINE(77)
		(k)--;
	}
	HX_STACK_LINE(79)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",87,0x854a6ecd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

bool Input_obj::set_bigEndian( bool b){
	HX_STACK_FRAME("haxe.io.Input","set_bigEndian",0x96732a9a,"haxe.io.Input.set_bigEndian","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",90,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(91)
	this->bigEndian = b;
	HX_STACK_LINE(92)
	bool tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,set_bigEndian,return )

::haxe::io::Bytes Input_obj::readAll( Dynamic bufsize){
	HX_STACK_FRAME("haxe.io.Input","readAll",0xaed6e9a7,"haxe.io.Input.readAll","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",103,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufsize,"bufsize")
	HX_STACK_LINE(104)
	bool tmp = (bufsize == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	if ((tmp)){
		HX_STACK_LINE(108)
		int tmp1 = (int)16384;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		bufsize = tmp1;
	}
	HX_STACK_LINE(111)
	Dynamic tmp1 = bufsize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	::haxe::io::Bytes buf = tmp2;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(112)
	::haxe::io::BytesBuffer tmp3 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	::haxe::io::BytesBuffer total = tmp3;		HX_STACK_VAR(total,"total");
	HX_STACK_LINE(113)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(115)
			::haxe::io::Bytes tmp4 = buf;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			Dynamic tmp5 = bufsize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			int tmp6 = this->readBytes(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			int len = tmp6;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(116)
			bool tmp7 = (len == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			if ((tmp7)){
				HX_STACK_LINE(117)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
			}
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				if ((tmp10)){
					HX_STACK_LINE(118)
					tmp11 = (len < (int)0);
				}
				else{
					HX_STACK_LINE(118)
					tmp11 = true;
				}
				HX_STACK_LINE(118)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				if ((tmp12)){
					HX_STACK_LINE(118)
					int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(118)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(118)
					int tmp16 = buf->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(118)
					tmp13 = (tmp15 > tmp16);
				}
				else{
					HX_STACK_LINE(118)
					tmp13 = true;
				}
				HX_STACK_LINE(118)
				if ((tmp13)){
					HX_STACK_LINE(118)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(118)
				Array< unsigned char > b1 = total->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(118)
				Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(118)
					int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(118)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(118)
					while((true)){
						HX_STACK_LINE(118)
						bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(118)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(118)
						if ((tmp16)){
							HX_STACK_LINE(118)
							break;
						}
						HX_STACK_LINE(118)
						int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(118)
						int i = tmp17;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(118)
						unsigned char tmp18 = b2->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(118)
						total->b->push(tmp18);
					}
				}
			}
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(122)
	::haxe::io::Bytes tmp4 = total->getBytes();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readAll,return )

Void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",131,0x854a6ecd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			if ((tmp1)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(132)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			int tmp5 = this->readBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(133)
			hx::AddEq(pos,k);
			HX_STACK_LINE(134)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::haxe::io::Bytes Input_obj::read( int nbytes){
	HX_STACK_FRAME("haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",141,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nbytes,"nbytes")
	HX_STACK_LINE(142)
	int tmp = nbytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	::haxe::io::Bytes s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(143)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(144)
	while((true)){
		HX_STACK_LINE(144)
		bool tmp2 = (nbytes > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(144)
			break;
		}
		HX_STACK_LINE(145)
		::haxe::io::Bytes tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		int tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		int tmp6 = nbytes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		int tmp7 = this->readBytes(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		int k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(146)
		bool tmp8 = (k == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		if ((tmp8)){
			HX_STACK_LINE(146)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
		}
		HX_STACK_LINE(147)
		hx::AddEq(p,k);
		HX_STACK_LINE(148)
		hx::SubEq(nbytes,k);
	}
	HX_STACK_LINE(150)
	::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

::String Input_obj::readUntil( int end){
	HX_STACK_FRAME("haxe.io.Input","readUntil",0xc6fe56a4,"haxe.io.Input.readUntil","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",158,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(159)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(160)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(161)
	while((true)){
		HX_STACK_LINE(161)
		int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		int tmp2 = last = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		int tmp3 = end;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		if ((tmp5)){
			HX_STACK_LINE(161)
			break;
		}
		HX_STACK_LINE(162)
		int tmp6 = last;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		::String tmp7 = ::String::fromCharCode(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		buf->b->push(tmp7);
	}
	HX_STACK_LINE(163)
	::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readUntil,return )

::String Input_obj::readLine( ){
	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",171,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(173)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(174)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			int tmp2 = last = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = (tmp2 != (int)10);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			if ((tmp4)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(177)
			int tmp5 = last;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::String tmp6 = ::String::fromCharCode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			buf->b->push(tmp6);
		}
		HX_STACK_LINE(178)
		::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		s = tmp1;
		HX_STACK_LINE(179)
		int tmp2 = (s.length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Dynamic tmp3 = s.charCodeAt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4 = (tmp3 == (int)13);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp4)){
			HX_STACK_LINE(179)
			::String tmp5 = s.substr((int)0,(int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			s = tmp5;
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(181)
				::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(181)
				s = tmp1;
				HX_STACK_LINE(182)
				bool tmp2 = (s.length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				if ((tmp2)){
					HX_STACK_LINE(183)
					::haxe::io::Eof tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					HX_STACK_DO_THROW(tmp3);
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(185)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

Float Input_obj::readFloat( ){
	HX_STACK_FRAME("haxe.io.Input","readFloat",0x22a563a2,"haxe.io.Input.readFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",193,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	int tmp = this->readInt32();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	Float tmp1 = ::haxe::io::FPHelper_obj::i32ToFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readFloat,return )

Float Input_obj::readDouble( ){
	HX_STACK_FRAME("haxe.io.Input","readDouble",0x1f86d24b,"haxe.io.Input.readDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",202,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	int tmp = this->readInt32();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	int i1 = tmp;		HX_STACK_VAR(i1,"i1");
	HX_STACK_LINE(204)
	int tmp1 = this->readInt32();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	int i2 = tmp1;		HX_STACK_VAR(i2,"i2");
	HX_STACK_LINE(205)
	bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	if ((tmp2)){
		HX_STACK_LINE(205)
		int tmp4 = i2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		int tmp5 = i1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		tmp3 = ::haxe::io::FPHelper_obj::i64ToDouble(tmp4,tmp5);
	}
	else{
		HX_STACK_LINE(205)
		int tmp4 = i1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		int tmp5 = i2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		tmp3 = ::haxe::io::FPHelper_obj::i64ToDouble(tmp4,tmp5);
	}
	HX_STACK_LINE(205)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readDouble,return )

int Input_obj::readInt8( ){
	HX_STACK_FRAME("haxe.io.Input","readInt8",0x5280c923,"haxe.io.Input.readInt8","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",211,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(213)
	bool tmp1 = (n >= (int)128);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	if ((tmp1)){
		HX_STACK_LINE(214)
		int tmp2 = (n - (int)256);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		return tmp2;
	}
	HX_STACK_LINE(215)
	int tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt8,return )

int Input_obj::readInt16( ){
	HX_STACK_FRAME("haxe.io.Input","readInt16",0xde2f2f9a,"haxe.io.Input.readInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",223,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(225)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(226)
	bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	if ((tmp2)){
		HX_STACK_LINE(226)
		int tmp4 = ch2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		int tmp5 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		tmp3 = (int(tmp4) | int(tmp5));
	}
	else{
		HX_STACK_LINE(226)
		int tmp4 = ch1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		int tmp5 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		tmp3 = (int(tmp4) | int(tmp5));
	}
	HX_STACK_LINE(226)
	int n = tmp3;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(227)
	int tmp4 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(227)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(227)
	if ((tmp5)){
		HX_STACK_LINE(228)
		int tmp6 = (n - (int)65536);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		return tmp6;
	}
	HX_STACK_LINE(229)
	int tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(229)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt16,return )

int Input_obj::readUInt16( ){
	HX_STACK_FRAME("haxe.io.Input","readUInt16",0x05cae019,"haxe.io.Input.readUInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",237,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(239)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(240)
	bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	if ((tmp2)){
		HX_STACK_LINE(240)
		int tmp4 = ch2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		tmp3 = (int(tmp4) | int(tmp5));
	}
	else{
		HX_STACK_LINE(240)
		int tmp4 = ch1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		tmp3 = (int(tmp4) | int(tmp5));
	}
	HX_STACK_LINE(240)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readUInt16,return )

int Input_obj::readInt24( ){
	HX_STACK_FRAME("haxe.io.Input","readInt24",0xde2f3077,"haxe.io.Input.readInt24","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",248,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(250)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(251)
	int tmp2 = this->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(252)
	bool tmp3 = this->bigEndian;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	if ((tmp3)){
		HX_STACK_LINE(252)
		int tmp5 = ch3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		int tmp6 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		int tmp8 = (int(ch1) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		tmp4 = (int(tmp7) | int(tmp8));
	}
	else{
		HX_STACK_LINE(252)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		int tmp6 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		int tmp8 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		tmp4 = (int(tmp7) | int(tmp8));
	}
	HX_STACK_LINE(252)
	int n = tmp4;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(253)
	int tmp5 = (int(n) & int((int)8388608));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(253)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(253)
	if ((tmp6)){
		HX_STACK_LINE(254)
		int tmp7 = (n - (int)16777216);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		return tmp7;
	}
	HX_STACK_LINE(255)
	int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(255)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt24,return )

int Input_obj::readUInt24( ){
	HX_STACK_FRAME("haxe.io.Input","readUInt24",0x05cae0f6,"haxe.io.Input.readUInt24","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",263,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(265)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(266)
	int tmp2 = this->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(267)
	bool tmp3 = this->bigEndian;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(267)
	if ((tmp3)){
		HX_STACK_LINE(267)
		int tmp5 = ch3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(267)
		int tmp6 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(267)
		int tmp8 = (int(ch1) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(267)
		tmp4 = (int(tmp7) | int(tmp8));
	}
	else{
		HX_STACK_LINE(267)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(267)
		int tmp6 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(267)
		int tmp8 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(267)
		tmp4 = (int(tmp7) | int(tmp8));
	}
	HX_STACK_LINE(267)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readUInt24,return )

int Input_obj::readInt32( ){
	HX_STACK_FRAME("haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",275,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(277)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(278)
	int tmp2 = this->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(279)
	int tmp3 = this->readByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(287)
	bool tmp4 = this->bigEndian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(287)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(287)
	if ((tmp4)){
		HX_STACK_LINE(287)
		int tmp6 = ch4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		int tmp9 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		int tmp11 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		tmp5 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(287)
		int tmp6 = ch1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		int tmp9 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		int tmp11 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		tmp5 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(287)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString( int len){
	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",294,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(295)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(296)
	::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	this->readFullBytes(tmp2,(int)0,tmp3);
	HX_STACK_LINE(300)
	::String tmp4 = b->toString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )

Dynamic Input_obj::_float_of_bytes;

Dynamic Input_obj::_double_of_bytes;


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { return readAll_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt8") ) { return readInt8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readUntil") ) { return readUntil_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt16") ) { return readInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt24") ) { return readInt24_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return readInt32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"readUInt16") ) { return readUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"readUInt24") ) { return readUInt24_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return readFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { outValue = _float_of_bytes; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { outValue = _double_of_bytes; return true;  }
	}
	return false;
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return set_bigEndian(inValue);bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Input_obj::_float_of_bytes,HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Input_obj::_double_of_bytes,HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("readAll","\x6b","\x9f","\xc3","\x02"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readUntil","\x68","\x05","\xd7","\x77"),
	HX_HCSTRING("readLine","\x6a","\xf2","\xaa","\x6f"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readInt8","\xdf","\x1e","\xb3","\x6d"),
	HX_HCSTRING("readInt16","\x5e","\xde","\x07","\x8f"),
	HX_HCSTRING("readUInt16","\xd5","\x1c","\x8b","\x12"),
	HX_HCSTRING("readInt24","\x3b","\xdf","\x07","\x8f"),
	HX_HCSTRING("readUInt24","\xb2","\x1d","\x8b","\x12"),
	HX_HCSTRING("readInt32","\x18","\xe0","\x07","\x8f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(Input_obj::_double_of_bytes,"_double_of_bytes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(Input_obj::_double_of_bytes,"_double_of_bytes");
};

#endif

hx::Class Input_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f"),
	HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d"),
	::String(null()) };

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Input_obj::__boot()
{
	_float_of_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("float_of_bytes","\x46","\xba","\xcb","\xd5"),(int)2);
	_double_of_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("double_of_bytes","\x31","\x7e","\x6b","\x42"),(int)2);
}

} // end namespace haxe
} // end namespace io
