#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io__ArrayBufferView_ArrayBufferView_Impl_
#include <haxe/io/_ArrayBufferView/ArrayBufferView_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io__Float64Array_Float64Array_Impl_
#include <haxe/io/_Float64Array/Float64Array_Impl_.h>
#endif
namespace haxe{
namespace io{
namespace _Float64Array{

Void Float64Array_Impl__obj::__construct()
{
	return null();
}

//Float64Array_Impl__obj::~Float64Array_Impl__obj() { }

Dynamic Float64Array_Impl__obj::__CreateEmpty() { return  new Float64Array_Impl__obj; }
hx::ObjectPtr< Float64Array_Impl__obj > Float64Array_Impl__obj::__new()
{  hx::ObjectPtr< Float64Array_Impl__obj > _result_ = new Float64Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Float64Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float64Array_Impl__obj > _result_ = new Float64Array_Impl__obj();
	_result_->__construct();
	return _result_;}

int Float64Array_Impl__obj::BYTES_PER_ELEMENT;

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::_new( int elements){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","_new",0xce63e380,"haxe.io._Float64Array.Float64Array_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",32,0x08106406)
	HX_STACK_ARG(elements,"elements")
	HX_STACK_LINE(32)
	::haxe::io::ArrayBufferViewImpl this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(33)
	::haxe::io::ArrayBufferViewImpl tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxe::io::ArrayBufferViewImpl tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int tmp2 = (elements * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			int size = tmp2;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(33)
			::haxe::io::ArrayBufferViewImpl this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(33)
			int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			::haxe::io::ArrayBufferViewImpl tmp6 = ::haxe::io::ArrayBufferViewImpl_obj::__new(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			this2 = tmp6;
			HX_STACK_LINE(33)
			tmp1 = this2;
		}
		HX_STACK_LINE(33)
		::haxe::io::ArrayBufferViewImpl this2 = tmp1;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(33)
		tmp = this2;
	}
	HX_STACK_LINE(33)
	this1 = tmp;
	HX_STACK_LINE(32)
	::haxe::io::ArrayBufferViewImpl tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,_new,return )

int Float64Array_Impl__obj::get_length( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","get_length",0x387bb40e,"haxe.io._Float64Array.Float64Array_Impl_.get_length","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",36,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(37)
	int tmp = (int(this1->byteLength) >> int((int)3));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,get_length,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::get_view( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","get_view",0xb439b78d,"haxe.io._Float64Array.Float64Array_Impl_.get_view","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",40,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(41)
	::haxe::io::ArrayBufferViewImpl tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,get_view,return )

Float Float64Array_Impl__obj::get( ::haxe::io::ArrayBufferViewImpl this1,int index){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","get",0x13511b57,"haxe.io._Float64Array.Float64Array_Impl_.get","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",44,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::io::Bytes _this = this1->bytes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		int tmp1 = (int(index) << int((int)3));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		int tmp2 = this1->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		int pos = tmp3;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(45)
		bool tmp4 = (pos < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		if ((tmp5)){
			HX_STACK_LINE(45)
			int tmp7 = (pos + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			int tmp9 = _this->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			tmp6 = (tmp8 > tmp9);
		}
		else{
			HX_STACK_LINE(45)
			tmp6 = true;
		}
		HX_STACK_LINE(45)
		if ((tmp6)){
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(45)
		tmp = ::__hxcpp_memory_get_float(_this->b,pos);
	}
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Float64Array_Impl__obj,get,return )

Float Float64Array_Impl__obj::set( ::haxe::io::ArrayBufferViewImpl this1,int index,Float value){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","set",0x135a3663,"haxe.io._Float64Array.Float64Array_Impl_.set","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",48,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(49)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp)){
		HX_STACK_LINE(49)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = this1->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		int tmp5 = (int(tmp4) >> int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		tmp1 = (tmp2 < tmp6);
	}
	else{
		HX_STACK_LINE(49)
		tmp1 = false;
	}
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(50)
		int tmp2 = (int(index) << int((int)3));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		int tmp3 = this1->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this1->bytes->setFloat(tmp4,tmp5);
		HX_STACK_LINE(51)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		return tmp6;
	}
	HX_STACK_LINE(53)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,set,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::sub( ::haxe::io::ArrayBufferViewImpl this1,int begin,Dynamic length){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","sub",0x135a4441,"haxe.io._Float64Array.Float64Array_Impl_.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",56,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(57)
	int tmp = (int(begin) << int((int)3));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = (length == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(57)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(57)
		tmp2 = (int(length) << int((int)3));
	}
	HX_STACK_LINE(57)
	::haxe::io::ArrayBufferViewImpl tmp3 = this1->sub(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::haxe::io::ArrayBufferViewImpl tmp4 = ::haxe::io::_Float64Array::Float64Array_Impl__obj::fromData(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,sub,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::subarray( ::haxe::io::ArrayBufferViewImpl this1,Dynamic begin,Dynamic end){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","subarray",0xedb11db8,"haxe.io._Float64Array.Float64Array_Impl_.subarray","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",60,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(61)
	bool tmp = (begin == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(61)
		tmp1 = (int(begin) << int((int)3));
	}
	HX_STACK_LINE(61)
	bool tmp2 = (end == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp2)){
		HX_STACK_LINE(61)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(61)
		tmp3 = (int(end) << int((int)3));
	}
	HX_STACK_LINE(61)
	::haxe::io::ArrayBufferViewImpl tmp4 = this1->subarray(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	::haxe::io::ArrayBufferViewImpl tmp5 = ::haxe::io::_Float64Array::Float64Array_Impl__obj::fromData(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,subarray,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::getData( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","getData",0xa6939521,"haxe.io._Float64Array.Float64Array_Impl_.getData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",64,0x08106406)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(65)
	::haxe::io::ArrayBufferViewImpl tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,getData,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::fromData( ::haxe::io::ArrayBufferViewImpl d){
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","fromData",0x865eee53,"haxe.io._Float64Array.Float64Array_Impl_.fromData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",68,0x08106406)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(69)
	::haxe::io::ArrayBufferViewImpl tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,fromData,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::fromArray( Array< Float > a,hx::Null< int >  __o_pos,Dynamic length){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","fromArray",0x5db8f950,"haxe.io._Float64Array.Float64Array_Impl_.fromArray","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",72,0x08106406)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(73)
		bool tmp = (length == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		if ((tmp)){
			HX_STACK_LINE(73)
			int tmp1 = (a->length - pos);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			length = tmp1;
		}
		HX_STACK_LINE(74)
		bool tmp1 = (pos < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(74)
			tmp4 = (length < (int)0);
		}
		else{
			HX_STACK_LINE(74)
			tmp4 = true;
		}
		HX_STACK_LINE(74)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		if ((tmp5)){
			HX_STACK_LINE(74)
			int tmp7 = (pos + length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			int tmp9 = a->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			tmp6 = (tmp8 > tmp9);
		}
		else{
			HX_STACK_LINE(74)
			tmp6 = true;
		}
		HX_STACK_LINE(74)
		if ((tmp6)){
			HX_STACK_LINE(74)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(75)
		::haxe::io::ArrayBufferViewImpl tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::haxe::io::ArrayBufferViewImpl this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(75)
			::haxe::io::ArrayBufferViewImpl tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::haxe::io::ArrayBufferViewImpl tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					int tmp10 = (a->length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(75)
					int size = tmp10;		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(75)
					::haxe::io::ArrayBufferViewImpl this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(75)
					int tmp11 = size;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(75)
					::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(75)
					int tmp13 = size;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(75)
					::haxe::io::ArrayBufferViewImpl tmp14 = ::haxe::io::ArrayBufferViewImpl_obj::__new(tmp12,(int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(75)
					this2 = tmp14;
					HX_STACK_LINE(75)
					tmp9 = this2;
				}
				HX_STACK_LINE(75)
				::haxe::io::ArrayBufferViewImpl this2 = tmp9;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(75)
				tmp8 = this2;
			}
			HX_STACK_LINE(75)
			this1 = tmp8;
			HX_STACK_LINE(75)
			tmp7 = this1;
		}
		HX_STACK_LINE(75)
		::haxe::io::ArrayBufferViewImpl i = tmp7;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				bool tmp8 = (_g < length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				if ((tmp9)){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(76)
				int idx = tmp10;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(77)
				int tmp11 = (idx + pos);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(77)
				Float tmp12 = a->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(77)
				Float value = tmp12;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(77)
				bool tmp13 = (idx >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(77)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(77)
				if ((tmp13)){
					HX_STACK_LINE(77)
					int tmp15 = idx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(77)
					int tmp16 = i->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(77)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(77)
					int tmp18 = (int(tmp17) >> int((int)3));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(77)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(77)
					tmp14 = (tmp15 < tmp19);
				}
				else{
					HX_STACK_LINE(77)
					tmp14 = false;
				}
				HX_STACK_LINE(77)
				if ((tmp14)){
					HX_STACK_LINE(77)
					::haxe::io::Bytes tmp15 = i->bytes;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(77)
					int tmp16 = (int(idx) << int((int)3));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(77)
					int tmp17 = i->byteOffset;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(77)
					int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(77)
					Float tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(77)
					tmp15->setFloat(tmp18,tmp19);
					HX_STACK_LINE(77)
					value;
				}
				else{
					HX_STACK_LINE(77)
					(int)0;
				}
			}
		}
		HX_STACK_LINE(78)
		::haxe::io::ArrayBufferViewImpl tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,fromArray,return )

::haxe::io::ArrayBufferViewImpl Float64Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_bytePos,Dynamic length){
int bytePos = __o_bytePos.Default(0);
	HX_STACK_FRAME("haxe.io._Float64Array.Float64Array_Impl_","fromBytes",0xf5c19422,"haxe.io._Float64Array.Float64Array_Impl_.fromBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Float64Array.hx",81,0x08106406)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(bytePos,"bytePos")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(82)
		::haxe::io::ArrayBufferViewImpl tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			int tmp2 = bytePos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			bool tmp3 = (length == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp3)){
				HX_STACK_LINE(82)
				int tmp5 = (bytes->length - bytePos);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				tmp4 = (int(tmp5) >> int((int)3));
			}
			else{
				HX_STACK_LINE(82)
				tmp4 = length;
			}
			HX_STACK_LINE(82)
			int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			::haxe::io::ArrayBufferViewImpl tmp6 = ::haxe::io::_ArrayBufferView::ArrayBufferView_Impl__obj::fromBytes(tmp1,tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			::haxe::io::ArrayBufferViewImpl this1 = tmp6;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(82)
			tmp = this1;
		}
		HX_STACK_LINE(82)
		::haxe::io::ArrayBufferViewImpl tmp1 = ::haxe::io::_Float64Array::Float64Array_Impl__obj::fromData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,fromBytes,return )


Float64Array_Impl__obj::Float64Array_Impl__obj()
{
}

bool Float64Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { outValue = getData_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_view") ) { outValue = get_view_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromData") ) { outValue = fromData_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Float64Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float64Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float64Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Float64Array_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("fromData","\xb4","\x24","\x2f","\xa0"),
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void Float64Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io._Float64Array.Float64Array_Impl_","\xaf","\x46","\xe0","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float64Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float64Array_Impl__obj >;
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

void Float64Array_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)8;
}

} // end namespace haxe
} // end namespace io
} // end namespace _Float64Array
