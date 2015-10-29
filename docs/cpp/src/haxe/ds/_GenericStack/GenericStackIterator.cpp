#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell
#include <haxe/ds/GenericCell.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator
#include <haxe/ds/_GenericStack/GenericStackIterator.h>
#endif
namespace haxe{
namespace ds{
namespace _GenericStack{

Void GenericStackIterator_obj::__construct(::haxe::ds::GenericCell head)
{
HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator","new",0xd4415186,"haxe.ds._GenericStack.GenericStackIterator.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",40,0x6d04e29d)
HX_STACK_THIS(this)
HX_STACK_ARG(head,"head")
{
	HX_STACK_LINE(40)
	this->current = head;
}
;
	return null();
}

//GenericStackIterator_obj::~GenericStackIterator_obj() { }

Dynamic GenericStackIterator_obj::__CreateEmpty() { return  new GenericStackIterator_obj; }
hx::ObjectPtr< GenericStackIterator_obj > GenericStackIterator_obj::__new(::haxe::ds::GenericCell head)
{  hx::ObjectPtr< GenericStackIterator_obj > _result_ = new GenericStackIterator_obj();
	_result_->__construct(head);
	return _result_;}

Dynamic GenericStackIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericStackIterator_obj > _result_ = new GenericStackIterator_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool GenericStackIterator_obj::hasNext( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator","hasNext",0x78c2b193,"haxe.ds._GenericStack.GenericStackIterator.hasNext","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",37,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::haxe::ds::GenericCell tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


Dynamic GenericStackIterator_obj::next( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator","next",0xe4e6050d,"haxe.ds._GenericStack.GenericStackIterator.next","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",38,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::haxe::ds::GenericCell tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Dynamic result = tmp->elt;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(38)
	::haxe::ds::GenericCell tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	this->current = tmp1->next;
	HX_STACK_LINE(38)
	Dynamic tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}



GenericStackIterator_obj::GenericStackIterator_obj()
{
}

void GenericStackIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator);
	HX_MARK_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< Dynamic >::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GenericStackIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< Dynamic >::__Visit(HX_VISIT_ARG);
}

Dynamic GenericStackIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericStackIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxe::ds::GenericCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell*/ ,(int)offsetof(GenericStackIterator_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStackIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStackIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericStackIterator_obj::__mClass;

void GenericStackIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._GenericStack.GenericStackIterator","\x94","\xd6","\x14","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericStackIterator_obj >;
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
} // end namespace _GenericStack
