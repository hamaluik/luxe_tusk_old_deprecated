#ifndef INCLUDED_haxe_ds_ArraySort
#define INCLUDED_haxe_ds_ArraySort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,ArraySort)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  ArraySort_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArraySort_obj OBJ_;
		ArraySort_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ds.ArraySort")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArraySort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArraySort_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArraySort","\x77","\xe1","\x9c","\x37"); }

		static Void sort( cpp::ArrayBase a,Dynamic cmp);
		static Dynamic sort_dyn();

		static Void rec( cpp::ArrayBase a,Dynamic cmp,int from,int to);
		static Dynamic rec_dyn();

		static Void doMerge( cpp::ArrayBase a,Dynamic cmp,int from,int pivot,int to,int len1,int len2);
		static Dynamic doMerge_dyn();

		static Void rotate( cpp::ArrayBase a,Dynamic cmp,int from,int mid,int to);
		static Dynamic rotate_dyn();

		static int gcd( int m,int n);
		static Dynamic gcd_dyn();

		static int upper( cpp::ArrayBase a,Dynamic cmp,int from,int to,int val);
		static Dynamic upper_dyn();

		static int lower( cpp::ArrayBase a,Dynamic cmp,int from,int to,int val);
		static Dynamic lower_dyn();

		static Void swap( cpp::ArrayBase a,int i,int j);
		static Dynamic swap_dyn();

		static int compare( cpp::ArrayBase a,Dynamic cmp,int i,int j);
		static Dynamic compare_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_ArraySort */ 
