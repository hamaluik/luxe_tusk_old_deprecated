#ifndef INCLUDED_cpp_Random
#define INCLUDED_cpp_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Random)
namespace cpp{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		static void __boot();
		static Dynamic random_new;
		static Dynamic &random_new_dyn() { return random_new;}
		static Dynamic random_set_seed;
		static Dynamic &random_set_seed_dyn() { return random_set_seed;}
		static Dynamic random_int;
		static Dynamic &random_int_dyn() { return random_int;}
		static Dynamic random_float;
		static Dynamic &random_float_dyn() { return random_float;}
		Dynamic r;
		virtual Void setSeed( int s);
		Dynamic setSeed_dyn();

		virtual int _int( int max);
		Dynamic _int_dyn();

		virtual Float _float( );
		Dynamic _float_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Random */ 
