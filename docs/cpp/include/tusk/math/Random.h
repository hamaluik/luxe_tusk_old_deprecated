#ifndef INCLUDED_tusk_math_Random
#define INCLUDED_tusk_math_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,math,Random)
namespace tusk{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.math.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		static bool _bool( );
		static Dynamic _bool_dyn();

		static int _int( int from,int to);
		static Dynamic _int_dyn();

		static Float _float( Float from,Float to);
		static Dynamic _float_dyn();

};

} // end namespace tusk
} // end namespace math

#endif /* INCLUDED_tusk_math_Random */ 
