#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#define INCLUDED_haxe__Int64_Int64_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,_Int64,Int64_Impl_)
namespace haxe{
namespace _Int64{


class HXCPP_CLASS_ATTRIBUTES  Int64_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Int64_Impl__obj OBJ_;
		Int64_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe._Int64.Int64_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Int64_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Int64_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Int64_Impl_","\x2d","\x1a","\x59","\xc4"); }

		static cpp::Int64Struct copy( cpp::Int64Struct this1);
		static Dynamic copy_dyn();

		static cpp::Int64Struct make( int high,int low);
		static Dynamic make_dyn();

		static cpp::Int64Struct ofInt( int x);
		static Dynamic ofInt_dyn();

		static int toInt( cpp::Int64Struct x);
		static Dynamic toInt_dyn();

		static bool is( Dynamic val);
		static Dynamic is_dyn();

		static int getHigh( cpp::Int64Struct x);
		static Dynamic getHigh_dyn();

		static int getLow( cpp::Int64Struct x);
		static Dynamic getLow_dyn();

		static bool isNeg( cpp::Int64Struct x);
		static Dynamic isNeg_dyn();

		static bool isZero( cpp::Int64Struct x);
		static Dynamic isZero_dyn();

		static int compare( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic compare_dyn();

		static int ucompare( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic ucompare_dyn();

		static ::String toStr( cpp::Int64Struct x);
		static Dynamic toStr_dyn();

		static ::String toString( cpp::Int64Struct this1);
		static Dynamic toString_dyn();

		static Dynamic divMod( cpp::Int64Struct dividend,cpp::Int64Struct divisor);
		static Dynamic divMod_dyn();

		static cpp::Int64Struct neg( cpp::Int64Struct x);
		static Dynamic neg_dyn();

		static cpp::Int64Struct preIncrement( cpp::Int64Struct this1);
		static Dynamic preIncrement_dyn();

		static cpp::Int64Struct postIncrement( cpp::Int64Struct this1);
		static Dynamic postIncrement_dyn();

		static cpp::Int64Struct preDecrement( cpp::Int64Struct this1);
		static Dynamic preDecrement_dyn();

		static cpp::Int64Struct postDecrement( cpp::Int64Struct this1);
		static Dynamic postDecrement_dyn();

		static cpp::Int64Struct add( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic add_dyn();

		static cpp::Int64Struct addInt( cpp::Int64Struct a,int b);
		static Dynamic addInt_dyn();

		static cpp::Int64Struct sub( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic sub_dyn();

		static cpp::Int64Struct subInt( cpp::Int64Struct a,int b);
		static Dynamic subInt_dyn();

		static cpp::Int64Struct intSub( int a,cpp::Int64Struct b);
		static Dynamic intSub_dyn();

		static cpp::Int64Struct mul( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic mul_dyn();

		static cpp::Int64Struct mulInt( cpp::Int64Struct a,int b);
		static Dynamic mulInt_dyn();

		static cpp::Int64Struct div( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic div_dyn();

		static cpp::Int64Struct divInt( cpp::Int64Struct a,int b);
		static Dynamic divInt_dyn();

		static cpp::Int64Struct intDiv( int a,cpp::Int64Struct b);
		static Dynamic intDiv_dyn();

		static cpp::Int64Struct mod( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic mod_dyn();

		static cpp::Int64Struct modInt( cpp::Int64Struct a,int b);
		static Dynamic modInt_dyn();

		static cpp::Int64Struct intMod( int a,cpp::Int64Struct b);
		static Dynamic intMod_dyn();

		static bool eq( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic eq_dyn();

		static bool eqInt( cpp::Int64Struct a,int b);
		static Dynamic eqInt_dyn();

		static bool neq( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic neq_dyn();

		static bool neqInt( cpp::Int64Struct a,int b);
		static Dynamic neqInt_dyn();

		static bool lt( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic lt_dyn();

		static bool ltInt( cpp::Int64Struct a,int b);
		static Dynamic ltInt_dyn();

		static bool intLt( int a,cpp::Int64Struct b);
		static Dynamic intLt_dyn();

		static bool lte( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic lte_dyn();

		static bool lteInt( cpp::Int64Struct a,int b);
		static Dynamic lteInt_dyn();

		static bool intLte( int a,cpp::Int64Struct b);
		static Dynamic intLte_dyn();

		static bool gt( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic gt_dyn();

		static bool gtInt( cpp::Int64Struct a,int b);
		static Dynamic gtInt_dyn();

		static bool intGt( int a,cpp::Int64Struct b);
		static Dynamic intGt_dyn();

		static bool gte( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic gte_dyn();

		static bool gteInt( cpp::Int64Struct a,int b);
		static Dynamic gteInt_dyn();

		static bool intGte( int a,cpp::Int64Struct b);
		static Dynamic intGte_dyn();

		static cpp::Int64Struct complement( cpp::Int64Struct a);
		static Dynamic complement_dyn();

		static cpp::Int64Struct _and( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic _and_dyn();

		static cpp::Int64Struct _or( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic _or_dyn();

		static cpp::Int64Struct _xor( cpp::Int64Struct a,cpp::Int64Struct b);
		static Dynamic _xor_dyn();

		static cpp::Int64Struct shl( cpp::Int64Struct a,int b);
		static Dynamic shl_dyn();

		static cpp::Int64Struct shr( cpp::Int64Struct a,int b);
		static Dynamic shr_dyn();

		static cpp::Int64Struct ushr( cpp::Int64Struct a,int b);
		static Dynamic ushr_dyn();

		static int get_high( cpp::Int64Struct this1);
		static Dynamic get_high_dyn();

		static int get_low( cpp::Int64Struct this1);
		static Dynamic get_low_dyn();

};

} // end namespace haxe
} // end namespace _Int64

#endif /* INCLUDED_haxe__Int64_Int64_Impl_ */ 
