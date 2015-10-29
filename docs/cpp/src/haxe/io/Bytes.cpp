#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void Bytes_obj::__construct(int length,Array< unsigned char > b)
{
HX_STACK_FRAME("haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",33,0x20b05d0c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(34)
	this->length = length;
	HX_STACK_LINE(35)
	this->b = b;
}
;
	return null();
}

//Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > b)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(length,b);
	return _result_;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int Bytes_obj::get( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","get",0x393385b3,"haxe.io.Bytes.get","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",41,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(49)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,get,return )

Void Bytes_obj::set( int pos,int v){
{
		HX_STACK_FRAME("haxe.io.Bytes","set",0x393ca0bf,"haxe.io.Bytes.set","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",59,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(67)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,set,(void))

Void Bytes_obj::blit( int pos,::haxe::io::Bytes src,int srcpos,int len){
{
		HX_STACK_FRAME("haxe.io.Bytes","blit",0xd098ac78,"haxe.io.Bytes.blit","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",79,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(srcpos,"srcpos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(81)
		bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(81)
			tmp3 = (srcpos < (int)0);
		}
		else{
			HX_STACK_LINE(81)
			tmp3 = true;
		}
		HX_STACK_LINE(81)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		if ((tmp5)){
			HX_STACK_LINE(81)
			tmp6 = (len < (int)0);
		}
		else{
			HX_STACK_LINE(81)
			tmp6 = true;
		}
		HX_STACK_LINE(81)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		if ((tmp8)){
			HX_STACK_LINE(81)
			int tmp10 = (pos + len);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			tmp9 = (tmp12 > tmp15);
		}
		else{
			HX_STACK_LINE(81)
			tmp9 = true;
		}
		HX_STACK_LINE(81)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(81)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		if ((tmp10)){
			HX_STACK_LINE(81)
			int tmp12 = (srcpos + len);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			int tmp14 = src->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			tmp11 = (tmp13 > tmp14);
		}
		else{
			HX_STACK_LINE(81)
			tmp11 = true;
		}
		HX_STACK_LINE(81)
		if ((tmp11)){
			HX_STACK_LINE(81)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			int tmp13 = srcpos;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			this->b->blit(tmp12,src->b,tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

Void Bytes_obj::fill( int pos,int len,int value){
{
		HX_STACK_FRAME("haxe.io.Bytes","fill",0xd33b42c6,"haxe.io.Bytes.fill","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",126,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(126)
		::__hxcpp_memory_memset(this->b,pos,len,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Bytes_obj,fill,(void))

::haxe::io::Bytes Bytes_obj::sub( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","sub",0x393cae9d,"haxe.io.Bytes.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",133,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(135)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	if ((tmp2)){
		HX_STACK_LINE(135)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(135)
		tmp3 = true;
	}
	HX_STACK_LINE(135)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(135)
	if ((tmp4)){
		HX_STACK_LINE(135)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		tmp5 = (tmp7 > tmp9);
	}
	else{
		HX_STACK_LINE(135)
		tmp5 = true;
	}
	HX_STACK_LINE(135)
	if ((tmp5)){
		HX_STACK_LINE(135)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(157)
	int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	int tmp7 = (pos + len);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::__new(len,this->b->slice(tmp6,tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(157)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

int Bytes_obj::compare( ::haxe::io::Bytes other){
	HX_STACK_FRAME("haxe.io.Bytes","compare",0x46537042,"haxe.io.Bytes.compare","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",161,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(195)
	int tmp = this->b->memcmp(other->b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,compare,return )

Float Bytes_obj::getDouble( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","getDouble",0xc306ed24,"haxe.io.Bytes.getDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",213,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(220)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	if ((tmp1)){
		HX_STACK_LINE(220)
		int tmp3 = (pos + (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		tmp2 = (tmp4 > tmp6);
	}
	else{
		HX_STACK_LINE(220)
		tmp2 = true;
	}
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(220)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(221)
	Float tmp3 = ::__hxcpp_memory_get_double(this->b,pos);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getDouble,return )

Float Bytes_obj::getFloat( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","getFloat",0x2c9026e9,"haxe.io.Bytes.getFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",232,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(239)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(239)
		int tmp3 = (pos + (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		tmp2 = (tmp4 > tmp6);
	}
	else{
		HX_STACK_LINE(239)
		tmp2 = true;
	}
	HX_STACK_LINE(239)
	if ((tmp2)){
		HX_STACK_LINE(239)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(240)
	Float tmp3 = ::__hxcpp_memory_get_float(this->b,pos);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getFloat,return )

Void Bytes_obj::setDouble( int pos,Float v){
{
		HX_STACK_FRAME("haxe.io.Bytes","setDouble",0xa657d930,"haxe.io.Bytes.setDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",252,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(261)
		bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		if ((tmp1)){
			HX_STACK_LINE(261)
			int tmp3 = (pos + (int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			tmp2 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(261)
			tmp2 = true;
		}
		HX_STACK_LINE(261)
		if ((tmp2)){
			HX_STACK_LINE(261)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(262)
		::__hxcpp_memory_set_double(this->b,pos,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setDouble,(void))

Void Bytes_obj::setFloat( int pos,Float v){
{
		HX_STACK_FRAME("haxe.io.Bytes","setFloat",0xdaed805d,"haxe.io.Bytes.setFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",275,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(284)
		bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		if ((tmp1)){
			HX_STACK_LINE(284)
			int tmp3 = (pos + (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			tmp2 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(284)
			tmp2 = true;
		}
		HX_STACK_LINE(284)
		if ((tmp2)){
			HX_STACK_LINE(284)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(285)
		::__hxcpp_memory_set_float(this->b,pos,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setFloat,(void))

int Bytes_obj::getUInt16( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","getUInt16",0xa94afaf2,"haxe.io.Bytes.getUInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",294,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(298)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	int tmp1 = (pos + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	int tmp2 = this->b->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	int tmp3 = (int(tmp2) << int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(298)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getUInt16,return )

Void Bytes_obj::setUInt16( int pos,int v){
{
		HX_STACK_FRAME("haxe.io.Bytes","setUInt16",0x8c9be6fe,"haxe.io.Bytes.setUInt16","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",305,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int tmp = v;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(309)
			this->b[pos] = tmp;
		}
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			int tmp = (pos + (int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(310)
			int tmp1 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			this->b[tmp] = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setUInt16,(void))

int Bytes_obj::getInt32( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","getInt32",0xe819f49b,"haxe.io.Bytes.getInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",317,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(324)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	int tmp1 = (pos + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	int tmp2 = this->b->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	int tmp3 = (int(tmp2) << int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(324)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(324)
	int tmp5 = (pos + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(324)
	int tmp6 = this->b->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(324)
	int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(324)
	int tmp8 = (int(tmp4) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(324)
	int tmp9 = (pos + (int)3);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(324)
	int tmp10 = this->b->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(324)
	int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(324)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(324)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getInt32,return )

cpp::Int64Struct Bytes_obj::getInt64( int pos){
	HX_STACK_FRAME("haxe.io.Bytes","getInt64",0xe819f73a,"haxe.io.Bytes.getInt64","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",332,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	struct _Function_1_1{
		inline static int Block( int &pos,hx::ObjectPtr< ::haxe::io::Bytes_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",332,0x20b05d0c)
			{
				HX_STACK_LINE(332)
				int pos1 = (pos + (int)4);		HX_STACK_VAR(pos1,"pos1");
				HX_STACK_LINE(332)
				return (int((int((int(__this->b->__get(pos1)) | int((int(__this->b->__get((pos1 + (int)1))) << int((int)8))))) | int((int(__this->b->__get((pos1 + (int)2))) << int((int)16))))) | int((int(__this->b->__get((pos1 + (int)3))) << int((int)24))));
			}
			return null();
		}
	};
	HX_STACK_LINE(332)
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)_Function_1_1::Block(pos,this)) ) << 32 ) | ((unsigned int)(int((int((int(this->b->__get(pos)) | int((int(this->b->__get((pos + (int)1))) << int((int)8))))) | int((int(this->b->__get((pos + (int)2))) << int((int)16))))) | int((int(this->b->__get((pos + (int)3))) << int((int)24))))));
}


HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,getInt64,return )

Void Bytes_obj::setInt32( int pos,int v){
{
		HX_STACK_FRAME("haxe.io.Bytes","setInt32",0x96774e0f,"haxe.io.Bytes.setInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",338,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			int tmp = v;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(342)
			this->b[pos] = tmp;
		}
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			int tmp = (pos + (int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(343)
			int tmp1 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			this->b[tmp] = tmp1;
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int tmp = (pos + (int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(344)
			int tmp1 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(344)
			this->b[tmp] = tmp1;
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int tmp = (pos + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(345)
			int tmp1 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			this->b[tmp] = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setInt32,(void))

Void Bytes_obj::setInt64( int pos,cpp::Int64Struct v){
{
		HX_STACK_FRAME("haxe.io.Bytes","setInt64",0x967750ae,"haxe.io.Bytes.setInt64","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",352,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int v1 = (int)((v)&0xffffffff);		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				int tmp = v1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(353)
				this->b[pos] = tmp;
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				int tmp = (pos + (int)1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(353)
				int tmp1 = (int(v1) >> int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(353)
				this->b[tmp] = tmp1;
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				int tmp = (pos + (int)2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(353)
				int tmp1 = (int(v1) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(353)
				this->b[tmp] = tmp1;
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				int tmp = (pos + (int)3);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(353)
				int tmp1 = hx::UShr(v1,(int)24);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(353)
				this->b[tmp] = tmp1;
			}
		}
		HX_STACK_LINE(354)
		{
			HX_STACK_LINE(354)
			int tmp = (pos + (int)4);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(354)
			int pos1 = tmp;		HX_STACK_VAR(pos1,"pos1");
			HX_STACK_LINE(354)
			int v1 = (int)(((cpp::Int64)(v))>>32);		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				int tmp1 = v1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(354)
				this->b[pos1] = tmp1;
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				int tmp1 = (pos1 + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(354)
				int tmp2 = (int(v1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(354)
				this->b[tmp1] = tmp2;
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				int tmp1 = (pos1 + (int)2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(354)
				int tmp2 = (int(v1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(354)
				this->b[tmp1] = tmp2;
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				int tmp1 = (pos1 + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(354)
				int tmp2 = hx::UShr(v1,(int)24);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(354)
				this->b[tmp1] = tmp2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setInt64,(void))

::String Bytes_obj::getString( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",357,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(359)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(359)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(359)
	if ((tmp2)){
		HX_STACK_LINE(359)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(359)
		tmp3 = true;
	}
	HX_STACK_LINE(359)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(359)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(359)
	if ((tmp4)){
		HX_STACK_LINE(359)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(359)
		tmp5 = (tmp7 > tmp9);
	}
	else{
		HX_STACK_LINE(359)
		tmp5 = true;
	}
	HX_STACK_LINE(359)
	if ((tmp5)){
		HX_STACK_LINE(359)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(369)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(370)
	::__hxcpp_string_of_bytes(this->b,result,pos,len);
	HX_STACK_LINE(371)
	::String tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,getString,return )

::String Bytes_obj::readString( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","readString",0x5f58954a,"haxe.io.Bytes.readString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",412,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(413)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	::String tmp2 = this->getString(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(413)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,readString,return )

::String Bytes_obj::toString( ){
	HX_STACK_FRAME("haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",416,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	::String tmp1 = this->getString((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

::String Bytes_obj::toHex( ){
	HX_STACK_FRAME("haxe.io.Bytes","toHex",0x14173a7d,"haxe.io.Bytes.toHex","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",437,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(438)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(439)
	Array< ::Dynamic > chars = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(440)
	::String str = HX_HCSTRING("0123456789abcdef","\x68","\x7e","\xd5","\xef");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(441)
		int _g = str.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(441)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(441)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(441)
			if ((tmp2)){
				HX_STACK_LINE(441)
				break;
			}
			HX_STACK_LINE(441)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(442)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			Dynamic tmp5 = str.charCodeAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(442)
			chars->push(tmp5);
		}
	}
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(443)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(443)
		while((true)){
			HX_STACK_LINE(443)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(443)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			if ((tmp3)){
				HX_STACK_LINE(443)
				break;
			}
			HX_STACK_LINE(443)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(443)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(444)
			int tmp5 = this->b->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(444)
			int c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				int tmp6 = (int(c) >> int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(445)
				Dynamic tmp7 = chars->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(445)
				int c1 = tmp7;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(445)
				int tmp8 = c1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(445)
				::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(445)
				s->b->push(tmp9);
			}
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int tmp6 = (int(c) & int((int)15));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(446)
				Dynamic tmp7 = chars->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(446)
				int c1 = tmp7;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(446)
				int tmp8 = c1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(446)
				::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(446)
				s->b->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(448)
	::String tmp1 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(448)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toHex,return )

Array< unsigned char > Bytes_obj::getData( ){
	HX_STACK_FRAME("haxe.io.Bytes","getData",0xd7d05d7d,"haxe.io.Bytes.getData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",452,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	return this->b;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,getData,return )

::haxe::io::Bytes Bytes_obj::alloc( int length){
	HX_STACK_FRAME("haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",455,0x20b05d0c)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(465)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(466)
	bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	if ((tmp)){
		HX_STACK_LINE(466)
		int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		a[tmp1] = (int)0;
	}
	HX_STACK_LINE(467)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(length,a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

::haxe::io::Bytes Bytes_obj::ofString( ::String s){
	HX_STACK_FRAME("haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",482,0x20b05d0c)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(493)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(494)
	::__hxcpp_bytes_of_string(a,s);
	HX_STACK_LINE(495)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(a->length,a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::haxe::io::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	HX_STACK_FRAME("haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",540,0x20b05d0c)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(550)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(b->length,b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )

int Bytes_obj::fastGet( Array< unsigned char > b,int pos){
	HX_STACK_FRAME("haxe.io.Bytes","fastGet",0xa10d56f7,"haxe.io.Bytes.fastGet","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",558,0x20b05d0c)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(566)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(566)
	unsigned char tmp1 = b->__unsafe_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(566)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,fastGet,return )


Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toHex") ) { return toHex_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt64") ) { return getInt64_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt64") ) { return setInt64_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"setDouble") ) { return setDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt16") ) { return getUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt16") ) { return setUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true;  }
	}
	return false;
}

Dynamic Bytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(Bytes_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("blit","\x35","\x38","\x19","\x41"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("getUInt16","\x15","\xc2","\x65","\x95"),
	HX_HCSTRING("setUInt16","\x21","\xae","\xb6","\x78"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getInt64","\x77","\xa5","\xf7","\x1d"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setInt64","\xeb","\xfe","\x54","\xcc"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toHex","\x20","\xf4","\x10","\x14"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	HX_HCSTRING("fastGet","\x5a","\xff","\x22","\xde"),
	::String(null()) };

void Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Bytes","\x0b","\x53","\x6f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
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
