#ifndef INCLUDED_DateTools
#define INCLUDED_DateTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(DateTools)


class HXCPP_CLASS_ATTRIBUTES  DateTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DateTools_obj OBJ_;
		DateTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="DateTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DateTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DateTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DateTools","\xed","\x64","\x5e","\x95"); }

		static void __boot();
		static ::String __format_get( ::Date d,::String e);
		static Dynamic __format_get_dyn();

		static ::String __format( ::Date d,::String f);
		static Dynamic __format_dyn();

		static ::String format( ::Date d,::String f);
		static Dynamic format_dyn();

		static ::Date delta( ::Date d,Float t);
		static Dynamic delta_dyn();

		static Array< int > DAYS_OF_MONTH;
		static int getMonthDays( ::Date d);
		static Dynamic getMonthDays_dyn();

		static Float seconds( Float n);
		static Dynamic seconds_dyn();

		static Float minutes( Float n);
		static Dynamic minutes_dyn();

		static Float hours( Float n);
		static Dynamic hours_dyn();

		static Float days( Float n);
		static Dynamic days_dyn();

		static Dynamic parse( Float t);
		static Dynamic parse_dyn();

		static Float make( Dynamic o);
		static Dynamic make_dyn();

		static Float makeUtc( int year,int month,int day,int hour,int min,int sec);
		static Dynamic makeUtc_dyn();

};


#endif /* INCLUDED_DateTools */ 
