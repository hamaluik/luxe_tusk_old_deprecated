#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds__Vector_Vector_Impl_
#include <haxe/ds/_Vector/Vector_Impl_.h>
#endif
namespace haxe{
namespace ds{
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

cpp::ArrayBase Vector_Impl__obj::_new( int length){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","_new",0x3159a4a9,"haxe.ds._Vector.Vector_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",56,0x52e286cb)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(56)
	cpp::ArrayBase this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(68)
	this1 = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(69)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	this1->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(56)
	cpp::ArrayBase tmp1 = ((cpp::ArrayBase)(this1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,_new,return )

Dynamic Vector_Impl__obj::get( cpp::ArrayBase this1,int index){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","get",0x33e7724e,"haxe.ds._Vector.Vector_Impl_.get","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",84,0x52e286cb)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(86)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Dynamic tmp1 = this1->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,get,return )

Dynamic Vector_Impl__obj::set( cpp::ArrayBase this1,int index,Dynamic val){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","set",0x33f08d5a,"haxe.ds._Vector.Vector_Impl_.set","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",100,0x52e286cb)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(102)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	Dynamic tmp2 = this1->__Field(HX_HCSTRING("__unsafe_set","\xe9","\xea","\xa4","\x60"), hx::paccDynamic )(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,set,return )

int Vector_Impl__obj::get_length( cpp::ArrayBase this1){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","get_length",0x18a839f7,"haxe.ds._Vector.Vector_Impl_.get_length","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",115,0x52e286cb)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(125)
	int tmp = this1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

Void Vector_Impl__obj::blit( cpp::ArrayBase src,int srcPos,cpp::ArrayBase dest,int destPos,int len){
{
		HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","blit",0x3353c77d,"haxe.ds._Vector.Vector_Impl_.blit","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",145,0x52e286cb)
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(srcPos,"srcPos")
		HX_STACK_ARG(dest,"dest")
		HX_STACK_ARG(destPos,"destPos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(145)
		int tmp = destPos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		int tmp1 = srcPos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		((cpp::ArrayBase)(((cpp::ArrayBase)(dest))))->__Field(HX_HCSTRING("blit","\x35","\x38","\x19","\x41"), hx::paccDynamic )(tmp,((cpp::ArrayBase)(((cpp::ArrayBase)(src)))),tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector_Impl__obj,blit,(void))

cpp::ArrayBase Vector_Impl__obj::toArray( cpp::ArrayBase this1){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","toArray",0x5533e7d6,"haxe.ds._Vector.Vector_Impl_.toArray","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",159,0x52e286cb)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(159)
	return this1->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toArray,return )

cpp::ArrayBase Vector_Impl__obj::toData( cpp::ArrayBase this1){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","toData",0x598fb28d,"haxe.ds._Vector.Vector_Impl_.toData","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",181,0x52e286cb)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(181)
	return ((cpp::ArrayBase)(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toData,return )

cpp::ArrayBase Vector_Impl__obj::fromData( cpp::ArrayBase data){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","fromData",0xf936f7fc,"haxe.ds._Vector.Vector_Impl_.fromData","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",191,0x52e286cb)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(191)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(data));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromData,return )

cpp::ArrayBase Vector_Impl__obj::fromArrayCopy( cpp::ArrayBase array){
	HX_STACK_FRAME("haxe.ds._Vector.Vector_Impl_","fromArrayCopy",0xa38d1adc,"haxe.ds._Vector.Vector_Impl_.fromArrayCopy","C:\\HaxeToolkit\\haxe\\std/haxe/ds/Vector.hx",205,0x52e286cb)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(216)
	cpp::ArrayBase tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		cpp::ArrayBase this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(216)
		this1 = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(216)
		int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		this1->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(216)
		tmp = ((cpp::ArrayBase)(this1));
	}
	HX_STACK_LINE(216)
	cpp::ArrayBase vec = tmp;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(217)
		int _g = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			if ((tmp2)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(218)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			Dynamic tmp5 = array->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			Dynamic tmp6 = ((cpp::ArrayBase)(vec))->__Field(HX_HCSTRING("__unsafe_set","\xe9","\xea","\xa4","\x60"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			tmp6;
		}
	}
	HX_STACK_LINE(219)
	cpp::ArrayBase tmp1 = vec;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromArrayCopy,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blit") ) { outValue = blit_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toData") ) { outValue = toData_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromData") ) { outValue = fromData_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromArrayCopy") ) { outValue = fromArrayCopy_dyn(); return true;  }
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
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("blit","\x35","\x38","\x19","\x41"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("toData","\x45","\xc1","\x1c","\x78"),
	HX_HCSTRING("fromData","\xb4","\x24","\x2f","\xa0"),
	HX_HCSTRING("fromArrayCopy","\x24","\xd3","\x1f","\xff"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._Vector.Vector_Impl_","\x26","\x16","\x34","\xb9");
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

} // end namespace haxe
} // end namespace ds
} // end namespace _Vector
