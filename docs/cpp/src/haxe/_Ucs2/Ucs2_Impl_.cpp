#include <hxcpp.h>

#ifndef INCLUDED_haxe__Ucs2_Ucs2_Impl_
#include <haxe/_Ucs2/Ucs2_Impl_.h>
#endif
namespace haxe{
namespace _Ucs2{

Void Ucs2_Impl__obj::__construct()
{
	return null();
}

//Ucs2_Impl__obj::~Ucs2_Impl__obj() { }

Dynamic Ucs2_Impl__obj::__CreateEmpty() { return  new Ucs2_Impl__obj; }
hx::ObjectPtr< Ucs2_Impl__obj > Ucs2_Impl__obj::__new()
{  hx::ObjectPtr< Ucs2_Impl__obj > _result_ = new Ucs2_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Ucs2_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ucs2_Impl__obj > _result_ = new Ucs2_Impl__obj();
	_result_->__construct();
	return _result_;}

::String Ucs2_Impl__obj::_new( ::String str){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","_new",0x9b3d7238,"haxe._Ucs2.Ucs2_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",31,0x6892c5c1)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(31)
	::String this;		HX_STACK_VAR(this,"this");
	HX_STACK_LINE(35)
	HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
	HX_STACK_LINE(37)
	this = str;
	HX_STACK_LINE(31)
	return this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,_new,return )

int Ucs2_Impl__obj::get_length( ::String this){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","get_length",0x79611cc6,"haxe._Ucs2.Ucs2_Impl_.get_length","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",40,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_LINE(41)
	return this.length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,get_length,return )

::String Ucs2_Impl__obj::toUpperCase( ::String this){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","toUpperCase",0xe7002c40,"haxe._Ucs2.Ucs2_Impl_.toUpperCase","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",49,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::String > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",50,0x6892c5c1)
			{
				HX_STACK_LINE(50)
				::String str = this.toUpperCase();		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(50)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(50)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(50)
				this = str;
				HX_STACK_LINE(50)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	return _Function_1_1::Block(this);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,toUpperCase,return )

::String Ucs2_Impl__obj::toLowerCase( ::String this){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","toLowerCase",0x6667485f,"haxe._Ucs2.Ucs2_Impl_.toLowerCase","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",58,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::String > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",59,0x6892c5c1)
			{
				HX_STACK_LINE(59)
				::String str = this.toLowerCase();		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(59)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(59)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(59)
				this = str;
				HX_STACK_LINE(59)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(59)
	return _Function_1_1::Block(this);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,toLowerCase,return )

::String Ucs2_Impl__obj::charAt( ::String this,int index){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","charAt",0x1d85fa00,"haxe._Ucs2.Ucs2_Impl_.charAt","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",68,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(index,"index")
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::String > __this,int &index){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",69,0x6892c5c1)
			{
				HX_STACK_LINE(69)
				::String str = this.charAt(index);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(69)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(69)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(69)
				this = str;
				HX_STACK_LINE(69)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	return _Function_1_1::Block(this,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ucs2_Impl__obj,charAt,return )

Dynamic Ucs2_Impl__obj::charCodeAt( ::String this,int index){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","charCodeAt",0x1f26ff0d,"haxe._Ucs2.Ucs2_Impl_.charCodeAt","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",81,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(82)
	return this.charCodeAt(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ucs2_Impl__obj,charCodeAt,return )

int Ucs2_Impl__obj::indexOf( ::String this,::String str,Dynamic startIndex){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","indexOf",0xc91f4c52,"haxe._Ucs2.Ucs2_Impl_.indexOf","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",96,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_LINE(97)
	return this.indexOf(str,startIndex);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Ucs2_Impl__obj,indexOf,return )

int Ucs2_Impl__obj::lastIndexOf( ::String this,::String str,Dynamic startIndex){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","lastIndexOf",0x436df91c,"haxe._Ucs2.Ucs2_Impl_.lastIndexOf","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",111,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_LINE(112)
	return this.lastIndexOf(str,startIndex);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Ucs2_Impl__obj,lastIndexOf,return )

Array< ::String > Ucs2_Impl__obj::split( ::String this,::String delimiter){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","split",0xbfe1ca23,"haxe._Ucs2.Ucs2_Impl_.split","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",135,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(delimiter,"delimiter")
	HX_STACK_LINE(136)
	return this.split(delimiter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ucs2_Impl__obj,split,return )

::String Ucs2_Impl__obj::substr( ::String this,int pos,Dynamic len){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","substr",0x001b6fc8,"haxe._Ucs2.Ucs2_Impl_.substr","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",154,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::String > __this,int &pos,Dynamic &len){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",155,0x6892c5c1)
			{
				HX_STACK_LINE(155)
				::String str = this.substr(pos,len);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(155)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(155)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(155)
				this = str;
				HX_STACK_LINE(155)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(155)
	return _Function_1_1::Block(this,pos,len);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Ucs2_Impl__obj,substr,return )

::String Ucs2_Impl__obj::substring( ::String this,int startIndex,Dynamic endIndex){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","substring",0xa5f6aa1a,"haxe._Ucs2.Ucs2_Impl_.substring","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",171,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::String > __this,int &startIndex,Dynamic &endIndex){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",172,0x6892c5c1)
			{
				HX_STACK_LINE(172)
				::String str = this.substring(startIndex,endIndex);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(172)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(172)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(172)
				this = str;
				HX_STACK_LINE(172)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(172)
	return _Function_1_1::Block(this,startIndex,endIndex);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Ucs2_Impl__obj,substring,return )

::String Ucs2_Impl__obj::toNativeString( ::String this){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","toNativeString",0x1a4f1f7a,"haxe._Ucs2.Ucs2_Impl_.toNativeString","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",178,0x6892c5c1)
	HX_STACK_ARG(this,"this")
	HX_STACK_LINE(179)
	return this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,toNativeString,return )

::String Ucs2_Impl__obj::fromCharCode( int code){
	HX_STACK_FRAME("haxe._Ucs2.Ucs2_Impl_","fromCharCode",0xd0d4c684,"haxe._Ucs2.Ucs2_Impl_.fromCharCode","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",188,0x6892c5c1)
	HX_STACK_ARG(code,"code")
	struct _Function_1_1{
		inline static ::String Block( int &code){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Ucs2.hx",189,0x6892c5c1)
			{
				HX_STACK_LINE(189)
				::String str = ::String::fromCharCode(code);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(189)
				::String this;		HX_STACK_VAR(this,"this");
				HX_STACK_LINE(189)
				HX_STACK_DO_THROW(HX_HCSTRING("Ucs2 String not supported on this platform","\x4f","\xf6","\xc7","\x33"));
				HX_STACK_LINE(189)
				this = str;
				HX_STACK_LINE(189)
				return this;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	return _Function_1_1::Block(code);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ucs2_Impl__obj,fromCharCode,return )


Ucs2_Impl__obj::Ucs2_Impl__obj()
{
}

bool Ucs2_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"substring") ) { outValue = substring_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toUpperCase") ) { outValue = toUpperCase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toLowerCase") ) { outValue = toLowerCase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { outValue = lastIndexOf_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromCharCode") ) { outValue = fromCharCode_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toNativeString") ) { outValue = toNativeString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ucs2_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ucs2_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Ucs2_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"),
	HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("substring","\x51","\xf2","\xe7","\xe2"),
	HX_HCSTRING("toNativeString","\xe3","\xaf","\x59","\x03"),
	HX_HCSTRING("fromCharCode","\xad","\x3a","\x3b","\x3c"),
	::String(null()) };

void Ucs2_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._Ucs2.Ucs2_Impl_","\xf7","\x32","\xe1","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ucs2_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Ucs2_Impl__obj >;
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
} // end namespace _Ucs2
