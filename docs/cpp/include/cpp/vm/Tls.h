#ifndef INCLUDED_cpp_vm_Tls
#define INCLUDED_cpp_vm_Tls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Tls)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Tls_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tls_obj OBJ_;
		Tls_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.vm.Tls")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tls_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tls_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Tls","\xdb","\x1b","\x40","\x00"); }

		static void __boot();
		static int sFreeSlot;
		int mTLSID;
		virtual Dynamic get_value( );
		Dynamic get_value_dyn();

		virtual Dynamic set_value( Dynamic v);
		Dynamic set_value_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Tls */ 
