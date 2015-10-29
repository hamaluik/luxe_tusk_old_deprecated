#ifndef INCLUDED_tusk_debug_LogFunctions
#define INCLUDED_tusk_debug_LogFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,debug,LogFunctions)
namespace tusk{
namespace debug{


class LogFunctions_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LogFunctions_obj OBJ_;

	public:
		LogFunctions_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("tusk.debug.LogFunctions","\x47","\xa7","\x43","\x79"); }
		::String __ToString() const { return HX_HCSTRING("LogFunctions.","\xf7","\xfa","\xf9","\xd5") + tag; }

		static ::tusk::debug::LogFunctions Debug;
		static inline ::tusk::debug::LogFunctions Debug_dyn() { return Debug; }
		static ::tusk::debug::LogFunctions Error;
		static inline ::tusk::debug::LogFunctions Error_dyn() { return Error; }
		static ::tusk::debug::LogFunctions Fatal;
		static inline ::tusk::debug::LogFunctions Fatal_dyn() { return Fatal; }
		static ::tusk::debug::LogFunctions Info;
		static inline ::tusk::debug::LogFunctions Info_dyn() { return Info; }
		static ::tusk::debug::LogFunctions Trace;
		static inline ::tusk::debug::LogFunctions Trace_dyn() { return Trace; }
		static ::tusk::debug::LogFunctions Warn;
		static inline ::tusk::debug::LogFunctions Warn_dyn() { return Warn; }
};

} // end namespace tusk
} // end namespace debug

#endif /* INCLUDED_tusk_debug_LogFunctions */ 
