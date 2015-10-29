#ifndef INCLUDED_tusk_debug_Log
#define INCLUDED_tusk_debug_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,debug,Log)
HX_DECLARE_CLASS2(tusk,debug,LogFunctions)
namespace tusk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.debug.Log")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"); }

		static Void log( Dynamic v,::tusk::debug::LogFunctions func,Dynamic pos);
		static Dynamic log_dyn();

		static Dynamic fatal;
		static Dynamic &fatal_dyn() { return fatal;}
		static Dynamic error;
		static Dynamic &error_dyn() { return error;}
		static Dynamic warning;
		static Dynamic &warning_dyn() { return warning;}
		static Dynamic info;
		static Dynamic &info_dyn() { return info;}
		static Dynamic debug;
		static Dynamic &debug_dyn() { return debug;}
		static Dynamic trace;
		static Dynamic &trace_dyn() { return trace;}
};

} // end namespace tusk
} // end namespace debug

#endif /* INCLUDED_tusk_debug_Log */ 
