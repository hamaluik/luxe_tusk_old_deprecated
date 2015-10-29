#ifndef INCLUDED_haxe_web_Redirect
#define INCLUDED_haxe_web_Redirect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,web,Redirect)
namespace haxe{
namespace web{


class HXCPP_CLASS_ATTRIBUTES  Redirect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Redirect_obj OBJ_;
		Redirect_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.web.Redirect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Redirect_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Redirect_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Redirect","\x3c","\xb3","\x8a","\x76"); }

};

} // end namespace haxe
} // end namespace web

#endif /* INCLUDED_haxe_web_Redirect */ 
