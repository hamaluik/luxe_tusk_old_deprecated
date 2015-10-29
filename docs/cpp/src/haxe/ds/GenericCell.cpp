#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell
#include <haxe/ds/GenericCell.h>
#endif
namespace haxe{
namespace ds{

Void GenericCell_obj::__construct(Dynamic elt,::haxe::ds::GenericCell next)
{
HX_STACK_FRAME("haxe.ds.GenericCell","new",0x14fd4914,"haxe.ds.GenericCell.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",30,0x6d04e29d)
HX_STACK_THIS(this)
HX_STACK_ARG(elt,"elt")
HX_STACK_ARG(next,"next")
{
	HX_STACK_LINE(30)
	this->elt = elt;
	HX_STACK_LINE(30)
	this->next = next;
}
;
	return null();
}

//GenericCell_obj::~GenericCell_obj() { }

Dynamic GenericCell_obj::__CreateEmpty() { return  new GenericCell_obj; }
hx::ObjectPtr< GenericCell_obj > GenericCell_obj::__new(Dynamic elt,::haxe::ds::GenericCell next)
{  hx::ObjectPtr< GenericCell_obj > _result_ = new GenericCell_obj();
	_result_->__construct(elt,next);
	return _result_;}

Dynamic GenericCell_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericCell_obj > _result_ = new GenericCell_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


GenericCell_obj::GenericCell_obj()
{
}

void GenericCell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericCell);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void GenericCell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic GenericCell_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericCell_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::haxe::ds::GenericCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericCell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericCell_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{hx::fsObject /*::haxe::ds::GenericCell*/ ,(int)offsetof(GenericCell_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericCell_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericCell_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericCell_obj::__mClass;

void GenericCell_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.GenericCell","\x22","\x6f","\x3e","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericCell_obj >;
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
