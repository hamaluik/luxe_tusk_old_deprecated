#ifndef INCLUDED_cpp__ConstCharStar_ConstCharStar_Impl_
#define INCLUDED_cpp__ConstCharStar_ConstCharStar_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,_ConstCharStar,ConstCharStar_Impl_)
namespace cpp{
namespace _ConstCharStar{


class HXCPP_CLASS_ATTRIBUTES  ConstCharStar_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConstCharStar_Impl__obj OBJ_;
		ConstCharStar_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp._ConstCharStar.ConstCharStar_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConstCharStar_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstCharStar_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConstCharStar_Impl_","\x0b","\xe1","\x0d","\x8e"); }

		static  const ::cpp::Char *  _new( ::String s);
		static Dynamic _new_dyn();

		static  const ::cpp::Char *  fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::String toString(  const ::cpp::Char *  this);
		static Dynamic toString_dyn();

		static  const ::cpp::Char *  toPointer(  const ::cpp::Char *  this);
		static Dynamic toPointer_dyn();

};

} // end namespace cpp
} // end namespace _ConstCharStar

#endif /* INCLUDED_cpp__ConstCharStar_ConstCharStar_Impl_ */ 
