#include <hxcpp.h>

#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Matcher
#include <tusk/Matcher.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
namespace tusk{

Void Matcher_obj::__construct()
{
HX_STACK_FRAME("tusk.Matcher","new",0x20ba172f,"tusk.Matcher.new","tusk/Matcher.hx",9,0xc0278e62)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->excludes = Array_obj< int >::__new();
	HX_STACK_LINE(10)
	this->includes = Array_obj< int >::__new();
}
;
	return null();
}

//Matcher_obj::~Matcher_obj() { }

Dynamic Matcher_obj::__CreateEmpty() { return  new Matcher_obj; }
hx::ObjectPtr< Matcher_obj > Matcher_obj::__new()
{  hx::ObjectPtr< Matcher_obj > _result_ = new Matcher_obj();
	_result_->__construct();
	return _result_;}

Dynamic Matcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matcher_obj > _result_ = new Matcher_obj();
	_result_->__construct();
	return _result_;}

::tusk::Matcher Matcher_obj::include( int tid){
	HX_STACK_FRAME("tusk.Matcher","include",0xd9ea5877,"tusk.Matcher.include","tusk/Matcher.hx",21,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(22)
	int tmp = tid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = this->excludes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(23)
		::String tmp3 = (HX_HCSTRING("Can't add component '","\xc2","\xe1","\x40","\x78") + tid);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::String tmp4 = (tmp3 + HX_HCSTRING("' because it is already in the excludes list!","\xea","\x7e","\xba","\x61"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Matcher.hx","\x2c","\x2d","\x9b","\xcb"),23,HX_HCSTRING("tusk.Matcher","\xbd","\x53","\x9d","\xda"),HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::tusk::debug::Exception tmp6 = ::tusk::debug::Exception_obj::__new(tmp4,null(),null(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(25)
	int tmp3 = tid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	int tmp4 = this->includes->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	if ((tmp5)){
		HX_STACK_LINE(26)
		int tmp6 = tid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		this->includes->push(tmp6);
	}
	HX_STACK_LINE(28)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,include,return )

::tusk::Matcher Matcher_obj::exclude( int tid){
	HX_STACK_FRAME("tusk.Matcher","exclude",0x33261929,"tusk.Matcher.exclude","tusk/Matcher.hx",36,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(37)
	int tmp = tid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = this->includes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	if ((tmp2)){
		HX_STACK_LINE(38)
		::String tmp3 = (HX_HCSTRING("Can't add component '","\xc2","\xe1","\x40","\x78") + tid);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		::String tmp4 = (tmp3 + HX_HCSTRING("' because it is already in the includes list!","\x5c","\xe5","\xea","\xb2"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Matcher.hx","\x2c","\x2d","\x9b","\xcb"),38,HX_HCSTRING("tusk.Matcher","\xbd","\x53","\x9d","\xda"),HX_HCSTRING("exclude","\xda","\xbe","\x32","\xab"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		::tusk::debug::Exception tmp6 = ::tusk::debug::Exception_obj::__new(tmp4,null(),null(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(40)
	int tmp3 = tid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	int tmp4 = this->excludes->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	if ((tmp5)){
		HX_STACK_LINE(41)
		int tmp6 = tid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		this->excludes->push(tmp6);
	}
	HX_STACK_LINE(43)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,exclude,return )

bool Matcher_obj::isIncluded( int tid){
	HX_STACK_FRAME("tusk.Matcher","isIncluded",0x442f3857,"tusk.Matcher.isIncluded","tusk/Matcher.hx",51,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(52)
	int tmp = tid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = this->includes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2 = (tmp1 > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,isIncluded,return )

bool Matcher_obj::isExcluded( int tid){
	HX_STACK_FRAME("tusk.Matcher","isExcluded",0xff3c1365,"tusk.Matcher.isExcluded","tusk/Matcher.hx",60,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(61)
	int tmp = tid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1 = this->excludes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = (tmp1 > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,isExcluded,return )

bool Matcher_obj::matchesEntity( ::tusk::Entity entity){
	HX_STACK_FRAME("tusk.Matcher","matchesEntity",0x69f3fc05,"tusk.Matcher.matchesEntity","tusk/Matcher.hx",69,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Array< int > _g1 = this->includes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			if ((tmp1)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			int include = tmp2;		HX_STACK_VAR(include,"include");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(71)
			int tmp3 = include;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			bool tmp4 = entity->hasType(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			if ((tmp5)){
				HX_STACK_LINE(72)
				return false;
			}
		}
	}
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		Array< int > _g1 = this->excludes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(75)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(75)
			if ((tmp1)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			int tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			int exclude = tmp2;		HX_STACK_VAR(exclude,"exclude");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(76)
			int tmp3 = exclude;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			bool tmp4 = entity->hasType(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			if ((tmp4)){
				HX_STACK_LINE(77)
				return false;
			}
		}
	}
	HX_STACK_LINE(80)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,matchesEntity,return )

Array< ::Dynamic > Matcher_obj::matchEntities( Array< ::Dynamic > entities){
	HX_STACK_FRAME("tusk.Matcher","matchEntities",0x5d7f6835,"tusk.Matcher.matchEntities","tusk/Matcher.hx",89,0xc0278e62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entities,"entities")
	HX_STACK_LINE(89)
	::tusk::Matcher _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::tusk::Matcher,_g)
	int __ArgCount() const { return 1; }
	bool run(::tusk::Entity entity){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tusk/Matcher.hx",90,0xc0278e62)
		HX_STACK_ARG(entity,"entity")
		{
			HX_STACK_LINE(91)
			::tusk::Entity tmp = entity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			bool tmp1 = _g->matchesEntity(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(90)
	return entities->filter( Dynamic(new _Function_1_1(_g)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matcher_obj,matchEntities,return )


Matcher_obj::Matcher_obj()
{
}

void Matcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matcher);
	HX_MARK_MEMBER_NAME(includes,"includes");
	HX_MARK_MEMBER_NAME(excludes,"excludes");
	HX_MARK_END_CLASS();
}

void Matcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(includes,"includes");
	HX_VISIT_MEMBER_NAME(excludes,"excludes");
}

Dynamic Matcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"include") ) { return include_dyn(); }
		if (HX_FIELD_EQ(inName,"exclude") ) { return exclude_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { return includes; }
		if (HX_FIELD_EQ(inName,"excludes") ) { return excludes; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isIncluded") ) { return isIncluded_dyn(); }
		if (HX_FIELD_EQ(inName,"isExcluded") ) { return isExcluded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"matchesEntity") ) { return matchesEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"matchEntities") ) { return matchEntities_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { includes=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"excludes") ) { excludes=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("includes","\x4b","\x65","\x27","\x66"));
	outFields->push(HX_HCSTRING("excludes","\x59","\x40","\x34","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Matcher_obj,includes),HX_HCSTRING("includes","\x4b","\x65","\x27","\x66")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Matcher_obj,excludes),HX_HCSTRING("excludes","\x59","\x40","\x34","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("includes","\x4b","\x65","\x27","\x66"),
	HX_HCSTRING("excludes","\x59","\x40","\x34","\x21"),
	HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"),
	HX_HCSTRING("exclude","\xda","\xbe","\x32","\xab"),
	HX_HCSTRING("isIncluded","\x46","\x77","\xd6","\xe0"),
	HX_HCSTRING("isExcluded","\x54","\x52","\xe3","\x9b"),
	HX_HCSTRING("matchesEntity","\x76","\x7c","\xe1","\x88"),
	HX_HCSTRING("matchEntities","\xa6","\xe8","\x6c","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matcher_obj::__mClass,"__mClass");
};

#endif

hx::Class Matcher_obj::__mClass;

void Matcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Matcher","\xbd","\x53","\x9d","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matcher_obj >;
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
