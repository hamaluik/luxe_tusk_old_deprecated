#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace haxe{
namespace io{

Void Output_obj::__construct()
{
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new()
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Void Output_obj::writeByte( int c){
{
		HX_STACK_FRAME("haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",47,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",57,0x05ec9a64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(58)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(59)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(61)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp2)){
		HX_STACK_LINE(61)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(61)
		tmp3 = true;
	}
	HX_STACK_LINE(61)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	if ((tmp4)){
		HX_STACK_LINE(61)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(61)
		tmp5 = true;
	}
	HX_STACK_LINE(61)
	if ((tmp5)){
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(64)
	while((true)){
		HX_STACK_LINE(64)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		if ((tmp7)){
			HX_STACK_LINE(64)
			break;
		}
		HX_STACK_LINE(70)
		int tmp8 = b->__get(pos);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		this->writeByte(tmp8);
		HX_STACK_LINE(74)
		(pos)++;
		HX_STACK_LINE(75)
		(k)--;
	}
	HX_STACK_LINE(77)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

Void Output_obj::flush( ){
{
		HX_STACK_FRAME("haxe.io.Output","flush",0xa15f0af7,"haxe.io.Output.flush","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",83,0x05ec9a64)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,flush,(void))

Void Output_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",91,0x05ec9a64)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

bool Output_obj::set_bigEndian( bool b){
	HX_STACK_FRAME("haxe.io.Output","set_bigEndian",0x33881e91,"haxe.io.Output.set_bigEndian","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",94,0x05ec9a64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(95)
	this->bigEndian = b;
	HX_STACK_LINE(96)
	bool tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,set_bigEndian,return )

Void Output_obj::write( ::haxe::io::Bytes s){
{
		HX_STACK_FRAME("haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",104,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(105)
		int l = s->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(106)
		int p = (int)0;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp = (l > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(108)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			int tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			int tmp5 = this->writeBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(109)
			bool tmp6 = (k == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			if ((tmp6)){
				HX_STACK_LINE(109)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
			}
			HX_STACK_LINE(110)
			hx::AddEq(p,k);
			HX_STACK_LINE(111)
			hx::SubEq(l,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

Void Output_obj::writeFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Output","writeFullBytes",0xc2c420ea,"haxe.io.Output.writeFullBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",121,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(121)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			if ((tmp1)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			int tmp5 = this->writeBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(123)
			hx::AddEq(pos,k);
			HX_STACK_LINE(124)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeFullBytes,(void))

Void Output_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("haxe.io.Output","writeFloat",0xee877f2a,"haxe.io.Output.writeFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",133,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(134)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		int tmp1 = ::haxe::io::FPHelper_obj::floatToI32(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		this->writeInt32(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeFloat,(void))

Void Output_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("haxe.io.Output","writeDouble",0xb97ccdc3,"haxe.io.Output.writeDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",142,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(143)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		cpp::Int64Struct tmp1 = ::haxe::io::FPHelper_obj::doubleToI64(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		cpp::Int64Struct i64 = tmp1;		HX_STACK_VAR(i64,"i64");
		HX_STACK_LINE(144)
		bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		if ((tmp2)){
			HX_STACK_LINE(145)
			this->writeInt32((int)(((cpp::Int64)(i64))>>32));
			HX_STACK_LINE(146)
			this->writeInt32((int)((i64)&0xffffffff));
		}
		else{
			HX_STACK_LINE(148)
			this->writeInt32((int)((i64)&0xffffffff));
			HX_STACK_LINE(149)
			this->writeInt32((int)(((cpp::Int64)(i64))>>32));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeDouble,(void))

Void Output_obj::writeInt8( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeInt8",0xb996769b,"haxe.io.Output.writeInt8","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",156,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(157)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		int tmp1 = (int)-128;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp3)){
			HX_STACK_LINE(157)
			tmp4 = (x >= (int)128);
		}
		else{
			HX_STACK_LINE(157)
			tmp4 = true;
		}
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(158)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
		}
		HX_STACK_LINE(159)
		int tmp5 = (int(x) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		this->writeByte(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt8,(void))

Void Output_obj::writeInt16( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeInt16",0xaa114b22,"haxe.io.Output.writeInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",167,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(168)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		int tmp1 = (int)-32768;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		if ((tmp3)){
			HX_STACK_LINE(168)
			tmp4 = (x >= (int)32768);
		}
		else{
			HX_STACK_LINE(168)
			tmp4 = true;
		}
		HX_STACK_LINE(168)
		if ((tmp4)){
			HX_STACK_LINE(168)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
		}
		HX_STACK_LINE(169)
		int tmp5 = (int(x) & int((int)65535));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		this->writeUInt16(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt16,(void))

Void Output_obj::writeUInt16( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeUInt16",0x9fc0db91,"haxe.io.Output.writeUInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",177,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(178)
		bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp1)){
			HX_STACK_LINE(178)
			tmp2 = (x >= (int)65536);
		}
		else{
			HX_STACK_LINE(178)
			tmp2 = true;
		}
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(178)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
		}
		HX_STACK_LINE(179)
		bool tmp3 = this->bigEndian;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		if ((tmp3)){
			HX_STACK_LINE(180)
			int tmp4 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			this->writeByte(tmp4);
			HX_STACK_LINE(181)
			int tmp5 = (int(x) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			this->writeByte(tmp5);
		}
		else{
			HX_STACK_LINE(183)
			int tmp4 = (int(x) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			this->writeByte(tmp4);
			HX_STACK_LINE(184)
			int tmp5 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			this->writeByte(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeUInt16,(void))

Void Output_obj::writeInt24( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeInt24",0xaa114bff,"haxe.io.Output.writeInt24","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",193,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(194)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = (int)-8388608;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		if ((tmp3)){
			HX_STACK_LINE(194)
			tmp4 = (x >= (int)8388608);
		}
		else{
			HX_STACK_LINE(194)
			tmp4 = true;
		}
		HX_STACK_LINE(194)
		if ((tmp4)){
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
		}
		HX_STACK_LINE(195)
		int tmp5 = (int(x) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		this->writeUInt24(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt24,(void))

Void Output_obj::writeUInt24( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeUInt24",0x9fc0dc6e,"haxe.io.Output.writeUInt24","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",203,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(204)
		bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(204)
			tmp2 = (x >= (int)16777216);
		}
		else{
			HX_STACK_LINE(204)
			tmp2 = true;
		}
		HX_STACK_LINE(204)
		if ((tmp2)){
			HX_STACK_LINE(204)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
		}
		HX_STACK_LINE(205)
		bool tmp3 = this->bigEndian;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(206)
			int tmp4 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			this->writeByte(tmp4);
			HX_STACK_LINE(207)
			int tmp5 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(207)
			this->writeByte(tmp6);
			HX_STACK_LINE(208)
			int tmp7 = (int(x) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			this->writeByte(tmp7);
		}
		else{
			HX_STACK_LINE(210)
			int tmp4 = (int(x) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			this->writeByte(tmp4);
			HX_STACK_LINE(211)
			int tmp5 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			this->writeByte(tmp6);
			HX_STACK_LINE(212)
			int tmp7 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			this->writeByte(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeUInt24,(void))

Void Output_obj::writeInt32( int x){
{
		HX_STACK_FRAME("haxe.io.Output","writeInt32",0xaa114cdc,"haxe.io.Output.writeInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",221,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(222)
		bool tmp = this->bigEndian;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		if ((tmp)){
			HX_STACK_LINE(223)
			int tmp1 = hx::UShr(x,(int)24);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			this->writeByte(tmp1);
			HX_STACK_LINE(224)
			int tmp2 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			this->writeByte(tmp3);
			HX_STACK_LINE(225)
			int tmp4 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			this->writeByte(tmp5);
			HX_STACK_LINE(226)
			int tmp6 = (int(x) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			this->writeByte(tmp6);
		}
		else{
			HX_STACK_LINE(228)
			int tmp1 = (int(x) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(228)
			this->writeByte(tmp1);
			HX_STACK_LINE(229)
			int tmp2 = (int(x) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			this->writeByte(tmp3);
			HX_STACK_LINE(230)
			int tmp4 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			this->writeByte(tmp5);
			HX_STACK_LINE(231)
			int tmp6 = hx::UShr(x,(int)24);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			this->writeByte(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt32,(void))

Void Output_obj::prepare( int nbytes){
{
		HX_STACK_FRAME("haxe.io.Output","prepare",0xcd01ec7a,"haxe.io.Output.prepare","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",242,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nbytes,"nbytes")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,prepare,(void))

Void Output_obj::writeInput( ::haxe::io::Input i,Dynamic bufsize){
{
		HX_STACK_FRAME("haxe.io.Output","writeInput",0xaa0e7d98,"haxe.io.Output.writeInput","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",251,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(bufsize,"bufsize")
		HX_STACK_LINE(252)
		bool tmp = (bufsize == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(253)
			bufsize = (int)4096;
		}
		HX_STACK_LINE(254)
		Dynamic tmp1 = bufsize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		::haxe::io::Bytes buf = tmp2;		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(255)
		try
		{
		HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
		{
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(257)
				::haxe::io::Bytes tmp3 = buf;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(257)
				Dynamic tmp4 = bufsize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				int tmp5 = i->readBytes(tmp3,(int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				int len = tmp5;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(258)
				bool tmp6 = (len == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				if ((tmp6)){
					HX_STACK_LINE(259)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
				}
				HX_STACK_LINE(260)
				int p = (int)0;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(261)
				while((true)){
					HX_STACK_LINE(261)
					bool tmp7 = (len > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(261)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					if ((tmp8)){
						HX_STACK_LINE(261)
						break;
					}
					HX_STACK_LINE(262)
					::haxe::io::Bytes tmp9 = buf;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(262)
					int tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(262)
					int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(262)
					int tmp12 = this->writeBytes(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(262)
					int k = tmp12;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(263)
					bool tmp13 = (k == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(263)
					if ((tmp13)){
						HX_STACK_LINE(264)
						HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
					}
					HX_STACK_LINE(265)
					hx::AddEq(p,k);
					HX_STACK_LINE(266)
					hx::SubEq(len,k);
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
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Output_obj,writeInput,(void))

Void Output_obj::writeString( ::String s){
{
		HX_STACK_FRAME("haxe.io.Output","writeString",0x97e1cb83,"haxe.io.Output.writeString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",276,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(280)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(282)
		::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		int tmp3 = b->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		this->writeFullBytes(tmp2,(int)0,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeString,(void))


Output_obj::Output_obj()
{
}

Dynamic Output_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt8") ) { return writeInt8_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt16") ) { return writeInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt24") ) { return writeInt24_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt32") ) { return writeInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInput") ) { return writeInput_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUInt16") ) { return writeUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUInt24") ) { return writeUInt24_dyn(); }
		if (HX_FIELD_EQ(inName,"writeString") ) { return writeString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeFullBytes") ) { return writeFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Output_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return set_bigEndian(inValue);bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Output_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Output_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeFullBytes","\x7d","\xe7","\x66","\xa4"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeInt8","\xe8","\x38","\x6f","\x4e"),
	HX_HCSTRING("writeInt16","\x35","\x8c","\xe2","\x52"),
	HX_HCSTRING("writeUInt16","\x1e","\x8b","\x08","\xae"),
	HX_HCSTRING("writeInt24","\x12","\x8d","\xe2","\x52"),
	HX_HCSTRING("writeUInt24","\xfb","\x8b","\x08","\xae"),
	HX_HCSTRING("writeInt32","\xef","\x8d","\xe2","\x52"),
	HX_HCSTRING("prepare","\x87","\x91","\xdd","\x37"),
	HX_HCSTRING("writeInput","\xab","\xbe","\xdf","\x52"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Output","\x61","\x10","\x0b","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
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

} // end namespace haxe
} // end namespace io
