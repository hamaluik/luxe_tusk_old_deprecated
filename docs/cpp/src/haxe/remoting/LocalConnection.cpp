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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_LocalConnection
#include <haxe/remoting/LocalConnection.h>
#endif
namespace haxe{
namespace remoting{

Void LocalConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.LocalConnection","new",0x78ca6558,"haxe.remoting.LocalConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",41,0xa0a2dcd1)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(42)
	this->__path = path;
	HX_STACK_LINE(43)
	this->__data = data;
}
;
	return null();
}

//LocalConnection_obj::~LocalConnection_obj() { }

Dynamic LocalConnection_obj::__CreateEmpty() { return  new LocalConnection_obj; }
hx::ObjectPtr< LocalConnection_obj > LocalConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< LocalConnection_obj > _result_ = new LocalConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic LocalConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LocalConnection_obj > _result_ = new LocalConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *LocalConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

LocalConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< LocalConnection_obj >(this); }
::haxe::remoting::AsyncConnection LocalConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.LocalConnection","resolve",0x6c1083e4,"haxe.remoting.LocalConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",46,0xa0a2dcd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(47)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::haxe::remoting::LocalConnection tmp1 = ::haxe::remoting::LocalConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::haxe::remoting::LocalConnection s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(48)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	s->__path->push(tmp2);
	HX_STACK_LINE(49)
	::haxe::remoting::LocalConnection tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(LocalConnection_obj,resolve,return )

Void LocalConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.LocalConnection","setErrorHandler",0x4239909c,"haxe.remoting.LocalConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",52,0xa0a2dcd1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(53)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LocalConnection_obj,setErrorHandler,(void))

Void LocalConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.LocalConnection","call",0x3105dca6,"haxe.remoting.LocalConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",57,0xa0a2dcd1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(57)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(58)
			int tmp = (::haxe::remoting::LocalConnection_obj::ID)++;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			int id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(62)
			Dynamic tmp1 = this->__data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			Dynamic tmp2 = this->__data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"), hx::paccDynamic )(tmp2->__Field(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"), hx::paccDynamic ),HX_HCSTRING("remotingCall","\x81","\xd3","\xa4","\xe4"),id,this->__path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00")),::haxe::Serializer_obj::run(params));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			if ((tmp4)){
				HX_STACK_LINE(63)
				HX_STACK_DO_THROW(HX_HCSTRING("Remoting call failure","\xa5","\x7b","\x82","\x23"));
			}
			HX_STACK_LINE(65)
			Dynamic tmp5 = this->__data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			int tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			Dynamic tmp7 = this->__data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			Dynamic tmp9 = onResult;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",65,0xa0a2dcd1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , tmp8,false);
						__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(65)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			tmp5->__Field(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp6,tmp10);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(67)
					Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(67)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(67)
					tmp->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LocalConnection_obj,call,(void))

Void LocalConnection_obj::close( ){
{
		HX_STACK_FRAME("haxe.remoting.LocalConnection","close",0xbb62dab0,"haxe.remoting.LocalConnection.close","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",71,0xa0a2dcd1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		tmp->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LocalConnection_obj,close,(void))

int LocalConnection_obj::ID;

Void LocalConnection_obj::remotingCall( ::haxe::remoting::LocalConnection c,int id,::String path,::String args){
{
		HX_STACK_FRAME("haxe.remoting.LocalConnection","remotingCall",0x02dfdf89,"haxe.remoting.LocalConnection.remotingCall","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",75,0xa0a2dcd1)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(76)
		::String r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(77)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(78)
			::haxe::remoting::Context tmp = c->__data->__Field(HX_HCSTRING("ctx","\xa7","\x84","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			if ((tmp1)){
				HX_STACK_LINE(78)
				HX_STACK_DO_THROW(HX_HCSTRING("No context shared for this connection","\x7e","\xa1","\x4a","\x40"));
			}
			HX_STACK_LINE(79)
			::haxe::remoting::Context tmp2 = c->__data->__Field(HX_HCSTRING("ctx","\xa7","\x84","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			::String tmp3 = args;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			Dynamic tmp4 = ::haxe::Unserializer_obj::run(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			Dynamic tmp5 = tmp2->call(path.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00")),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			Dynamic ret = tmp5;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(80)
			Dynamic tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			::String tmp7 = ::haxe::Serializer_obj::run(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			r = tmp7;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(82)
					::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(82)
					::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(83)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(83)
					s->serializeException(tmp1);
					HX_STACK_LINE(84)
					::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(84)
					r = tmp2;
				}
			}
		}
		HX_STACK_LINE(87)
		Dynamic tmp = c->__data->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		tmp->__Field(HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"), hx::paccDynamic )(c->__data->__Field(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"), hx::paccDynamic ),HX_HCSTRING("remotingResult","\x80","\xe2","\xbd","\x47"),id,r);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LocalConnection_obj,remotingCall,(void))

Void LocalConnection_obj::remotingResult( ::haxe::remoting::LocalConnection c,int id,::String result){
{
		HX_STACK_FRAME("haxe.remoting.LocalConnection","remotingResult",0xb3da0088,"haxe.remoting.LocalConnection.remotingResult","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/LocalConnection.hx",90,0xa0a2dcd1)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(91)
		::haxe::ds::IntMap tmp = c->__data->__Field(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(92)
		bool tmp3 = (f == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		if ((tmp3)){
			HX_STACK_LINE(93)
			::String tmp4 = (HX_HCSTRING("Invalid result ID ","\xcb","\xc5","\x39","\xea") + id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			c->__data->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(94)
		::haxe::ds::IntMap tmp4 = c->__data->__Field(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		int tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		tmp4->remove(tmp5);
		HX_STACK_LINE(95)
		Dynamic val;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(96)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(97)
			::haxe::Unserializer tmp6 = ::haxe::Unserializer_obj::__new(result);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			Dynamic tmp7 = tmp6->unserialize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			val = tmp7;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(99)
					Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(99)
					f->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(100)
					return null();
				}
			}
		}
		HX_STACK_LINE(102)
		bool tmp6 = (f->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		if ((tmp6)){
			HX_STACK_LINE(103)
			Dynamic tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			f->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )(tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LocalConnection_obj,remotingResult,(void))


LocalConnection_obj::LocalConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void LocalConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_END_CLASS();
}

void LocalConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__path,"__path");
	HX_VISIT_MEMBER_NAME(__data,"__data");
}

Dynamic LocalConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool LocalConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ID; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"remotingCall") ) { outValue = remotingCall_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"remotingResult") ) { outValue = remotingResult_dyn(); return true;  }
	}
	return false;
}

Dynamic LocalConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool LocalConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void LocalConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(LocalConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LocalConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &LocalConnection_obj::ID,HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocalConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LocalConnection_obj::ID,"ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocalConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LocalConnection_obj::ID,"ID");
};

#endif

hx::Class LocalConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("remotingCall","\x81","\xd3","\xa4","\xe4"),
	HX_HCSTRING("remotingResult","\x80","\xe2","\xbd","\x47"),
	::String(null()) };

void LocalConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.LocalConnection","\x66","\x19","\x2f","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocalConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &LocalConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LocalConnection_obj >;
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

void LocalConnection_obj::__boot()
{
	ID= (int)0;
}

} // end namespace haxe
} // end namespace remoting
