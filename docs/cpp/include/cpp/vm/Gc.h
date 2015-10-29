#ifndef INCLUDED_cpp_vm_Gc
#define INCLUDED_cpp_vm_Gc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Gc)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Gc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gc_obj OBJ_;
		Gc_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.vm.Gc")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Gc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gc_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Gc","\x3c","\x3e","\x00","\x00"); }

		static void __boot();
		static int MEM_INFO_USAGE;
		static int MEM_INFO_RESERVED;
		static int MEM_INFO_CURRENT;
		static int MEM_INFO_LARGE;
		static Void enable( bool inEnable);
		static Dynamic enable_dyn();

		static Void run( bool major);
		static Dynamic run_dyn();

		static Void compact( );
		static Dynamic compact_dyn();

		static int memInfo( int inWhatInfo);
		static Dynamic memInfo_dyn();

		static int memUsage( );
		static Dynamic memUsage_dyn();

		static int trace( ::hx::Class sought,hx::Null< bool >  printInstances);
		static Dynamic trace_dyn();

		static bool versionCheck( );
		static Dynamic versionCheck_dyn();

		static Void doNotKill( Dynamic inObject);
		static Dynamic doNotKill_dyn();

		static Dynamic getNextZombie( );
		static Dynamic getNextZombie_dyn();

		static Void safePoint( );
		static Dynamic safePoint_dyn();

		static Void enterGCFreeZone( );
		static Dynamic enterGCFreeZone_dyn();

		static Void exitGCFreeZone( );
		static Dynamic exitGCFreeZone_dyn();

		static Void setFinalizer( Dynamic inObject,::cpp::Function< Void ( Dynamic ) > inFinalizer);

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Gc */ 
