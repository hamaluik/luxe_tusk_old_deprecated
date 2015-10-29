#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#define INCLUDED_haxe_ds__HashMap_HashMapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace haxe{
namespace ds{
namespace _HashMap{


class HXCPP_CLASS_ATTRIBUTES  HashMapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HashMapData_obj OBJ_;
		HashMapData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds._HashMap.HashMapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HashMapData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HashMapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HashMapData","\x98","\x50","\x66","\x0e"); }

		::haxe::ds::IntMap keys;
		::haxe::ds::IntMap values;
};

} // end namespace haxe
} // end namespace ds
} // end namespace _HashMap

#endif /* INCLUDED_haxe_ds__HashMap_HashMapData */ 
