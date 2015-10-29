#ifndef INCLUDED_haxe_unit_TestCase
#define INCLUDED_haxe_unit_TestCase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,unit,TestCase)
HX_DECLARE_CLASS2(haxe,unit,TestStatus)
namespace haxe{
namespace unit{


class HXCPP_CLASS_ATTRIBUTES  TestCase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestCase_obj OBJ_;
		TestCase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.unit.TestCase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestCase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestCase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestCase","\x42","\x60","\x9e","\x1e"); }

		::haxe::unit::TestStatus currentTest;
		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void tearDown( );
		Dynamic tearDown_dyn();

		virtual Void print( Dynamic v);
		Dynamic print_dyn();

		virtual Void assertTrue( bool b,Dynamic c);
		Dynamic assertTrue_dyn();

		virtual Void assertFalse( bool b,Dynamic c);
		Dynamic assertFalse_dyn();

		virtual Void assertEquals( Dynamic expected,Dynamic actual,Dynamic c);
		Dynamic assertEquals_dyn();

};

} // end namespace haxe
} // end namespace unit

#endif /* INCLUDED_haxe_unit_TestCase */ 
