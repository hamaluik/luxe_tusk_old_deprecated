#ifndef INCLUDED_cpp__CastCharStar_CastCharStar_Impl_
#define INCLUDED_cpp__CastCharStar_CastCharStar_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,_CastCharStar,CastCharStar_Impl_)
namespace cpp{
namespace _CastCharStar{


class HXCPP_CLASS_ATTRIBUTES  CastCharStar_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CastCharStar_Impl__obj OBJ_;
		CastCharStar_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp._CastCharStar.CastCharStar_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CastCharStar_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CastCharStar_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CastCharStar_Impl_","\xa7","\xdb","\x12","\x6c"); }

		static  ::cpp::Char *  _new( ::String s);
		static Dynamic _new_dyn();

		static  ::cpp::Char *  fromString( ::String s);
		static Dynamic fromString_dyn();

		static  ::cpp::Char *  toPointer(  ::cpp::Char *  this1);
		static Dynamic toPointer_dyn();

};

} // end namespace cpp
} // end namespace _CastCharStar

#endif /* INCLUDED_cpp__CastCharStar_CastCharStar_Impl_ */ 
