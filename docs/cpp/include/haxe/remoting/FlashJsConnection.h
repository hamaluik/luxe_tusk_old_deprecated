#ifndef INCLUDED_haxe_remoting_FlashJsConnection
#define INCLUDED_haxe_remoting_FlashJsConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,FlashJsConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  FlashJsConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlashJsConnection_obj OBJ_;
		FlashJsConnection_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.remoting.FlashJsConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlashJsConnection_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlashJsConnection_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlashJsConnection","\xf7","\x3f","\x67","\xe5"); }

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_FlashJsConnection */ 
