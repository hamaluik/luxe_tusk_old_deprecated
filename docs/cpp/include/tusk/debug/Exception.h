#ifndef INCLUDED_tusk_debug_Exception
#define INCLUDED_tusk_debug_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(tusk,debug,Exception)
HX_DECLARE_CLASS2(tusk,debug,ExceptionType)
namespace tusk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Exception_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();
		Void __construct(::String __o_message,hx::Null< bool >  __o_fatal,::tusk::debug::ExceptionType type,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.debug.Exception")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Exception_obj > __new(::String __o_message,hx::Null< bool >  __o_fatal,::tusk::debug::ExceptionType type,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb"); }

		static void __boot();
		static bool showStackTrace;
		::String message;
		::tusk::debug::ExceptionType type;
		bool fatal;
		Array< ::Dynamic > stack;
		Dynamic pos;
		virtual ::String translateStackItem( ::haxe::StackItem item);
		Dynamic translateStackItem_dyn();

		virtual ::String translateExceptionType( ::tusk::debug::ExceptionType type);
		Dynamic translateExceptionType_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace tusk
} // end namespace debug

#endif /* INCLUDED_tusk_debug_Exception */ 
