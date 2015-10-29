#ifndef INCLUDED_haxe_unit_TestRunner
#define INCLUDED_haxe_unit_TestRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,unit,TestCase)
HX_DECLARE_CLASS2(haxe,unit,TestResult)
HX_DECLARE_CLASS2(haxe,unit,TestRunner)
namespace haxe{
namespace unit{


class HXCPP_CLASS_ATTRIBUTES  TestRunner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestRunner_obj OBJ_;
		TestRunner_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.unit.TestRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestRunner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestRunner_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestRunner","\x02","\x94","\x3f","\x4b"); }

		static void __boot();
		static Dynamic print;
		static inline Dynamic &print_dyn() {return print; }

		static Void customTrace( Dynamic v,Dynamic p);
		static Dynamic customTrace_dyn();

		::haxe::unit::TestResult result;
		::List cases;
		virtual Void add( ::haxe::unit::TestCase c);
		Dynamic add_dyn();

		virtual bool run( );
		Dynamic run_dyn();

		virtual Void runCase( ::haxe::unit::TestCase t);
		Dynamic runCase_dyn();

};

} // end namespace haxe
} // end namespace unit

#endif /* INCLUDED_haxe_unit_TestRunner */ 
