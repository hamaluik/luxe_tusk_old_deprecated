#ifndef INCLUDED_tusk_math__Matrix4x4_Float32Array_Impl_
#define INCLUDED_tusk_math__Matrix4x4_Float32Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tusk,math,_Matrix4x4,Float32Array_Impl_)
namespace tusk{
namespace math{
namespace _Matrix4x4{


class HXCPP_CLASS_ATTRIBUTES  Float32Array_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Float32Array_Impl__obj OBJ_;
		Float32Array_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.math._Matrix4x4.Float32Array_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Float32Array_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Float32Array_Impl_","\x9e","\x71","\x1e","\xf4"); }

		static Array< Float > _new( Dynamic elements,Array< Float > array);
		static Dynamic _new_dyn();

		static Float get( Array< Float > this1,int idx);
		static Dynamic get_dyn();

		static Void set( Array< Float > this1,int idx,Float val);
		static Dynamic set_dyn();

};

} // end namespace tusk
} // end namespace math
} // end namespace _Matrix4x4

#endif /* INCLUDED_tusk_math__Matrix4x4_Float32Array_Impl_ */ 
