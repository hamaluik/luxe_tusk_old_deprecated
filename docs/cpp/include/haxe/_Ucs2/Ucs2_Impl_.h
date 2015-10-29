#ifndef INCLUDED_haxe__Ucs2_Ucs2_Impl_
#define INCLUDED_haxe__Ucs2_Ucs2_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,_Ucs2,Ucs2_Impl_)
namespace haxe{
namespace _Ucs2{


class HXCPP_CLASS_ATTRIBUTES  Ucs2_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ucs2_Impl__obj OBJ_;
		Ucs2_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe._Ucs2.Ucs2_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ucs2_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ucs2_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Ucs2_Impl_","\xad","\x1a","\x79","\x89"); }

		static ::String _new( ::String str);
		static Dynamic _new_dyn();

		static int get_length( ::String this);
		static Dynamic get_length_dyn();

		static ::String toUpperCase( ::String this);
		static Dynamic toUpperCase_dyn();

		static ::String toLowerCase( ::String this);
		static Dynamic toLowerCase_dyn();

		static ::String charAt( ::String this,int index);
		static Dynamic charAt_dyn();

		static Dynamic charCodeAt( ::String this,int index);
		static Dynamic charCodeAt_dyn();

		static int indexOf( ::String this,::String str,Dynamic startIndex);
		static Dynamic indexOf_dyn();

		static int lastIndexOf( ::String this,::String str,Dynamic startIndex);
		static Dynamic lastIndexOf_dyn();

		static Array< ::String > split( ::String this,::String delimiter);
		static Dynamic split_dyn();

		static ::String substr( ::String this,int pos,Dynamic len);
		static Dynamic substr_dyn();

		static ::String substring( ::String this,int startIndex,Dynamic endIndex);
		static Dynamic substring_dyn();

		static ::String toNativeString( ::String this);
		static Dynamic toNativeString_dyn();

		static ::String fromCharCode( int code);
		static Dynamic fromCharCode_dyn();

};

} // end namespace haxe
} // end namespace _Ucs2

#endif /* INCLUDED_haxe__Ucs2_Ucs2_Impl_ */ 
