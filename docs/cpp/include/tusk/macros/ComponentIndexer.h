#ifndef INCLUDED_tusk_macros_ComponentIndexer
#define INCLUDED_tusk_macros_ComponentIndexer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(tusk,macros,ComponentIndexer)
namespace tusk{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  ComponentIndexer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ComponentIndexer_obj OBJ_;
		ComponentIndexer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.macros.ComponentIndexer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ComponentIndexer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentIndexer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ComponentIndexer","\xe2","\xb0","\x53","\x1e"); }

		static void __boot();
		static int nextID;
		static ::haxe::ds::StringMap componentMap;
		static ::haxe::ds::IntMap indexMap;
		static Dynamic index;
		static Dynamic &index_dyn() { return index;}
		static Void ensureID( ::String name);
		static Dynamic ensureID_dyn();

		static ::String getCompName( Dynamic e);
		static Dynamic getCompName_dyn();

		static Dynamic ID;
		static Dynamic &ID_dyn() { return ID;}
		static Dynamic GetName;
		static Dynamic &GetName_dyn() { return GetName;}
};

} // end namespace tusk
} // end namespace macros

#endif /* INCLUDED_tusk_macros_ComponentIndexer */ 
