#ifndef INCLUDED_haxe__DynamicAccess_DynamicAccess_Impl_
#define INCLUDED_haxe__DynamicAccess_DynamicAccess_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,_DynamicAccess,DynamicAccess_Impl_)
namespace haxe{
namespace _DynamicAccess{


class HXCPP_CLASS_ATTRIBUTES  DynamicAccess_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DynamicAccess_Impl__obj OBJ_;
		DynamicAccess_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe._DynamicAccess.DynamicAccess_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DynamicAccess_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DynamicAccess_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DynamicAccess_Impl_","\x43","\xcb","\x63","\xd2"); }

		static Dynamic _new( );
		static Dynamic _new_dyn();

		static Dynamic get( Dynamic this1,::String key);
		static Dynamic get_dyn();

		static Dynamic set( Dynamic this1,::String key,Dynamic value);
		static Dynamic set_dyn();

		static bool exists( Dynamic this1,::String key);
		static Dynamic exists_dyn();

		static bool remove( Dynamic this1,::String key);
		static Dynamic remove_dyn();

		static Array< ::String > keys( Dynamic this1);
		static Dynamic keys_dyn();

};

} // end namespace haxe
} // end namespace _DynamicAccess

#endif /* INCLUDED_haxe__DynamicAccess_DynamicAccess_Impl_ */ 
