#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_ExternalConnection
#include <haxe/remoting/ExternalConnection.h>
#endif
namespace haxe{
namespace remoting{

Void ExternalConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.ExternalConnection","new",0x0040dd5e,"haxe.remoting.ExternalConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",33,0x186301b9)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(34)
	this->__data = data;
	HX_STACK_LINE(35)
	this->__path = path;
}
;
	return null();
}

//ExternalConnection_obj::~ExternalConnection_obj() { }

Dynamic ExternalConnection_obj::__CreateEmpty() { return  new ExternalConnection_obj; }
hx::ObjectPtr< ExternalConnection_obj > ExternalConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< ExternalConnection_obj > _result_ = new ExternalConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic ExternalConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExternalConnection_obj > _result_ = new ExternalConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *ExternalConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::Connection_obj)) return operator ::haxe::remoting::Connection_obj *();
	return super::__ToInterface(inType);
}

ExternalConnection_obj::operator ::haxe::remoting::Connection_obj *()
	{ return new ::haxe::remoting::Connection_delegate_< ExternalConnection_obj >(this); }
::haxe::remoting::Connection ExternalConnection_obj::resolve( ::String field){
	HX_STACK_FRAME("haxe.remoting.ExternalConnection","resolve",0x708a76ea,"haxe.remoting.ExternalConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",38,0x186301b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(39)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::haxe::remoting::ExternalConnection tmp1 = ::haxe::remoting::ExternalConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::haxe::remoting::ExternalConnection e = tmp1;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(40)
	::String tmp2 = field;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	e->__path->push(tmp2);
	HX_STACK_LINE(41)
	::haxe::remoting::ExternalConnection tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalConnection_obj,resolve,return )

Void ExternalConnection_obj::close( ){
{
		HX_STACK_FRAME("haxe.remoting.ExternalConnection","close",0xe76be036,"haxe.remoting.ExternalConnection.close","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",44,0x186301b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp = ::haxe::remoting::ExternalConnection_obj::connections;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = this->__data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::String tmp2 = tmp1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		tmp->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExternalConnection_obj,close,(void))

Dynamic ExternalConnection_obj::call( cpp::ArrayBase params){
	HX_STACK_FRAME("haxe.remoting.ExternalConnection","call",0x313869e0,"haxe.remoting.ExternalConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",58,0x186301b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(59)
	::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(60)
	s->serialize(params);
	HX_STACK_LINE(61)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::String s1 = tmp2;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(61)
		tmp1 = s1;
	}
	HX_STACK_LINE(61)
	::String params1 = tmp1;		HX_STACK_VAR(params1,"params1");
	HX_STACK_LINE(62)
	::String data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(71)
	bool tmp2 = (data == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(85)
		::String tmp3 = HX_HCSTRING("Call failure : ExternalConnection is not initialized in Flash","\xeb","\x29","\x2a","\x92");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(87)
	::haxe::Unserializer tmp3 = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	Dynamic tmp4 = tmp3->unserialize();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalConnection_obj,call,return )

::String ExternalConnection_obj::escapeString( ::String s){
	HX_STACK_FRAME("haxe.remoting.ExternalConnection","escapeString",0x34785a74,"haxe.remoting.ExternalConnection.escapeString","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",53,0x186301b9)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(54)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExternalConnection_obj,escapeString,return )

::haxe::ds::StringMap ExternalConnection_obj::connections;

::String ExternalConnection_obj::doCall( ::String name,::String path,::String params){
	HX_STACK_FRAME("haxe.remoting.ExternalConnection","doCall",0x9a64638b,"haxe.remoting.ExternalConnection.doCall","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ExternalConnection.hx",94,0x186301b9)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(94)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp = ::haxe::remoting::ExternalConnection_obj::connections;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::haxe::remoting::ExternalConnection tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::haxe::remoting::ExternalConnection cnx = tmp2;		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(96)
		bool tmp3 = (cnx == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(96)
			::String tmp4 = (HX_HCSTRING("Unknown connection : ","\x32","\x5e","\xb2","\x11") + name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(97)
		::haxe::remoting::Context tmp4 = cnx->__data->__Field(HX_HCSTRING("ctx","\xa7","\x84","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		if ((tmp5)){
			HX_STACK_LINE(97)
			::String tmp6 = (HX_HCSTRING("No context shared for the connection ","\xf1","\x92","\x91","\x42") + name);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(98)
		::haxe::Unserializer tmp6 = ::haxe::Unserializer_obj::__new(params);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		Dynamic tmp7 = tmp6->unserialize();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		cpp::ArrayBase params1 = tmp7;		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(99)
		::haxe::remoting::Context tmp8 = cnx->__data->__Field(HX_HCSTRING("ctx","\xa7","\x84","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		Dynamic tmp9 = tmp8->call(path.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00")),params1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Dynamic ret = tmp9;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(100)
		::haxe::Serializer tmp10 = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		::haxe::Serializer s = tmp10;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(101)
		Dynamic tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		s->serialize(tmp11);
		HX_STACK_LINE(105)
		::String tmp12 = s->toString();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(105)
		::String tmp13 = (tmp12 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(105)
		return tmp13;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(108)
				::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(108)
				::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(109)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(109)
				s->serializeException(tmp1);
				HX_STACK_LINE(110)
				::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				return tmp2;
			}
		}
	}
	HX_STACK_LINE(94)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExternalConnection_obj,doCall,return )


ExternalConnection_obj::ExternalConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void ExternalConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExternalConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void ExternalConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic ExternalConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool ExternalConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"doCall") ) { outValue = doCall_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connections") ) { outValue = connections; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"escapeString") ) { outValue = escapeString_dyn(); return true;  }
	}
	return false;
}

Dynamic ExternalConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool ExternalConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"connections") ) { connections=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void ExternalConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ExternalConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ExternalConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ExternalConnection_obj::connections,HX_HCSTRING("connections","\x95","\x7a","\x39","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ExternalConnection_obj::connections,"connections");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExternalConnection_obj::connections,"connections");
};

#endif

hx::Class ExternalConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("escapeString","\x32","\xf7","\x83","\xd2"),
	HX_HCSTRING("connections","\x95","\x7a","\x39","\x7b"),
	HX_HCSTRING("doCall","\xc9","\xbd","\xbd","\x11"),
	::String(null()) };

void ExternalConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.ExternalConnection","\x6c","\x96","\xbb","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExternalConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &ExternalConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExternalConnection_obj >;
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

void ExternalConnection_obj::__boot()
{
	connections= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace haxe
} // end namespace remoting
