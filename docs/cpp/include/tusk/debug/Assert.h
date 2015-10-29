#ifndef INCLUDED_tusk_debug_Assert
#define INCLUDED_tusk_debug_Assert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,debug,Assert)
namespace tusk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Assert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assert_obj OBJ_;
		Assert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.debug.Assert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assert_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80"); }

		static Dynamic _assert;
		static Dynamic &_assert_dyn() { return _assert;}
};

} // end namespace tusk
} // end namespace debug

#endif /* INCLUDED_tusk_debug_Assert */ 
