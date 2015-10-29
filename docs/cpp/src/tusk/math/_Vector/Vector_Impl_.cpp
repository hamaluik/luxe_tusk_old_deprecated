#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_tusk_math__Vector_VectorRaw
#include <tusk/math/_Vector/VectorRaw.h>
#endif
#ifndef INCLUDED_tusk_math__Vector_Vector_Impl_
#include <tusk/math/_Vector/Vector_Impl_.h>
#endif
namespace tusk{
namespace math{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::_new( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","_new",0xd404774f,"tusk.math._Vector.Vector_Impl_._new","tusk/math/Vector.hx",28,0xfe208faa)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(28)
		::tusk::math::_Vector::VectorRaw tmp = ::tusk::math::_Vector::VectorRaw_obj::__new(x,y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::tusk::math::_Vector::VectorRaw tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::get_zero( ){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","get_zero",0x23b3bb9f,"tusk.math._Vector.Vector_Impl_.get_zero","tusk/math/Vector.hx",36,0xfe208faa)
	HX_STACK_LINE(37)
	::tusk::math::_Vector::VectorRaw tmp = ::tusk::math::_Vector::Vector_Impl__obj::_new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector_Impl__obj,get_zero,return )

Float Vector_Impl__obj::get_length( ::tusk::math::_Vector::VectorRaw this1){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","get_length",0xa9278d1d,"tusk.math._Vector.Vector_Impl_.get_length","tusk/math/Vector.hx",45,0xfe208faa)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(46)
	Float tmp = (this1->x * this1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = (this1->y * this1->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = ::Math_obj::sqrt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::get_normalized( ::tusk::math::_Vector::VectorRaw this1){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","get_normalized",0x91f543ee,"tusk.math._Vector.Vector_Impl_.get_normalized","tusk/math/Vector.hx",54,0xfe208faa)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(55)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = this1->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	Float l = tmp7;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(56)
	bool tmp8 = (l != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	if ((tmp8)){
		HX_STACK_LINE(57)
		Float tmp9 = (Float(this1->x) / Float(l));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		Float tmp10 = (Float(this1->y) / Float(l));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::tusk::math::_Vector::VectorRaw tmp11 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		return tmp11;
	}
	HX_STACK_LINE(58)
	::tusk::math::_Vector::VectorRaw tmp9 = ::tusk::math::_Vector::Vector_Impl__obj::_new((int)0,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(58)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_normalized,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::get_tangent( ::tusk::math::_Vector::VectorRaw this1){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","get_tangent",0x0ca6d4ae,"tusk.math._Vector.Vector_Impl_.get_tangent","tusk/math/Vector.hx",66,0xfe208faa)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(67)
	Float tmp = this1->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = this1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	::tusk::math::_Vector::VectorRaw tmp3 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_tangent,return )

Float Vector_Impl__obj::squareDistance( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","squareDistance",0xd93b0c60,"tusk.math._Vector.Vector_Impl_.squareDistance","tusk/math/Vector.hx",77,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(78)
	Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Float tmp1 = (a->x - b->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Float tmp3 = (a->y - b->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	Float tmp4 = (a->y - b->y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,squareDistance,return )

bool Vector_Impl__obj::isZero( ::tusk::math::_Vector::VectorRaw this1){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","isZero",0x10cc0da0,"tusk.math._Vector.Vector_Impl_.isZero","tusk/math/Vector.hx",85,0xfe208faa)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(86)
	bool tmp = (this1->x == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(86)
		tmp1 = (this1->y == (int)0);
	}
	else{
		HX_STACK_LINE(86)
		tmp1 = false;
	}
	HX_STACK_LINE(86)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,isZero,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::multiplyScalar( ::tusk::math::_Vector::VectorRaw a,Float s){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","multiplyScalar",0xe2b1c7de,"tusk.math._Vector.Vector_Impl_.multiplyScalar","tusk/math/Vector.hx",98,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(99)
	Float tmp = (a->x * s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	Float tmp1 = (a->y * s);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,multiplyScalar,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::divideByScalar( ::tusk::math::_Vector::VectorRaw a,Float s){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","divideByScalar",0x9965106a,"tusk.math._Vector.Vector_Impl_.divideByScalar","tusk/math/Vector.hx",110,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(111)
	Float tmp = (Float(a->x) / Float(s));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	Float tmp1 = (Float(a->y) / Float(s));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,divideByScalar,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::addScalar( ::tusk::math::_Vector::VectorRaw a,Float b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","addScalar",0x4834fb7f,"tusk.math._Vector.Vector_Impl_.addScalar","tusk/math/Vector.hx",122,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(123)
	Float tmp = (a->x + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = (a->y + b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,addScalar,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::subtractScalar( ::tusk::math::_Vector::VectorRaw a,Float b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","subtractScalar",0x750f2ece,"tusk.math._Vector.Vector_Impl_.subtractScalar","tusk/math/Vector.hx",134,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(135)
	Float tmp = (a->x - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	Float tmp1 = (a->y - b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,subtractScalar,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::addVectors( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","addVectors",0x5bbfae9d,"tusk.math._Vector.Vector_Impl_.addVectors","tusk/math/Vector.hx",145,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(146)
	Float tmp = (a->x + b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	Float tmp1 = (a->y + b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,addVectors,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::subtractVectors( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","subtractVectors",0x6dd2606e,"tusk.math._Vector.Vector_Impl_.subtractVectors","tusk/math/Vector.hx",156,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(157)
	Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = (a->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::tusk::math::_Vector::VectorRaw tmp2 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,subtractVectors,return )

Float Vector_Impl__obj::crossProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","crossProduct",0x7ae7a77d,"tusk.math._Vector.Vector_Impl_.crossProduct","tusk/math/Vector.hx",167,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(168)
	Float tmp = (a->x * b->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	Float tmp1 = (a->y * b->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,crossProduct,return )

Float Vector_Impl__obj::dotProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","dotProduct",0x5788b014,"tusk.math._Vector.Vector_Impl_.dotProduct","tusk/math/Vector.hx",179,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(180)
	Float tmp = (a->x * b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	Float tmp1 = (a->y * b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,dotProduct,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::tripleCrossProduct( ::tusk::math::_Vector::VectorRaw a,::tusk::math::_Vector::VectorRaw b,::tusk::math::_Vector::VectorRaw c){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","tripleCrossProduct",0xadbacdbb,"tusk.math._Vector.Vector_Impl_.tripleCrossProduct","tusk/math/Vector.hx",194,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(195)
	Float tmp = a->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	Float tmp1 = (b->x * c->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	Float tmp2 = (b->y * c->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(195)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	Float tmp5 = a->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(195)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(195)
	Float tmp7 = (b->x * c->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(195)
	Float tmp8 = (b->y * c->x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(195)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(195)
	Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(195)
	::tusk::math::_Vector::VectorRaw tmp11 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp4,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(195)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,tripleCrossProduct,return )

::tusk::math::_Vector::VectorRaw Vector_Impl__obj::roundToOne( ::tusk::math::_Vector::VectorRaw a){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","roundToOne",0xd6a970eb,"tusk.math._Vector.Vector_Impl_.roundToOne","tusk/math/Vector.hx",204,0xfe208faa)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(205)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	Float tmp2 = a->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	::tusk::math::_Vector::VectorRaw tmp4 = ::tusk::math::_Vector::Vector_Impl__obj::_new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,roundToOne,return )

::String Vector_Impl__obj::toString( ::tusk::math::_Vector::VectorRaw this1){
	HX_STACK_FRAME("tusk.math._Vector.Vector_Impl_","toString",0x8b76c19a,"tusk.math._Vector.Vector_Impl_.toString","tusk/math/Vector.hx",213,0xfe208faa)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(214)
	::String tmp = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + this1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	::String tmp1 = (tmp + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float tmp2 = this1->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toString,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_zero") ) { outValue = get_zero_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addScalar") ) { outValue = addScalar_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addVectors") ) { outValue = addVectors_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"roundToOne") ) { outValue = roundToOne_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_tangent") ) { outValue = get_tangent_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"crossProduct") ) { outValue = crossProduct_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_normalized") ) { outValue = get_normalized_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"squareDistance") ) { outValue = squareDistance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { outValue = multiplyScalar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"divideByScalar") ) { outValue = divideByScalar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subtractScalar") ) { outValue = subtractScalar_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"subtractVectors") ) { outValue = subtractVectors_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tripleCrossProduct") ) { outValue = tripleCrossProduct_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_zero","\xb1","\xca","\xab","\xd0"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_normalized","\x80","\xec","\x64","\xf7"),
	HX_HCSTRING("get_tangent","\xdc","\xfc","\xc7","\xc0"),
	HX_HCSTRING("squareDistance","\xf2","\xb4","\xaa","\x3e"),
	HX_HCSTRING("isZero","\x32","\xd4","\x57","\x6e"),
	HX_HCSTRING("multiplyScalar","\x70","\x70","\x21","\x48"),
	HX_HCSTRING("divideByScalar","\xfc","\xb8","\xd4","\xfe"),
	HX_HCSTRING("addScalar","\x2d","\x1c","\x4a","\xf4"),
	HX_HCSTRING("subtractScalar","\x60","\xd7","\x7e","\xda"),
	HX_HCSTRING("addVectors","\x2f","\x26","\x27","\x42"),
	HX_HCSTRING("subtractVectors","\x9c","\x37","\x16","\xca"),
	HX_HCSTRING("crossProduct","\x8f","\xa7","\xc9","\x63"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("tripleCrossProduct","\x4d","\x27","\x9f","\x58"),
	HX_HCSTRING("roundToOne","\x7d","\xe8","\x10","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.math._Vector.Vector_Impl_","\x40","\x45","\x86","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tusk
} // end namespace math
} // end namespace _Vector
