#ifndef INCLUDED_cpp_vm_Lock
#define INCLUDED_cpp_vm_Lock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Lock)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Lock_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lock_obj OBJ_;
		Lock_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Lock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lock_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lock_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32"); }

		Dynamic l;
		virtual bool wait( Dynamic timeout);
		Dynamic wait_dyn();

		virtual Void release( );
		Dynamic release_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Lock */ 
