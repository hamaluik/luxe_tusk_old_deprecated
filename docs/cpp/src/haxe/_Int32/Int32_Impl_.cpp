#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int32_Int32_Impl_
#include <haxe/_Int32/Int32_Impl_.h>
#endif
namespace haxe{
namespace _Int32{

Void Int32_Impl__obj::__construct()
{
	return null();
}

//Int32_Impl__obj::~Int32_Impl__obj() { }

Dynamic Int32_Impl__obj::__CreateEmpty() { return  new Int32_Impl__obj; }
hx::ObjectPtr< Int32_Impl__obj > Int32_Impl__obj::__new()
{  hx::ObjectPtr< Int32_Impl__obj > _result_ = new Int32_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int32_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32_Impl__obj > _result_ = new Int32_Impl__obj();
	_result_->__construct();
	return _result_;}

int Int32_Impl__obj::preIncrement( int this1){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","preIncrement",0x5b883743,"haxe._Int32.Int32_Impl_.preIncrement","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",32,0x2f23bf20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(32)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int tmp1 = ++(this1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		int x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(32)
		tmp = x;
	}
	HX_STACK_LINE(32)
	int tmp1 = this1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,preIncrement,return )

int Int32_Impl__obj::postIncrement( int this1){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","postIncrement",0x744c8818,"haxe._Int32.Int32_Impl_.postIncrement","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",34,0x2f23bf20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(35)
	int tmp = (this1)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	int ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(36)
	this1 = this1;
	HX_STACK_LINE(37)
	int tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,postIncrement,return )

int Int32_Impl__obj::preDecrement( int this1){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","preDecrement",0x3a0b2727,"haxe._Int32.Int32_Impl_.preDecrement","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",41,0x2f23bf20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(41)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int tmp1 = --(this1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		int x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(41)
		tmp = x;
	}
	HX_STACK_LINE(41)
	int tmp1 = this1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,preDecrement,return )

int Int32_Impl__obj::postDecrement( int this1){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","postDecrement",0x52cf77fc,"haxe._Int32.Int32_Impl_.postDecrement","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",43,0x2f23bf20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	int tmp = (this1)--;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(45)
	this1 = this1;
	HX_STACK_LINE(46)
	int tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,postDecrement,return )

int Int32_Impl__obj::add( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","add",0x389d374a,"haxe._Int32.Int32_Impl_.add","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",50,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(50)
	int tmp = (a + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,add,return )

int Int32_Impl__obj::addInt( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","addInt",0xd360b7c5,"haxe._Int32.Int32_Impl_.addInt","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",53,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(53)
	int tmp = (a + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,addInt,return )

int Int32_Impl__obj::sub( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","sub",0x38aaeea9,"haxe._Int32.Int32_Impl_.sub","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",58,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(58)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,sub,return )

int Int32_Impl__obj::subInt( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","subInt",0xce4aa5c6,"haxe._Int32.Int32_Impl_.subInt","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",61,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(61)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,subInt,return )

int Int32_Impl__obj::intSub( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","intSub",0xd2d86e48,"haxe._Int32.Int32_Impl_.intSub","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",64,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(64)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,intSub,return )

Float Int32_Impl__obj::toFloat( int this1){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","toFloat",0x6e629fca,"haxe._Int32.Int32_Impl_.toFloat","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",172,0x2f23bf20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(172)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,toFloat,return )

int Int32_Impl__obj::ucompare( int a,int b){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","ucompare",0x66cba707,"haxe._Int32.Int32_Impl_.ucompare","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",177,0x2f23bf20)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(178)
	bool tmp = (a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	if ((tmp1)){
		HX_STACK_LINE(179)
		bool tmp2 = (b < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp3)){
			HX_STACK_LINE(179)
			int tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			int tmp6 = ~(int)(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			int tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			int tmp9 = ~(int)(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			int tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			tmp4 = tmp11;
		}
		else{
			HX_STACK_LINE(179)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(179)
		return tmp4;
	}
	HX_STACK_LINE(180)
	bool tmp2 = (b < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	if ((tmp3)){
		HX_STACK_LINE(180)
		tmp4 = (int)-1;
	}
	else{
		HX_STACK_LINE(180)
		int tmp5 = (a - b);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		tmp4 = tmp5;
	}
	HX_STACK_LINE(180)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32_Impl__obj,ucompare,return )

int Int32_Impl__obj::clamp( int x){
	HX_STACK_FRAME("haxe._Int32.Int32_Impl_","clamp",0xafe61464,"haxe._Int32.Int32_Impl_.clamp","C:\\HaxeToolkit\\haxe\\std/haxe/Int32.hx",187,0x2f23bf20)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(197)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32_Impl__obj,clamp,return )


Int32_Impl__obj::Int32_Impl__obj()
{
}

bool Int32_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addInt") ) { outValue = addInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subInt") ) { outValue = subInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intSub") ) { outValue = intSub_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ucompare") ) { outValue = ucompare_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preIncrement") ) { outValue = preIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"preDecrement") ) { outValue = preDecrement_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postIncrement") ) { outValue = postIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postDecrement") ) { outValue = postDecrement_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Int32_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("preIncrement","\x8c","\xe9","\xfe","\xd7"),
	HX_HCSTRING("postIncrement","\xaf","\xd5","\xb1","\xdf"),
	HX_HCSTRING("preDecrement","\x70","\xd9","\x81","\xb6"),
	HX_HCSTRING("postDecrement","\x93","\xc5","\x34","\xbe"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addInt","\x4e","\x1d","\x01","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subInt","\x4f","\x0b","\xeb","\x99"),
	HX_HCSTRING("intSub","\xd1","\xd3","\x78","\x9e"),
	HX_HCSTRING("toFloat","\x21","\x12","\x1b","\xcf"),
	HX_HCSTRING("ucompare","\xd0","\x40","\x77","\xa7"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	::String(null()) };

void Int32_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._Int32.Int32_Impl_","\x17","\x9d","\x21","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int32_Impl__obj >;
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
} // end namespace _Int32
