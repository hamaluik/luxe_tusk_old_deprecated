#ifndef INCLUDED_tusk_math__Vector_VectorRaw
#define INCLUDED_tusk_math__Vector_VectorRaw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tusk,math,_Vector,VectorRaw)
namespace tusk{
namespace math{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  VectorRaw_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VectorRaw_obj OBJ_;
		VectorRaw_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.math._Vector.VectorRaw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VectorRaw_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VectorRaw_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VectorRaw","\xc5","\x58","\x46","\x19"); }

		Float x;
		Float y;
};

} // end namespace tusk
} // end namespace math
} // end namespace _Vector

#endif /* INCLUDED_tusk_math__Vector_VectorRaw */ 
