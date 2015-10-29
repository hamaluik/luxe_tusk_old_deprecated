#include <hxcpp.h>

#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
namespace tusk{
namespace debug{

Void Exception_obj::__construct(::String __o_message,hx::Null< bool >  __o_fatal,::tusk::debug::ExceptionType type,Dynamic pos)
{
HX_STACK_FRAME("tusk.debug.Exception","new",0x372a90b1,"tusk.debug.Exception.new","tusk/debug/Exception.hx",44,0x6d7d61a1)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(__o_fatal,"fatal")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(pos,"pos")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool fatal = __o_fatal.Default(false);
{
	HX_STACK_LINE(45)
	this->message = message;
	HX_STACK_LINE(46)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::tusk::debug::ExceptionType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(46)
		tmp1 = ::tusk::debug::ExceptionType_obj::Unknown;
	}
	else{
		HX_STACK_LINE(46)
		tmp1 = type;
	}
	HX_STACK_LINE(46)
	this->type = tmp1;
	HX_STACK_LINE(47)
	this->fatal = fatal;
	HX_STACK_LINE(48)
	this->stack = ::haxe::CallStack_obj::callStack();
	HX_STACK_LINE(49)
	this->pos = pos;
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String __o_message,hx::Null< bool >  __o_fatal,::tusk::debug::ExceptionType type,Dynamic pos)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(__o_message,__o_fatal,type,pos);
	return _result_;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String Exception_obj::translateStackItem( ::haxe::StackItem item){
	HX_STACK_FRAME("tusk.debug.Exception","translateStackItem",0xb18c8e1c,"tusk.debug.Exception.translateStackItem","tusk/debug/Exception.hx",52,0x6d7d61a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(53)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	switch( (int)(item->__Index())){
		case (int)0: {
			HX_STACK_LINE(54)
			tmp = HX_HCSTRING("in function","\xb3","\x4a","\xb9","\xed");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(53)
			::String tmp1 = (::haxe::StackItem(item))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			::String m = tmp1;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(55)
			tmp = (HX_HCSTRING("in module ","\xb9","\x6e","\x8f","\xa0") + m);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(53)
			int tmp1 = (::haxe::StackItem(item))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			int line = tmp1;		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(53)
			::String tmp2 = (::haxe::StackItem(item))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			::String file = tmp2;		HX_STACK_VAR(file,"file");
			HX_STACK_LINE(53)
			::haxe::StackItem tmp3 = (::haxe::StackItem(item))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::haxe::StackItem s = tmp3;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::String tmp4 = (HX_HCSTRING("in file '","\x5e","\x74","\x89","\xd0") + file);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				::String tmp5 = (tmp4 + HX_HCSTRING("' at line ","\xd8","\xd9","\xc9","\x6d"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				int tmp6 = line;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				bool tmp8 = (s == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(56)
				if ((tmp8)){
					HX_STACK_LINE(56)
					tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(56)
					::haxe::StackItem tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::String tmp11 = this->translateStackItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					tmp9 = (HX_HCSTRING(": ","\xa6","\x32","\x00","\x00") + tmp11);
				}
				HX_STACK_LINE(56)
				tmp = (tmp7 + tmp9);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(53)
			::String tmp1 = (::haxe::StackItem(item))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			::String method = tmp1;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(53)
			::String tmp2 = (::haxe::StackItem(item))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			::String className = tmp2;		HX_STACK_VAR(className,"className");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::String tmp3 = (HX_HCSTRING("in class '","\x04","\x9f","\x25","\x12") + className);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				::String tmp4 = (tmp3 + HX_HCSTRING("' in method '","\x4a","\xbf","\xd6","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				::String tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				tmp = (tmp6 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(53)
			Dynamic tmp1 = (::haxe::StackItem(item))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			Dynamic v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::String tmp2 = (HX_HCSTRING("in local function (","\x50","\x00","\x60","\x57") + v);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				tmp = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
		}
		;break;
	}
	HX_STACK_LINE(53)
	return tmp;
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,translateStackItem,return )

::String Exception_obj::translateExceptionType( ::tusk::debug::ExceptionType type){
	HX_STACK_FRAME("tusk.debug.Exception","translateExceptionType",0xe18ad8ca,"tusk.debug.Exception.translateExceptionType","tusk/debug/Exception.hx",63,0x6d7d61a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(64)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(65)
			tmp = HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(66)
			tmp = HX_HCSTRING("asset not found","\x45","\x29","\xa1","\xb3");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(67)
			tmp = HX_HCSTRING("file not found","\xd1","\x34","\x2b","\xe3");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(68)
			tmp = HX_HCSTRING("invalid asset type","\x73","\xa5","\x7e","\x6e");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(69)
			tmp = HX_HCSTRING("not implemented yet","\xbd","\xd1","\x28","\x09");
		}
		;break;
		default: {
			HX_STACK_LINE(70)
			tmp = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
	}
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,translateExceptionType,return )

::String Exception_obj::toString( ){
	HX_STACK_FRAME("tusk.debug.Exception","toString",0x62084abb,"tusk.debug.Exception.toString","tusk/debug/Exception.hx",77,0x6d7d61a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	Dynamic tmp = this->translateStackItem_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Array< ::String > stackString = this->stack->map(tmp).StaticCast< Array< ::String > >();		HX_STACK_VAR(stackString,"stackString");
	HX_STACK_LINE(79)
	Dynamic tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	if ((tmp2)){
		HX_STACK_LINE(79)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(79)
		Dynamic tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		::String tmp5 = tmp4->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		::String tmp6 = (HX_HCSTRING(" in class: ","\xc3","\x1d","\xf3","\x2d") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		::String tmp7 = (tmp6 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		Dynamic tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		::String tmp9 = tmp8->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		::String tmp11 = (tmp10 + HX_HCSTRING(") in function ","\x64","\x1c","\x3a","\xfa"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		Dynamic tmp12 = this->pos;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		::String tmp13 = tmp12->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		::String tmp15 = (tmp14 + HX_HCSTRING("() at line ","\xbe","\x8b","\x1f","\x11"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(79)
		Dynamic tmp16 = this->pos;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(79)
		int tmp17 = tmp16->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		tmp3 = (tmp15 + tmp17);
	}
	HX_STACK_LINE(79)
	::String posInfo = tmp3;		HX_STACK_VAR(posInfo,"posInfo");
	HX_STACK_LINE(80)
	bool tmp4 = this->fatal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	if ((tmp4)){
		HX_STACK_LINE(80)
		tmp5 = HX_HCSTRING("fatal ","\x9c","\xcb","\x3b","\xef");
	}
	else{
		HX_STACK_LINE(80)
		tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(80)
	::tusk::debug::ExceptionType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	::String tmp7 = this->translateExceptionType(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	::String tmp9 = (tmp8 + HX_HCSTRING(" exception","\x2f","\x0c","\xe9","\x52"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	::String tmp10 = posInfo;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(80)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(80)
	::String tmp12 = (tmp11 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(80)
	::String tmp13 = this->message;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(80)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(80)
	bool tmp15 = ::tusk::debug::Exception_obj::showStackTrace;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(80)
	::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(80)
	if ((tmp15)){
		HX_STACK_LINE(80)
		::String tmp17 = stackString->join(HX_HCSTRING("\n  ","\x8a","\xb2","\x07","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(80)
		tmp16 = (HX_HCSTRING("\nstack trace:\n  ","\xf3","\xaf","\x58","\x5f") + tmp17);
	}
	else{
		HX_STACK_LINE(80)
		tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(80)
	::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(80)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )

bool Exception_obj::showStackTrace;


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(fatal,"fatal");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(fatal,"fatal");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fatal") ) { return fatal; }
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"translateStackItem") ) { return translateStackItem_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"translateExceptionType") ) { return translateExceptionType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Exception_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"showStackTrace") ) { outValue = showStackTrace; return true;  }
	}
	return false;
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::tusk::debug::ExceptionType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fatal") ) { fatal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Exception_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"showStackTrace") ) { showStackTrace=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("fatal","\x04","\x38","\x55","\xfb"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*::tusk::debug::ExceptionType*/ ,(int)offsetof(Exception_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(Exception_obj,fatal),HX_HCSTRING("fatal","\x04","\x38","\x55","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Exception_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Exception_obj::showStackTrace,HX_HCSTRING("showStackTrace","\x7a","\x09","\x63","\x53")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("fatal","\x04","\x38","\x55","\xfb"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("translateStackItem","\x4d","\x4b","\x8e","\xa2"),
	HX_HCSTRING("translateExceptionType","\x7b","\x82","\x51","\xd9"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Exception_obj::showStackTrace,"showStackTrace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Exception_obj::showStackTrace,"showStackTrace");
};

#endif

hx::Class Exception_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("showStackTrace","\x7a","\x09","\x63","\x53"),
	::String(null()) };

void Exception_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.debug.Exception","\x3f","\x64","\x2e","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Exception_obj::__GetStatic;
	__mClass->mSetStaticField = &Exception_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Exception_obj >;
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

void Exception_obj::__boot()
{
	showStackTrace= false;
}

} // end namespace tusk
} // end namespace debug
