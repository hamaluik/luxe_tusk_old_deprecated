#ifndef INCLUDED_cpp_vm_Unsafe
#define INCLUDED_cpp_vm_Unsafe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Unsafe)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Unsafe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Unsafe_obj OBJ_;
		Unsafe_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.vm.Unsafe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Unsafe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unsafe_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Unsafe","\x46","\xf8","\xb6","\x9e"); }

		static Void unsafeSet( Dynamic outForced,Dynamic inValue);
		static Dynamic unsafeSet_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Unsafe */ 
