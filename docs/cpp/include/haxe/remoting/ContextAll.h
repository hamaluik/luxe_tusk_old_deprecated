#ifndef INCLUDED_haxe_remoting_ContextAll
#define INCLUDED_haxe_remoting_ContextAll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,Context)
HX_DECLARE_CLASS2(haxe,remoting,ContextAll)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  ContextAll_obj : public ::haxe::remoting::Context_obj{
	public:
		typedef ::haxe::remoting::Context_obj super;
		typedef ContextAll_obj OBJ_;
		ContextAll_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.ContextAll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ContextAll_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ContextAll_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ContextAll","\x92","\x3e","\x90","\xfc"); }

		virtual Dynamic call( Array< ::String > path,cpp::ArrayBase params);

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_ContextAll */ 
