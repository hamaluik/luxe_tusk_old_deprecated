#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
namespace haxe{
namespace remoting{

Void Context_obj::__construct()
{
HX_STACK_FRAME("haxe.remoting.Context","new",0xf22fefde,"haxe.remoting.Context.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Context.hx",28,0xad9da40b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->objects = tmp;
}
;
	return null();
}

//Context_obj::~Context_obj() { }

Dynamic Context_obj::__CreateEmpty() { return  new Context_obj; }
hx::ObjectPtr< Context_obj > Context_obj::__new()
{  hx::ObjectPtr< Context_obj > _result_ = new Context_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context_obj > _result_ = new Context_obj();
	_result_->__construct();
	return _result_;}

Void Context_obj::addObject( ::String name,Dynamic obj,Dynamic recursive){
{
		HX_STACK_FRAME("haxe.remoting.Context","addObject",0x1d3185be,"haxe.remoting.Context.addObject","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Context.hx",32,0xad9da40b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(recursive,"recursive")
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp = this->objects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &obj,Dynamic &recursive){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Context.hx",33,0xad9da40b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00") , obj,false);
					__result->Add(HX_HCSTRING("rec","\x50","\xd9","\x56","\x00") , recursive,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		Dynamic tmp2 = _Function_1_1::Block(obj,recursive);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context_obj,addObject,(void))

Dynamic Context_obj::call( Array< ::String > path,cpp::ArrayBase params){
	HX_STACK_FRAME("haxe.remoting.Context","call",0xf0798760,"haxe.remoting.Context.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Context.hx",36,0xad9da40b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(37)
	bool tmp = (path->length < (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	if ((tmp)){
		HX_STACK_LINE(37)
		::String tmp1 = path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::String tmp2 = (HX_HCSTRING("Invalid path '","\x15","\x63","\x4a","\xbc") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::String tmp3 = (tmp2 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(38)
	::haxe::ds::StringMap tmp1 = this->objects;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::String tmp2 = path->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Dynamic tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	Dynamic inf = tmp3;		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(39)
	bool tmp4 = (inf == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	if ((tmp4)){
		HX_STACK_LINE(40)
		::String tmp5 = path->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::String tmp6 = (HX_HCSTRING("No such object ","\x47","\x76","\x03","\xac") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(41)
	Dynamic o = inf->__Field(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(42)
	Dynamic tmp5 = o;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	::String tmp6 = path->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	Dynamic tmp7 = ::Reflect_obj::field(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	Dynamic m = tmp7;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(43)
	bool tmp8 = (path->length > (int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	if ((tmp8)){
		HX_STACK_LINE(44)
		bool tmp9 = inf->__Field(HX_HCSTRING("rec","\x50","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		if ((tmp10)){
			HX_STACK_LINE(44)
			::String tmp11 = path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			::String tmp12 = (HX_HCSTRING("Can't access ","\x39","\xed","\x41","\x2c") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g1 = (int)2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			int _g = path->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				if ((tmp12)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				int i = tmp13;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(46)
				o = m;
				HX_STACK_LINE(47)
				Dynamic tmp14 = o;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				::String tmp15 = path->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				m = tmp16;
			}
		}
	}
	HX_STACK_LINE(50)
	Dynamic tmp9 = m;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	bool tmp10 = ::Reflect_obj::isFunction(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	if ((tmp11)){
		HX_STACK_LINE(51)
		::String tmp12 = path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		::String tmp13 = (HX_HCSTRING("No such method ","\xe5","\x1b","\xf1","\x4f") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		HX_STACK_DO_THROW(tmp13);
	}
	HX_STACK_LINE(52)
	Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	Dynamic tmp13 = m;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(52)
	Dynamic tmp14 = ::Reflect_obj::callMethod(tmp12,tmp13,params);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(52)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(Context_obj,call,return )

::haxe::remoting::Context Context_obj::share( ::String name,Dynamic obj){
	HX_STACK_FRAME("haxe.remoting.Context","share",0xb4de5fdd,"haxe.remoting.Context.share","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Context.hx",55,0xad9da40b)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(56)
	::haxe::remoting::Context tmp = ::haxe::remoting::Context_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::haxe::remoting::Context ctx = tmp;		HX_STACK_VAR(ctx,"ctx");
	HX_STACK_LINE(57)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	Dynamic tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	ctx->addObject(tmp1,tmp2,null());
	HX_STACK_LINE(58)
	::haxe::remoting::Context tmp3 = ctx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context_obj,share,return )


Context_obj::Context_obj()
{
}

void Context_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void Context_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic Context_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Context_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"share") ) { outValue = share_dyn(); return true;  }
	}
	return false;
}

Dynamic Context_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Context_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context_obj::__mClass,"__mClass");
};

#endif

hx::Class Context_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("share","\xdf","\xe4","\x1c","\x7c"),
	::String(null()) };

void Context_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.Context","\xec","\x68","\x0f","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context_obj >;
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
