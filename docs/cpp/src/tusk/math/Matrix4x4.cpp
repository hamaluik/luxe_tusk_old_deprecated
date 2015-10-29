#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_tusk_math_Matrix4x4
#include <tusk/math/Matrix4x4.h>
#endif
namespace tusk{
namespace math{

Void Matrix4x4_obj::__construct(Array< Float > array)
{
HX_STACK_FRAME("tusk.math.Matrix4x4","new",0x451f4870,"tusk.math.Matrix4x4.new","tusk/math/Matrix4x4.hx",45,0x69ac0160)
HX_STACK_THIS(this)
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(46)
	bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(48)
		Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(48)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			if ((tmp2)){
				HX_STACK_LINE(48)
				this1 = Array_obj< Float >::__new();
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(48)
					while((true)){
						HX_STACK_LINE(48)
						bool tmp3 = (_g < (int)16);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(48)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(48)
						if ((tmp4)){
							HX_STACK_LINE(48)
							break;
						}
						HX_STACK_LINE(48)
						int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(48)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(48)
						this1->push((int)0);
					}
				}
			}
			else{
				HX_STACK_LINE(48)
				this1 = array;
			}
			HX_STACK_LINE(48)
			tmp1 = this1;
		}
		HX_STACK_LINE(48)
		this->buffer = tmp1;
	}
	else{
		HX_STACK_LINE(51)
		Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(51)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			if ((tmp2)){
				HX_STACK_LINE(51)
				this1 = Array_obj< Float >::__new();
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(51)
					while((true)){
						HX_STACK_LINE(51)
						bool tmp3 = (_g < (int)16);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(51)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(51)
						if ((tmp4)){
							HX_STACK_LINE(51)
							break;
						}
						HX_STACK_LINE(51)
						int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(51)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(51)
						this1->push((int)0);
					}
				}
			}
			else{
				HX_STACK_LINE(51)
				this1 = null();
			}
			HX_STACK_LINE(51)
			tmp1 = this1;
		}
		HX_STACK_LINE(51)
		this->buffer = tmp1;
	}
}
;
	return null();
}

//Matrix4x4_obj::~Matrix4x4_obj() { }

Dynamic Matrix4x4_obj::__CreateEmpty() { return  new Matrix4x4_obj; }
hx::ObjectPtr< Matrix4x4_obj > Matrix4x4_obj::__new(Array< Float > array)
{  hx::ObjectPtr< Matrix4x4_obj > _result_ = new Matrix4x4_obj();
	_result_->__construct(array);
	return _result_;}

Dynamic Matrix4x4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4x4_obj > _result_ = new Matrix4x4_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float Matrix4x4_obj::get( int x,int y){
	HX_STACK_FRAME("tusk.math.Matrix4x4","get",0x4519f8a6,"tusk.math.Matrix4x4.get","tusk/math/Matrix4x4.hx",61,0x69ac0160)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(64)
	Array< Float > tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	int tmp1 = (y * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	Float tmp4 = tmp->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix4x4_obj,get,return )

Void Matrix4x4_obj::set( int x,int y,Float v){
{
		HX_STACK_FRAME("tusk.math.Matrix4x4","set",0x452313b2,"tusk.math.Matrix4x4.set","tusk/math/Matrix4x4.hx",76,0x69ac0160)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(76)
		Array< Float > tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = (y * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Float tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		tmp[tmp3] = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix4x4_obj,set,(void))

::tusk::math::Matrix4x4 Matrix4x4_obj::multiplyMatrix( ::tusk::math::Matrix4x4 B){
	HX_STACK_FRAME("tusk.math.Matrix4x4","multiplyMatrix",0xc8322175,"tusk.math.Matrix4x4.multiplyMatrix","tusk/math/Matrix4x4.hx",84,0x69ac0160)
	HX_STACK_THIS(this)
	HX_STACK_ARG(B,"B")
	HX_STACK_LINE(85)
	::tusk::math::Matrix4x4 tmp = ::tusk::math::Matrix4x4_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::tusk::math::Matrix4x4 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp1 = (_g < (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			if ((tmp2)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(87)
				while((true)){
					HX_STACK_LINE(87)
					bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						break;
					}
					HX_STACK_LINE(87)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					int j = tmp6;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(88)
					Float s = (int)0;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(89)
						while((true)){
							HX_STACK_LINE(89)
							bool tmp7 = (_g2 < (int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(89)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(89)
							if ((tmp8)){
								HX_STACK_LINE(89)
								break;
							}
							HX_STACK_LINE(89)
							int tmp9 = (_g2)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(89)
							int k = tmp9;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(90)
							int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(90)
							int tmp11 = k;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(90)
							Float tmp12 = this->get(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(90)
							int tmp13 = k;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(90)
							int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(90)
							Float tmp15 = this->get(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(90)
							Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(90)
							hx::AddEq(s,tmp16);
						}
					}
					HX_STACK_LINE(92)
					int tmp7 = j;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					Float tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					ret->set(tmp7,tmp8,tmp9);
				}
			}
		}
	}
	HX_STACK_LINE(95)
	::tusk::math::Matrix4x4 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4x4_obj,multiplyMatrix,return )

Void Matrix4x4_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.math.Matrix4x4","hxSerialize",0xf42308c0,"tusk.math.Matrix4x4.hxSerialize","tusk/math/Matrix4x4.hx",103,0x69ac0160)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(104)
		Array< Float > arr = Array_obj< Float >::__new();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(105)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				if ((tmp1)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(106)
				Array< Float > tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				Float tmp4 = tmp3->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				arr->push(tmp4);
			}
		}
		HX_STACK_LINE(108)
		s->serialize(arr);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4x4_obj,hxSerialize,(void))

Void Matrix4x4_obj::hxUnserialize( ::haxe::Unserializer u){
{
		HX_STACK_FRAME("tusk.math.Matrix4x4","hxUnserialize",0x27720747,"tusk.math.Matrix4x4.hxUnserialize","tusk/math/Matrix4x4.hx",116,0x69ac0160)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(117)
		Dynamic tmp = u->unserialize();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Array< Float > arr = tmp;		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(118)
		Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(118)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			if ((tmp2)){
				HX_STACK_LINE(118)
				this1 = Array_obj< Float >::__new();
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(118)
					while((true)){
						HX_STACK_LINE(118)
						bool tmp3 = (_g < (int)16);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(118)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(118)
						if ((tmp4)){
							HX_STACK_LINE(118)
							break;
						}
						HX_STACK_LINE(118)
						int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(118)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(118)
						this1->push((int)0);
					}
				}
			}
			else{
				HX_STACK_LINE(118)
				this1 = arr;
			}
			HX_STACK_LINE(118)
			tmp1 = this1;
		}
		HX_STACK_LINE(118)
		this->buffer = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix4x4_obj,hxUnserialize,(void))


Matrix4x4_obj::Matrix4x4_obj()
{
}

void Matrix4x4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix4x4);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_END_CLASS();
}

void Matrix4x4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
}

Dynamic Matrix4x4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hxSerialize") ) { return hxSerialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hxUnserialize") ) { return hxUnserialize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiplyMatrix") ) { return multiplyMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix4x4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix4x4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix4x4_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("multiplyMatrix","\x85","\xbf","\xc3","\xc7"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4x4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4x4_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix4x4_obj::__mClass;

void Matrix4x4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.math.Matrix4x4","\x7e","\x90","\x5e","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix4x4_obj >;
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
