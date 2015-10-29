#include <hxcpp.h>

#ifndef INCLUDED_tusk_math__Matrix4x4_Float32Array_Impl_
#include <tusk/math/_Matrix4x4/Float32Array_Impl_.h>
#endif
namespace tusk{
namespace math{
namespace _Matrix4x4{

Void Float32Array_Impl__obj::__construct()
{
	return null();
}

//Float32Array_Impl__obj::~Float32Array_Impl__obj() { }

Dynamic Float32Array_Impl__obj::__CreateEmpty() { return  new Float32Array_Impl__obj; }
hx::ObjectPtr< Float32Array_Impl__obj > Float32Array_Impl__obj::__new()
{  hx::ObjectPtr< Float32Array_Impl__obj > _result_ = new Float32Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Float32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_Impl__obj > _result_ = new Float32Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > Float32Array_Impl__obj::_new( Dynamic elements,Array< Float > array){
	HX_STACK_FRAME("tusk.math._Matrix4x4.Float32Array_Impl_","_new",0x082fb384,"tusk.math._Matrix4x4.Float32Array_Impl_._new","tusk/math/Matrix4x4.hx",13,0x69ac0160)
	HX_STACK_ARG(elements,"elements")
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(13)
	Array< Float > this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(14)
	bool tmp = (elements != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	if ((tmp)){
		HX_STACK_LINE(15)
		this1 = Array_obj< Float >::__new();
		HX_STACK_LINE(16)
		{
			HX_STACK_LINE(16)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(16)
			while((true)){
				HX_STACK_LINE(16)
				bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(16)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(16)
				if ((tmp2)){
					HX_STACK_LINE(16)
					break;
				}
				HX_STACK_LINE(16)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(17)
				this1->push((int)0);
			}
		}
	}
	else{
		HX_STACK_LINE(21)
		this1 = array;
	}
	HX_STACK_LINE(13)
	Array< Float > tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Float32Array_Impl__obj,_new,return )

Float Float32Array_Impl__obj::get( Array< Float > this1,int idx){
	HX_STACK_FRAME("tusk.math._Matrix4x4.Float32Array_Impl_","get",0xd0fe37d3,"tusk.math._Matrix4x4.Float32Array_Impl_.get","tusk/math/Matrix4x4.hx",24,0x69ac0160)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(24)
	Float tmp = this1->__get(idx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Float32Array_Impl__obj,get,return )

Void Float32Array_Impl__obj::set( Array< Float > this1,int idx,Float val){
{
		HX_STACK_FRAME("tusk.math._Matrix4x4.Float32Array_Impl_","set",0xd10752df,"tusk.math._Matrix4x4.Float32Array_Impl_.set","tusk/math/Matrix4x4.hx",25,0x69ac0160)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(25)
		Float tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		this1[idx] = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,set,(void))


Float32Array_Impl__obj::Float32Array_Impl__obj()
{
}

bool Float32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Float32Array_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void Float32Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.math._Matrix4x4.Float32Array_Impl_","\x2b","\x75","\x2e","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32Array_Impl__obj >;
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
} // end namespace _Matrix4x4
