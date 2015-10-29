#ifndef INCLUDED_cpp_vm_ExecutionTrace
#define INCLUDED_cpp_vm_ExecutionTrace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,ExecutionTrace)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  ExecutionTrace_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExecutionTrace_obj OBJ_;
		ExecutionTrace_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.vm.ExecutionTrace")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExecutionTrace_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExecutionTrace_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExecutionTrace","\xed","\x5f","\xf6","\x8a"); }

		static Void traceOff( );
		static Dynamic traceOff_dyn();

		static Void traceFunctions( );
		static Dynamic traceFunctions_dyn();

		static Void traceLines( );
		static Dynamic traceLines_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_ExecutionTrace */ 
