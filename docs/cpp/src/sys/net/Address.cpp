#include <hxcpp.h>

#ifndef INCLUDED_sys_net_Address
#include <sys/net/Address.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
namespace sys{
namespace net{

Void Address_obj::__construct()
{
HX_STACK_FRAME("sys.net.Address","new",0x3f906994,"sys.net.Address.new","C:\\HaxeToolkit\\haxe\\std/sys/net/Address.hx",30,0x71dc3577)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->host = (int)0;
	HX_STACK_LINE(32)
	this->port = (int)0;
}
;
	return null();
}

//Address_obj::~Address_obj() { }

Dynamic Address_obj::__CreateEmpty() { return  new Address_obj; }
hx::ObjectPtr< Address_obj > Address_obj::__new()
{  hx::ObjectPtr< Address_obj > _result_ = new Address_obj();
	_result_->__construct();
	return _result_;}

Dynamic Address_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Address_obj > _result_ = new Address_obj();
	_result_->__construct();
	return _result_;}

::sys::net::Host Address_obj::getHost( ){
	HX_STACK_FRAME("sys.net.Address","getHost",0xe468c252,"sys.net.Address.getHost","C:\\HaxeToolkit\\haxe\\std/sys/net/Address.hx",35,0x71dc3577)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::sys::net::Host tmp = ::sys::net::Host_obj::__new(HX_HCSTRING("127.0.0.1","\xfd","\xbc","\x5e","\xa1"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::sys::net::Host h = tmp;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(37)
	int tmp1 = this->host;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	h->ip = tmp1;
	HX_STACK_LINE(38)
	::sys::net::Host tmp2 = h;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Address_obj,getHost,return )

int Address_obj::compare( ::sys::net::Address a){
	HX_STACK_FRAME("sys.net.Address","compare",0x503c5bd9,"sys.net.Address.compare","C:\\HaxeToolkit\\haxe\\std/sys/net/Address.hx",41,0x71dc3577)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(42)
	int tmp = a->host;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = this->host;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	int dh = tmp2;		HX_STACK_VAR(dh,"dh");
	HX_STACK_LINE(43)
	bool tmp3 = (dh != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	if ((tmp3)){
		HX_STACK_LINE(43)
		int tmp4 = dh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		return tmp4;
	}
	HX_STACK_LINE(44)
	int tmp4 = a->port;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	int tmp5 = this->port;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	int dp = tmp6;		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(45)
	bool tmp7 = (dp != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	if ((tmp7)){
		HX_STACK_LINE(45)
		int tmp8 = dp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		return tmp8;
	}
	HX_STACK_LINE(46)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Address_obj,compare,return )

::sys::net::Address Address_obj::clone( ){
	HX_STACK_FRAME("sys.net.Address","clone",0x42df6191,"sys.net.Address.clone","C:\\HaxeToolkit\\haxe\\std/sys/net/Address.hx",49,0x71dc3577)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::sys::net::Address tmp = ::sys::net::Address_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::sys::net::Address c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(51)
	int tmp1 = this->host;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	c->host = tmp1;
	HX_STACK_LINE(52)
	int tmp2 = this->port;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	c->port = tmp2;
	HX_STACK_LINE(53)
	::sys::net::Address tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Address_obj,clone,return )


Address_obj::Address_obj()
{
}

Dynamic Address_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		if (HX_FIELD_EQ(inName,"port") ) { return port; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHost") ) { return getHost_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Address_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Address_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"));
	outFields->push(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Address_obj,host),HX_HCSTRING("host","\x68","\xcf","\x12","\x45")},
	{hx::fsInt,(int)offsetof(Address_obj,port),HX_HCSTRING("port","\x81","\x83","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("host","\x68","\xcf","\x12","\x45"),
	HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"),
	HX_HCSTRING("getHost","\x1e","\x7f","\x95","\x17"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Address_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Address_obj::__mClass,"__mClass");
};

#endif

hx::Class Address_obj::__mClass;

void Address_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.Address","\xa2","\x4f","\x97","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Address_obj >;
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

} // end namespace sys
} // end namespace net
