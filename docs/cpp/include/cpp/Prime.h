#ifndef INCLUDED_cpp_Prime
#define INCLUDED_cpp_Prime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Prime)
namespace cpp{


class HXCPP_CLASS_ATTRIBUTES  Prime_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Prime_obj OBJ_;
		Prime_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.Prime")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Prime_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Prime_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Prime","\x1f","\xc7","\xb8","\x5b"); }

		static Dynamic _loadPrime( ::String lib,::String prim,::String signature,hx::Null< bool >  quietFail);
		static Dynamic _loadPrime_dyn();

		static bool nekoInit( ::String inModuleName);
		static Dynamic nekoInit_dyn();

		static Dynamic load;
		static Dynamic &load_dyn() { return load;}
};

} // end namespace cpp

#endif /* INCLUDED_cpp_Prime */ 
