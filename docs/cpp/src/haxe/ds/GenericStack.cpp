#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell
#include <haxe/ds/GenericCell.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack
#include <haxe/ds/GenericStack.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator
#include <haxe/ds/_GenericStack/GenericStackIterator.h>
#endif
namespace haxe{
namespace ds{

Void GenericStack_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.GenericStack","new",0x64360eba,"haxe.ds.GenericStack.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",67,0x6d04e29d)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GenericStack_obj::~GenericStack_obj() { }

Dynamic GenericStack_obj::__CreateEmpty() { return  new GenericStack_obj; }
hx::ObjectPtr< GenericStack_obj > GenericStack_obj::__new()
{  hx::ObjectPtr< GenericStack_obj > _result_ = new GenericStack_obj();
	_result_->__construct();
	return _result_;}

Dynamic GenericStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericStack_obj > _result_ = new GenericStack_obj();
	_result_->__construct();
	return _result_;}

Void GenericStack_obj::add( Dynamic item){
{
		HX_STACK_FRAME("haxe.ds.GenericStack","add",0x642c307b,"haxe.ds.GenericStack.add","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",73,0x6d04e29d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(74)
		Dynamic tmp = item;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::haxe::ds::GenericCell tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::haxe::ds::GenericCell tmp2 = ::haxe::ds::GenericCell_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		this->head = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_obj,add,(void))

Dynamic GenericStack_obj::first( ){
	HX_STACK_FRAME("haxe.ds.GenericStack","first",0xd04f810a,"haxe.ds.GenericStack.first","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",82,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(83)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(83)
		::haxe::ds::GenericCell tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		tmp2 = tmp3->elt;
	}
	HX_STACK_LINE(83)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_obj,first,return )

Dynamic GenericStack_obj::pop( ){
	HX_STACK_FRAME("haxe.ds.GenericStack","pop",0x64379beb,"haxe.ds.GenericStack.pop","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",91,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::haxe::ds::GenericCell k = tmp;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(93)
	bool tmp1 = (k == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(94)
		return null();
	}
	else{
		HX_STACK_LINE(96)
		this->head = k->next;
		HX_STACK_LINE(97)
		Dynamic tmp2 = k->elt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		return tmp2;
	}
	HX_STACK_LINE(93)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_obj,pop,return )

bool GenericStack_obj::isEmpty( ){
	HX_STACK_FRAME("haxe.ds.GenericStack","isEmpty",0xb349519d,"haxe.ds.GenericStack.isEmpty","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",104,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_obj,isEmpty,return )

bool GenericStack_obj::remove( Dynamic v){
	HX_STACK_FRAME("haxe.ds.GenericStack","remove",0xf09e522a,"haxe.ds.GenericStack.remove","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",117,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(118)
	::haxe::ds::GenericCell prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(119)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::haxe::ds::GenericCell l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(120)
	while((true)){
		HX_STACK_LINE(120)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		if ((tmp2)){
			HX_STACK_LINE(120)
			break;
		}
		HX_STACK_LINE(121)
		bool tmp3 = (l->elt == v);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		if ((tmp3)){
			HX_STACK_LINE(122)
			bool tmp4 = (prev == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(123)
				this->head = l->next;
			}
			else{
				HX_STACK_LINE(125)
				prev->next = l->next;
			}
			HX_STACK_LINE(126)
			break;
		}
		HX_STACK_LINE(128)
		prev = l;
		HX_STACK_LINE(129)
		l = l->next;
	}
	HX_STACK_LINE(131)
	bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_obj,remove,return )

Dynamic GenericStack_obj::iterator( ){
	HX_STACK_FRAME("haxe.ds.GenericStack","iterator",0xf8f5c554,"haxe.ds.GenericStack.iterator","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",139,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::haxe::ds::_GenericStack::GenericStackIterator tmp1 = ::haxe::ds::_GenericStack::GenericStackIterator_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_obj,iterator,return )

::String GenericStack_obj::toString( ){
	HX_STACK_FRAME("haxe.ds.GenericStack","toString",0x9dca4c12,"haxe.ds.GenericStack.toString","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",166,0x6d04e29d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(168)
	::haxe::ds::GenericCell tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	::haxe::ds::GenericCell l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(169)
	while((true)){
		HX_STACK_LINE(169)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		if ((tmp2)){
			HX_STACK_LINE(169)
			break;
		}
		HX_STACK_LINE(170)
		Dynamic tmp3 = l->elt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(171)
		l = l->next;
	}
	HX_STACK_LINE(173)
	::String tmp1 = a->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	::String tmp2 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	::String tmp3 = (tmp2 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_obj,toString,return )


GenericStack_obj::GenericStack_obj()
{
}

void GenericStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStack);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void GenericStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic GenericStack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericStack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::haxe::ds::GenericCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell*/ ,(int)offsetof(GenericStack_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStack_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericStack_obj::__mClass;

void GenericStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.GenericStack","\xc8","\xe9","\xad","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericStack_obj >;
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
