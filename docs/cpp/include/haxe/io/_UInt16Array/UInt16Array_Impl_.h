#ifndef INCLUDED_haxe_io__UInt16Array_UInt16Array_Impl_
#define INCLUDED_haxe_io__UInt16Array_UInt16Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,ArrayBufferViewImpl)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,io,_UInt16Array,UInt16Array_Impl_)
namespace haxe{
namespace io{
namespace _UInt16Array{


class HXCPP_CLASS_ATTRIBUTES  UInt16Array_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UInt16Array_Impl__obj OBJ_;
		UInt16Array_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.io._UInt16Array.UInt16Array_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UInt16Array_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UInt16Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UInt16Array_Impl_","\x3a","\x00","\x01","\xa4"); }

		static void __boot();
		static int BYTES_PER_ELEMENT;
		static ::haxe::io::ArrayBufferViewImpl _new( int elements);
		static Dynamic _new_dyn();

		static int get_length( ::haxe::io::ArrayBufferViewImpl this1);
		static Dynamic get_length_dyn();

		static ::haxe::io::ArrayBufferViewImpl get_view( ::haxe::io::ArrayBufferViewImpl this1);
		static Dynamic get_view_dyn();

		static int get( ::haxe::io::ArrayBufferViewImpl this1,int index);
		static Dynamic get_dyn();

		static int set( ::haxe::io::ArrayBufferViewImpl this1,int index,int value);
		static Dynamic set_dyn();

		static ::haxe::io::ArrayBufferViewImpl sub( ::haxe::io::ArrayBufferViewImpl this1,int begin,Dynamic length);
		static Dynamic sub_dyn();

		static ::haxe::io::ArrayBufferViewImpl subarray( ::haxe::io::ArrayBufferViewImpl this1,Dynamic begin,Dynamic end);
		static Dynamic subarray_dyn();

		static ::haxe::io::ArrayBufferViewImpl getData( ::haxe::io::ArrayBufferViewImpl this1);
		static Dynamic getData_dyn();

		static ::haxe::io::ArrayBufferViewImpl fromData( ::haxe::io::ArrayBufferViewImpl d);
		static Dynamic fromData_dyn();

		static ::haxe::io::ArrayBufferViewImpl fromArray( Array< int > a,hx::Null< int >  pos,Dynamic length);
		static Dynamic fromArray_dyn();

		static ::haxe::io::ArrayBufferViewImpl fromBytes( ::haxe::io::Bytes bytes,hx::Null< int >  bytePos,Dynamic length);
		static Dynamic fromBytes_dyn();

};

} // end namespace haxe
} // end namespace io
} // end namespace _UInt16Array

#endif /* INCLUDED_haxe_io__UInt16Array_UInt16Array_Impl_ */ 
