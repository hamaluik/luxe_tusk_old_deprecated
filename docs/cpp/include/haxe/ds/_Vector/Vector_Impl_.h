#ifndef INCLUDED_haxe_ds__Vector_Vector_Impl_
#define INCLUDED_haxe_ds__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ds,_Vector,Vector_Impl_)
namespace haxe{
namespace ds{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ds._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static cpp::ArrayBase _new( int length);
		static Dynamic _new_dyn();

		static Dynamic get( cpp::ArrayBase this1,int index);
		static Dynamic get_dyn();

		static Dynamic set( cpp::ArrayBase this1,int index,Dynamic val);
		static Dynamic set_dyn();

		static int get_length( cpp::ArrayBase this1);
		static Dynamic get_length_dyn();

		static Void blit( cpp::ArrayBase src,int srcPos,cpp::ArrayBase dest,int destPos,int len);
		static Dynamic blit_dyn();

		static cpp::ArrayBase toArray( cpp::ArrayBase this1);
		static Dynamic toArray_dyn();

		static cpp::ArrayBase toData( cpp::ArrayBase this1);
		static Dynamic toData_dyn();

		static cpp::ArrayBase fromData( cpp::ArrayBase data);
		static Dynamic fromData_dyn();

		static cpp::ArrayBase fromArrayCopy( cpp::ArrayBase array);
		static Dynamic fromArrayCopy_dyn();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _Vector

#endif /* INCLUDED_haxe_ds__Vector_Vector_Impl_ */ 
