#ifndef INCLUDED_tusk_math__Vector_Vector_Impl_
#define INCLUDED_tusk_math__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tusk,math,_Vector,VectorRaw)
HX_DECLARE_CLASS3(tusk,math,_Vector,Vector_Impl_)
namespace tusk{
namespace math{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.math._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static ::tusk::math::_Vector::VectorRaw _new( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic _new_dyn();

		static ::tusk::math::_Vector::VectorRaw get_zero( );
		static Dynamic get_zero_dyn();

		static Float get_length( ::tusk::math::_Vector::VectorRaw this1);
		static Dynamic get_length_dyn();

		static ::tusk::math::_Vector::VectorRaw get_normalized( ::tusk::math::_Vector::VectorRaw this1);
		static Dynamic get_normalized_dyn();

		static ::tusk::math::_Vector::VectorRaw get_tangent( ::tusk::math::_Vector::VectorRaw this1);
		static Dynamic get_tangent_dyn();

		static Float squareDistance( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b);
		static Dynamic squareDistance_dyn();

		static bool isZero( ::tusk::math::_Vector::VectorRaw this1);
		static Dynamic isZero_dyn();

		static ::tusk::math::_Vector::VectorRaw multiplyScalar( ::tusk::math::_Vector::VectorRaw a,Float s);
		static Dynamic multiplyScalar_dyn();

		static ::tusk::math::_Vector::VectorRaw divideByScalar( ::tusk::math::_Vector::VectorRaw a,Float s);
		static Dynamic divideByScalar_dyn();

		static ::tusk::math::_Vector::VectorRaw addScalar( ::tusk::math::_Vector::VectorRaw a,Float b);
		static Dynamic addScalar_dyn();

		static ::tusk::math::_Vector::VectorRaw subtractScalar( ::tusk::math::_Vector::VectorRaw a,Float b);
		static Dynamic subtractScalar_dyn();

		static ::tusk::math::_Vector::VectorRaw addVectors( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b);
		static Dynamic addVectors_dyn();

		static ::tusk::math::_Vector::VectorRaw subtractVectors( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b);
		static Dynamic subtractVectors_dyn();

		static Float crossProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b);
		static Dynamic crossProduct_dyn();

		static Float dotProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b);
		static Dynamic dotProduct_dyn();

		static ::tusk::math::_Vector::VectorRaw tripleCrossProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b,::tusk::math::_Vector::VectorRaw c);
		static Dynamic tripleCrossProduct_dyn();

		static ::tusk::math::_Vector::VectorRaw roundToOne( ::tusk::math::_Vector::VectorRaw a);
		static Dynamic roundToOne_dyn();

		static ::String toString( ::tusk::math::_Vector::VectorRaw this1);
		static Dynamic toString_dyn();

};

} // end namespace tusk
} // end namespace math
} // end namespace _Vector

#endif /* INCLUDED_tusk_math__Vector_Vector_Impl_ */ 
