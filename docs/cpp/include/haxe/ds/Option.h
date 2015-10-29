#ifndef INCLUDED_haxe_ds_Option
#define INCLUDED_haxe_ds_Option

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
namespace haxe{
namespace ds{


class Option_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Option_obj OBJ_;

	public:
		Option_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ds.Option","\x4c","\x90","\x17","\xac"); }
		::String __ToString() const { return HX_HCSTRING("Option.","\xf9","\x5a","\x4f","\xad") + tag; }

		static ::haxe::ds::Option None;
		static inline ::haxe::ds::Option None_dyn() { return None; }
		static ::haxe::ds::Option Some(Dynamic v);
		static Dynamic Some_dyn();
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_Option */ 
