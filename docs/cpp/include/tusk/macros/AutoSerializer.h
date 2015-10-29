#ifndef INCLUDED_tusk_macros_AutoSerializer
#define INCLUDED_tusk_macros_AutoSerializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,macros,AutoSerializer)
namespace tusk{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  AutoSerializer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AutoSerializer_obj OBJ_;
		AutoSerializer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.macros.AutoSerializer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AutoSerializer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AutoSerializer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AutoSerializer","\x01","\x7f","\xfa","\x4f"); }

		static Dynamic apply;
		static Dynamic &apply_dyn() { return apply;}
};

} // end namespace tusk
} // end namespace macros

#endif /* INCLUDED_tusk_macros_AutoSerializer */ 
