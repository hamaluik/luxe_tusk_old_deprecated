#ifndef INCLUDED_cpp_vm_Profiler
#define INCLUDED_cpp_vm_Profiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Profiler)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Profiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Profiler_obj OBJ_;
		Profiler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.vm.Profiler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Profiler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Profiler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Profiler","\x49","\x77","\x88","\xc6"); }

		static Void start( ::String inDumpFile);
		static Dynamic start_dyn();

		static Void stop( );
		static Dynamic stop_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Profiler */ 
