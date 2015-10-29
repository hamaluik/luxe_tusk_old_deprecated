#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_DelayedConnection
#include <haxe/remoting/DelayedConnection.h>
#endif
namespace haxe{
namespace remoting{

Void DelayedConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.DelayedConnection","new",0xbd1d5e0f,"haxe.remoting.DelayedConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",40,0xe0ffc83a)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(41)
	this->__data = data;
	HX_STACK_LINE(42)
	this->__path = path;
}
;
	return null();
}

//DelayedConnection_obj::~DelayedConnection_obj() { }

Dynamic DelayedConnection_obj::__CreateEmpty() { return  new DelayedConnection_obj; }
hx::ObjectPtr< DelayedConnection_obj > DelayedConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< DelayedConnection_obj > _result_ = new DelayedConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic DelayedConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DelayedConnection_obj > _result_ = new DelayedConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *DelayedConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

DelayedConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< DelayedConnection_obj >(this); }
Void DelayedConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.DelayedConnection","setErrorHandler",0x0fba3fd3,"haxe.remoting.DelayedConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",45,0xe0ffc83a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(46)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DelayedConnection_obj,setErrorHandler,(void))

::haxe::remoting::AsyncConnection DelayedConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.DelayedConnection","resolve",0xff93a41b,"haxe.remoting.DelayedConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",49,0xe0ffc83a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(50)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::haxe::remoting::DelayedConnection tmp1 = ::haxe::remoting::DelayedConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::haxe::remoting::DelayedConnection d = tmp1;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(51)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	d->__path->push(tmp2);
	HX_STACK_LINE(52)
	::haxe::remoting::DelayedConnection tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DelayedConnection_obj,resolve,return )

::haxe::remoting::AsyncConnection DelayedConnection_obj::get_connection( ){
	HX_STACK_FRAME("haxe.remoting.DelayedConnection","get_connection",0xa21bab18,"haxe.remoting.DelayedConnection.get_connection","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",55,0xe0ffc83a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::haxe::remoting::AsyncConnection tmp1 = tmp->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DelayedConnection_obj,get_connection,return )

::haxe::remoting::AsyncConnection DelayedConnection_obj::set_connection( ::haxe::remoting::AsyncConnection cnx){
	HX_STACK_FRAME("haxe.remoting.DelayedConnection","set_connection",0xc23b938c,"haxe.remoting.DelayedConnection.set_connection","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",59,0xe0ffc83a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cnx,"cnx")
	HX_STACK_LINE(60)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	tmp->__FieldRef(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00")) = cnx;
	HX_STACK_LINE(61)
	::haxe::remoting::DelayedConnection_obj::process(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(62)
	::haxe::remoting::AsyncConnection tmp1 = cnx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DelayedConnection_obj,set_connection,return )

Void DelayedConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.DelayedConnection","call",0xb54c840f,"haxe.remoting.DelayedConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",65,0xe0ffc83a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(66)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		Dynamic tmp1 = onResult;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Dynamic tmp2 = this->__data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::haxe::remoting::DelayedConnection_obj > __this,Dynamic &tmp3,Dynamic &tmp1,cpp::ArrayBase &params){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",66,0xe0ffc83a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , __this->__path,false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , params,false);
					__result->Add(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8") , tmp1,false);
					__result->Add(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		Dynamic tmp4 = _Function_1_1::Block(this,tmp3,tmp1,params);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp->__Field(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(67)
		::haxe::remoting::DelayedConnection_obj::process(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DelayedConnection_obj,call,(void))

Void DelayedConnection_obj::process( ::haxe::remoting::DelayedConnection d){
{
		HX_STACK_FRAME("haxe.remoting.DelayedConnection","process",0x897e339e,"haxe.remoting.DelayedConnection.process","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",70,0xe0ffc83a)
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(71)
		::haxe::remoting::AsyncConnection tmp = d->__data->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::haxe::remoting::AsyncConnection cnx = tmp;		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(72)
		bool tmp1 = (cnx == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(75)
			Dynamic tmp2 = d->__data->__Field(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			Dynamic m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(76)
			bool tmp3 = (m == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(78)
			::haxe::remoting::AsyncConnection c = cnx;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				Array< ::String > _g1 = m->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(79)
				while((true)){
					HX_STACK_LINE(79)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					if ((tmp5)){
						HX_STACK_LINE(79)
						break;
					}
					HX_STACK_LINE(79)
					::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					::String p = tmp6;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(79)
					++(_g);
					HX_STACK_LINE(80)
					::String tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::haxe::remoting::AsyncConnection tmp8 = c->resolve(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					c = tmp8;
				}
			}
			HX_STACK_LINE(81)
			Dynamic tmp4 = m->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			c->setErrorHandler(tmp4);
			HX_STACK_LINE(82)
			Dynamic tmp5 = m->__Field(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			c->call(m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ),tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DelayedConnection_obj,process,(void))

::haxe::remoting::DelayedConnection DelayedConnection_obj::create( ){
	HX_STACK_FRAME("haxe.remoting.DelayedConnection","create",0xc9a850ad,"haxe.remoting.DelayedConnection.create","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",86,0xe0ffc83a)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",87,0xe0ffc83a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00") , null(),false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/DelayedConnection.hx",87,0xe0ffc83a)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(87)
						Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(87)
						HX_STACK_DO_THROW(tmp);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") ,  Dynamic(new _Function_2_1()),true);
				__result->Add(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41") , Dynamic( Array_obj<Dynamic>::__new() ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(87)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::haxe::remoting::DelayedConnection tmp1 = ::haxe::remoting::DelayedConnection_obj::__new(tmp,Array_obj< ::String >::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DelayedConnection_obj,create,return )


DelayedConnection_obj::DelayedConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void DelayedConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DelayedConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_END_CLASS();
}

void DelayedConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__path,"__path");
	HX_VISIT_MEMBER_NAME(__data,"__data");
}

Dynamic DelayedConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connection") ) { if (inCallProp == hx::paccAlways) return get_connection(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_connection") ) { return get_connection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_connection") ) { return set_connection_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool DelayedConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { outValue = process_dyn(); return true;  }
	}
	return false;
}

Dynamic DelayedConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connection") ) { if (inCallProp == hx::paccAlways) return set_connection(inValue); }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void DelayedConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connection","\x1e","\xa0","\x12","\xf5"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(DelayedConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DelayedConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("get_connection","\x67","\x28","\x08","\x6b"),
	HX_HCSTRING("set_connection","\xdb","\x10","\x28","\x8b"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DelayedConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DelayedConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class DelayedConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void DelayedConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.DelayedConnection","\x9d","\xaa","\x5b","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DelayedConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DelayedConnection_obj >;
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
} // end namespace remoting
